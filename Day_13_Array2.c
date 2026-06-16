// Using array find the min ,max ,sum and average 

#include<stdio.h>
int main(){
    int arr[10];
    int min, max, i;
    int sum=0;
    float avg;

    printf("Enter the elements of array: \n");
    for(i=0; i<10; i++){
            scanf("%d", &arr[i]);
            sum = sum+arr[i];
    }
    avg=sum/10;

    min=arr[0];
    max=arr[0];
    
    for(i=0; i<10; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    else if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Smallest number is : %d", min);
    printf("\n Largest number is : %d", max);
    printf("Sum is: %d", sum);
    printf("Avg is: %f", avg);


}

// CIRCULAR ARRAY 

