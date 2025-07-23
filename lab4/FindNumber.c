#include <stdio.h>



int main(){
    float x, y, z;

    scanf("%f %f %f", &x,&y,&z);

    float arr[] = {x, y,z};
    for (int i=0; i<3; i++){
        int min_ind = i;

        for(int j = i+1; j<3; j++){
            if (arr[j] < arr[min_ind])
                min_ind = j;
        }

        float t = arr[i];
        arr[i] = arr[min_ind];
        arr[min_ind] = t;
    }
    printf("%.2f", arr[1]);
}