// Type Functions (bracket mei kuch nahi ho )
// Type Functions (bracket mei kuch nahi ho )
#include<stdio.h>

void adddata(); // Function Declaration 
void subdata();

void adddata(){ // Function Defination 
    int num1, num2, add;
    printf("\nEnter the Two Numbers: ");
    scanf("%d%d",&num1,&num2);
    add = num1+num2;
    printf("\nThe addition of your numbers is: %d", add);
}

void subdata(){
    int num1, num2, sub;
    printf("\nEnter the Two Numbers: ");
    scanf("%d%d",&num1,&num2);
    sub = num1-num2;
    printf("\nThe substraction of your numbers is: %d", sub);
}

int main(){
    adddata(); // Function calling 
    subdata();
    return 0;
}



// Example 2
#include<stdio.h>

void areacircle();
void areatriangle();
void arearectangle();

void areacircle(){
    float areac, radius;
    printf("Enter the Radius of the Circle: ");
    scanf("%f", &radius);
    areac = 3.14 * radius * radius;
    printf("The Area of Circle is: %.2f\n", areac);
}

void areatriangle(){
    float areat, base, height;
    printf("Enter Base and Height of Triangle: ");
    scanf("%f%f", &base, &height);
    areat = 0.5 * base * height;
    printf("The Area of Triangle is: %.2f\n", areat);
}

void arearectangle(){
    float arear, length, height1;
    printf("Enter Length and Height of Rectangle: ");
    scanf("%f%f", &length, &height1);
    arear = length * height1;
    printf("The Area of Rectangle is: %.2f\n", arear);
}

int main(){

    int ch, ct;
    while(1){
        
        printf("\n1. Area of Circle");
        printf("\n2. Area of Triangle");
        printf("\n3. Area of Rectangle");
        printf("\nSelect your Choice: ");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                areacircle();
                break;

            case 2:
                areatriangle();
                break;

            case 3:
                arearectangle();
                break;

            default:
                printf("Invalid Choice!\n");
        }

        printf("Press 1 if you want to continue: ");
        scanf("%d", &ct);

        if(ct != 1)
            break;
    }
    return 0;
}


// Factors , factorail , Power 

#include<Stdio.h>

void factors(int num1);
void factorial(int num2);
void power(int num3, int pow);

void factors(int num1){
    int i;
    i=2;
    printf("factors of %d is:", num1);
    while(i<=num1/2){
        if(n%i==0){
            printf("\n%d",i);
        }
        i++;
}}

void factorial(int num2){
    int fact,i;
       
    i=1;
    fact=1;
    while(i<=num2){
        fact = fact*i;
        i++;
    }
    printf("The factors of %d is: %d", num2,fact);
}

void power(int num3, int pow){
    int xyz;
    xyz = num3*pow;
    printf("%d", xyz);

}


int main(){
    int ch, num1,num2,num3,pow;

    while(1){
    printf("1. Calculate the Factors \n2. Calculate the Factorial \n3. Calculate the power");
    printf("\nChoose the choice: ");
    scanf("%d", ch);

    switch(ch){
        case 1:
            printf("Enter the Number which you want the factors: ");
            scanf("%d", num1);
            factors(int num1);
        break;

        case 2:
            printf("Enter the number which you want the factorials: ");
            scanf("%d", num2);
            factorial(int num2);
        break;

        case 3:
            printf("Enter the base number and the power number: ");
            scanf("%d%d", num3, pow)
            power(int num3, int pow);
        break;
    }
    }

}
