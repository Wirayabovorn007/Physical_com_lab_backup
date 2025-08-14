#include <stdio.h>

int main(){
    int user_duration_min, user_duration_sec;
    int n;
    
    scanf("%d.%d%d",&user_duration_min, &user_duration_sec, &n);
    int queueInd[n];
    char songs[n][51];
    int min, sec;
    int totalUserSec = user_duration_min * 60 + user_duration_sec;
    int songLen[n];
    int totalLenInQueue = 0;
    for (int i=0; i<  n; i++){
        scanf(" Queue#%d <|> %[^<] <|> %d.%d",&queueInd[i], songs[i], &min, &sec);
        songLen[i] = min*60+sec;
        totalLenInQueue += songLen[i];
    }
    int timeleft = totalUserSec%totalLenInQueue;
    if (timeleft == 0) {
        printf("Song Order: %d\nSong Name: %s\nSong Process: Complete",queueInd[n-1], songs[n-1]);
        return 0;
    }
    for (int i=0; i< n; i++){
        if (timeleft <= songLen[i]){
            printf("Song Order: %d\nSong Name: %s\n",queueInd[i], songs[i]);
            if (songLen[i] == timeleft){
                printf("Song Process: Complete");
                return 0;
            }
            else{
                int percent = (timeleft * 100) / songLen[i];
                if (percent ==0) percent=1;
                if (percent >= 100) percent = 99;
                printf("Song Process: %d%%", percent);
                return 0;
            }
        }
        timeleft -= songLen[i];
    }
}