// How to take a particular variable into the temp
#include<stdio.h>
int main(){
    int n = 5;
    int arr[5]={10,20,30,40,50};
    int temp, i, j , k;

    for(i=0; i<=5;i++){
        temp = arr[n-1];
        for(j=n-2; j>=0; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
        printf("\n");
        for(k=0;k<n;k++){
            printf("%5d", arr[k]);
        }
    }
}