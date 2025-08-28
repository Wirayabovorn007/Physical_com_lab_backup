#include <stdio.h>

char *strCpy(char *dest, char *src){
	int i=0;
	while (src[i]){
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int strcmp(char *s1, char *s2){
	int i=0;
	
	while (s1[i] && s2[i]){
		if (s1[i] != s2[i]) return (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (unsigned char)s1[i] - (unsigned char)s2[i];
}

long long int getOrder(char *songName, char arr[][51], long long int n){
	long long int i=0;
	
	while (i < n){
		if (strcmp(songName, arr[i]) == 0) return i+1;
		i++;
	}
	return i+1;
}

int main(){
	long long int	minInput;
	long long int	secInput;
	long long int	totalTime;
	long long int n;

	scanf("%lld.%lld", &minInput, &secInput);
	totalTime = minInput*60 + secInput;

	scanf("%lld", &n);

	char songName[n][51];
	long long int songlen[n], songmin, songsec, ind_queue, totalSongLen = 0;

	for (int i=0; i<n; i++){
		char temp[51];
		scanf(" Queue#%lld <|> %[^<] <|> %lld.%lld", &ind_queue, temp, &songmin, &songsec);
		long long int totalSongTime = songmin * 60 + songsec;
		if (ind_queue > n) ind_queue = i + 1;
		strCpy(songName[ind_queue - 1], temp);
		songlen[ind_queue - 1] = totalSongTime;
		totalSongLen += totalSongTime;
	}
	long long int timeLeft = totalTime%totalSongLen;
	if (timeLeft == 0){
		printf("Song Order: %lld\nSong Name: %s\nSong Process: Complete", getOrder(songName[n - 1],  songName, n), songName[n - 1]);
		return 0;
	}
	for (long long int i=0; i<n; i++){

		if (timeLeft == songlen[i]){
			printf("Song Order: %lld\nSong Name: %s\nSong Process: Complete", getOrder(songName[i],  songName, n), songName[i]);
			return 0;
		}
		if (timeLeft < songlen[i]){
			printf("Song Order: %lld\nSong Name: %s\n", getOrder(songName[i],  songName, n), songName[i]);
			long long int percent = ((double)timeLeft / (double)songlen[i]) * 100.0;
			if (percent == 0) percent++;
			if (percent >= 100) percent = 99;
			printf("Song Process: %lld%%", percent);
			return 0;
		}
		timeLeft -= songlen[i];
	}
}