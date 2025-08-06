#include <stdio.h>
 
int main(){
    float m1[3][3], m2[3][3], ans[3][3];
    float val;
 
    scanf("%f%f%f%f%f%f%f%f%f", 
    &m1[0][0], &m1[0][1], &m1[0][2],
    &m1[1][0], &m1[1][1], &m1[1][2], 
    &m1[2][0], &m1[2][1], &m1[2][2]);
 
    scanf("%f%f%f%f%f%f%f%f%f",
    &m2[0][0], &m2[0][1], &m2[0][2],
    &m2[1][0], &m2[1][1], &m2[1][2],
    &m2[2][0], &m2[2][1], &m2[2][2]);
 
    printf("A x B\n");
 
    for (int i =0; i < 9; i++){
        val = 0;
        for (int j = 0; j< 2; j++){
             for (int k = 0; k<2; k++){
                val += m1[i][k]*m2[i][k];
             }
             ans[i][j] = val;
        }
    }

    for (int i=0; i< 9; i++){
        
    }
}