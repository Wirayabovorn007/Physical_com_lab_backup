#include <stdio.h>
#include <string.h>


int main(){
    long minute_have;
    int second_have;
    int n;
    int inputM, inputS;

    scanf("%ld.%d", &minute_have, &second_have);
    scanf("%d", &n);

    long totalTime = minute_have * 60 + second_have;
    char songName[n][51];
    int songDutation[n];

    for (int i=0; i<n; i++){
        scanf(" Queue#%*d <|> %[^<] <|> %d.%d", songName[i], &inputM, &inputS);
        songDutation[i]= inputM * 60 + inputS;
    } 
    int ind=0;

    while (1){
        int dur = songDutation[ind];
        if (totalTime < dur){
            printf("Song Order: %d\n", ind+1);
            printf("Sonf Name: %s\n", songName[ind]);
            int percent = (100*totalTime) / dur;
            if (percent == 0 && totalTime > 0) percent = 1;
            printf("Song Process: %d%%", percent);
            break;
        }else if(totalTime == dur){
            printf("Song Order: %d\n", ind + 1);
            printf("Song Name: %s\n", songName[ind]);
            printf("Song Process: Complete");
            break;
        }
        totalTime -= dur;
        ind = (ind + 1) % n;
    }


    
}