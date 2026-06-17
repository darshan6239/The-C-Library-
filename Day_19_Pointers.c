// to print the address use %u and &n n print f (use of amper sign)
// * is used to get the aloted value 
// when you remove the star you get the address of it 

// pointer is the variable which is used to store address of another variable 
// to store the address of float variable we need the pointer 

#include<stdio.h>
int main(){
    int n = 10;
    int *ptr;
    
    ptr=&n;
    
    printf("\nValue of n is: %d", n);
    printf("\nAddress of n is: %u", &n);
    printf("\n--------------------------------------");
    printf("\nValue of n is using pointer : %d", *ptr);
    printf("\nAddress of n using pointer : %u", ptr);
}



#include<stdio.h>
int main(){
    int n1=10;
    int n2=20;
    int add;
    int *ptr1,*ptr2,*ptr3;

    ptr1=&n1;
    ptr2=&n2;
    ptr3=&add;

    *ptr3=*ptr1+*ptr2;

    printf("\nThe value of 1st value is = %d", *ptr1);
    printf("\nThe value of 2nd value is = %d", *ptr2);

    printf("\nThe sum of your number is = %d", *ptr3);
}



#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int *ptr;
    
    ptr=&arr[0];

    printf("%d", *ptr);
    printf("\n%d", *ptr+1);  // this is wrong way to print next value the output you get will be wrong
    printf("\n%d", *(ptr+1));
    printf("\n%d", *(ptr+2));
    printf("\n%d", *(ptr+3));
    printf("\n%d", *(ptr+4));

}

// using loop
#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int *ptr;
    int i;
    
    ptr=&arr[0];
    
    for(i=0;i<=4;i++){
        printf("\n%d", *(ptr+i));
    }

}

// for better uderstanding

#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int *ptr;
    int i;
    
    ptr=&arr[0];
    
    for(i=0;i<=4;i++){
        printf("\n%u ---> %d",(ptr+1),  *(ptr+i));
    }

}

// sum of arr

#include<stdio.h>
int main() {
    int arr[5] = {10,20,30,40,50};
    int *ptr;
    int i, sum = 0;
    
    ptr = &arr[0];
    
    for(i = 0; i <= 4; i++) {
        sum = sum +  *(ptr + i);
    }
    printf("Sum = %d", sum);
}

// Enter any numbers in array and count even odd in pointers 

#include<stdio.h>
int main(){
    int arr[10];
    int *ptr;
    int i;
    
    int even=0, odd=0;
    ptr=&arr[0];
    
    printf("\n Enter the ten numbers in array ");
    for(i=0;i<10;i++){
        scanf("%d", ptr+i);
        
        if("%d", ptr+i);
        if(*(ptr+i)%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("\nTotal even numbers are: %d", even);
    printf("\nTotal odd numbers are: %d", odd);
}


//  Dsiplay array using functions and pointers 

#include<stdio.h>
void display(int *, int);

int main(){
    int arr[5]={10,20,30,40,50};
    display(&arr[0],5);
}
void display(int *ptr, int l){
    int i;
    for(i=0;i<l;i++){
        printf("%5d", *(ptr + i));
    }
}

