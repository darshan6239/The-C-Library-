// Extracting the numbers 

#include<stdio.h>
int main(){
    int num=153;

    while(num>0){
        int digit=num%10;
        printf("%d\n" , digit);
        num=num/10;
    }
    return 0;
}


// Sum of the Output of the above code

#include<stdio.h>
int main(){
    int num = 153;
    int sum = 0;
    while(num>0){
        int digit = num%10;
        sum = sum + digit;
        num = num/10;
    }
    printf("%d\n", sum)
    return 0;
}


// WAP to print even digits from num 123

#include<stdio.h>
int main(){
    int num = 123;
    while(num>0){
        int digit = num%10;

        if(digit % 2 == 0){
            printf("%d\n", digit)
        }

        num = num/10;
    }
    return 0;
}

// WAP to print odd digits from num 123 

#include<stdio.h>
int main(){
    int num = 123;
    while(num>0){
        int digit = num%10;

        if(digit % 2 !=0){
            printf("%d\n", digit);
        }

        num = num/10;
    }
    return 0;
}


// WAP to reverse the number which is getting output as  3   5   1 into 351 

#include<stdio.h>
int main(){
    int num = 153, rev = 0;
    printf("Original Number: %d", num);
    while(num>0){
        int digit = num%10;
        rev= rev*10+ digit;
        num = num/10;
    }
    printf("Reversed Number: %d", rev);

    return 0;
}


// WAP for the Palindrom Number

#include<stdio.h>
int main(){
    int num = 15, rev = 0;
    printf("Original Number: %d", num);
    while(num>0){
        int digit = num%10;
        rev= rev*10+ digit;
        num = num/10;
    }
    printf("Reversed Number: %d", rev);

    if(num == rev){
        printf("The Number is Palindrome")
    }
    else if{
        printf("The Number is Not Palindrome ")
    }

    return 0;
}

 // Palidrome of Numbers 
#include <stdio.h>
int main() {
    int num = 241;
    int pali = num;
    int rev = 0;

    printf("Original Number: %d\n", num);

    while (pali > 0) {
        int digit = pali % 10;
        rev = rev * 10 + digit;
        pali = pali / 10;
    }

    printf("Reversed Number: %d\n", rev);

    if (num == rev) {
        printf("The Number is Palindrome");
    } else {
        printf("The Number is not Palindrome");
    }

    return 0;
}



// Neon Numbers Example 
#include<stdio.h>
int main(){
    int num=9;
    int square= num*num;
    int dam=square;
    int sum = 0;

    printf("The square of your number is: %d", square);

    while(dam>0){
        int digit= dam%10;
        printf("\nThe Separted digit is: %d", digit);
        sum = sum+digit;
        dam= dam/10;
    }

    printf("\nThe sum of digits is: %d", sum);

    if(sum == num){
        printf("The number is a neon number");
    }
    else{
        printf("The Number is not a Neon Number");
    }
    return 0;
}



// factors of the given number  homework !! Factors and factorial 

#include<stdio.h>
int main(){
    int num = 10 ;
    int i;

    for( i=1; i<=num ;  i++ ){
        if(num % i == 0){
            printf("\nThe factors of the Given number is: %d", i);
        }
    }
    return 0;
}


// FACTORIAL EXAMPLE 
#include<Stdio.h>
int main(){
    int num =  ;
    int fact = 1;

    for(i=1; i<=num; i++){
        fact = fact*i;
    }
    print("The factorial of %d is : %d", num, fact)
}