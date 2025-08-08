#include <stdio.h>

int main(){
    int start, stop;
    int count = 0;
    
    scanf("%d", &start);
    scanf("%d", &stop);

    printf("pass : ");
    for (int i=start; i <= stop; i++){
        if (i % 2 == 0){
            printf("%d", i);
            if (i < stop) printf(" ");
            count+=i;
        }
    }
    printf("\nSum : %d", count);
    
}