#include<stdio.h>
int main(){
    int amount = 10;
    int *ptr = &a;
    *ptr=0;
    printf("%d", a); // 10 --> suppose address is 2321212
    printf("%d", &a);
    printf("%d", ptr);
    printf("%d", *ptr);
}


//1) callbyvalue
// callbyvalue = changes not happens in callbyvalue --> org value pe effect nahi hota

//2) callbyreference
// addresses pass karun jar changes karayla jaal tr changes honar 


// | Type              | What is passed      | Original value changes? |
//| ----------------- | ------------------- | ----------------------- |
//| Call by Value     | Copy of variable    | ❌ No                    |
//| Call by Reference | Address of variable | ✅ Yes                   |

#include<stdio.h>

void callbyvalue(int a, int b){
    int temp = a;
    a=b;
    b=temp;
    printf("Callbyvalue a: %d and b: %d \n", a,b );
}

void callbyreference(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("Callbyreference a: %d and b: %d \n",a,b)
    printf("When adding stars the value of a: %d and b: %d", *a,*b);
}

int main(){
    int a=10, b=20;
    printf("Before calling a: %d and b: %d", a,b);
    callbyvalue(a, b);
    callbyreference(&a,&*b);
    printf("After calling a:%d and b:%d\n",a,b );
}


// gpt code
#include<stdio.h>

// Function for Call by Value
void callbyvalue(int a, int b){
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("\nInside callbyvalue function:");
    printf("\na = %d, b = %d\n", a, b);
}

// Function for Call by Reference
void callbyreference(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("\nInside callbyreference function:");
    printf("\na = %d, b = %d\n", *a, *b);
}

int main(){
    int a = 10, b = 20;

    printf("Before function calls:");
    printf("\na = %d, b = %d\n", a, b);

    // Call by Value
    callbyvalue(a, b);

    printf("\nAfter callbyvalue function:");
    printf("\na = %d, b = %d\n", a, b);

    // Call by Reference
    callbyreference(&a, &b);

    printf("\nAfter callbyreference function:");
    printf("\na = %d, b = %d\n", a, b);

    return 0;
}


//Double Pointer 

// Pointer - used to store the address of variable 
// dbpointer - It is used to store the address of the pointer 



