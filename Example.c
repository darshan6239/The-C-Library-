#include<studio.h>
int main(){
    
    int num1,num2,num3;

    printf("\nEnter Any threee Numbers");
    scanf("%d%d%d", &num1, &num2, &num3);

    if((num1>num2)&&(num1>num3)){
        printf("\nGreater number is : %d", num1);}

    else if((num2>num1)&&(num2>num3)){
         printf("\nGreater number is : %d", num2);}

    else if((num3>num1)&&(num3>num2)){
         printf("\nGreater number is : %d", num3);}
}
    

// Conditional Operators 

#include<stdio.h>
int main(){
    itn x =10, y=5, z=4;
    int result;
    result = (x>y)?(x>z?x:z):(y>z)?(y>z?y:z);
    printf("\n Greater Number is : %d" result);

    return 0
}


// Increment & Decrement Operator

#include<stdio.h>
int main(){
    int a = 1, b = 0;
    int x;
    x = a++ || ++b;
    printf("\n x is : %d", x);
    printf("\n a is :  %d", a);
    printf("\n b is : %d", b);

return 0;
}





#include<stdio.h>
//  HOTEL BOOKING SYSTEM 
// 1) Book room 2) View Status 3) Cancel booking 4)Update 5) Generate the  bill 6) Exit 
int main(){
    int i,j,k;
    int ch;

    

}