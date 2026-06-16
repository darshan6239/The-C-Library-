// Prime Number 
#include <stdio.h>
int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } 
    else {
        for (i = 2; i <= num / 2; i++){
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("%d is a Prime Number", num);
    else
        printf("%d is Not a Prime Number", num);

    return 0;
}


// Armstrong Number 
#include<stdio.h>
int main(){
    int num=  ; 
    int count = 0;
    int temp = num;
    int sum = 0;

    while(num>0){
        count ++;
        num = num/10;
    }
    num = temp;
    while(num>0){
        int digit=num%10;
        
        int a=1, pow=1;
        while(a<=count){
            pow*= digit;//pow=pow*digit
            a++;
        }

    sum = sum+pow;

    num/=10;
    }
    temp==sum?"Armstrong Number":"Not A Armstrong NUmber";
}