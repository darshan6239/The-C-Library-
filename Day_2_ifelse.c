#include<stdio.h>
int main(){
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=18){
        printf("You are eligible to vote");
    }else{
        printf("Not eligible to vote");
    }


}

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Maximum number is: %d", a);
    } else {
        printf("Maximum number is: %d", b);
    }

    return 0;
}


// Else if ladder to check more than one condition 
int main(){
    int marks;
    printf("Enter the Marks: ");
    scanf("%d", &marks);

    if(marks > 80 ){
        printf("Grade A");
    }else if(marks > 60 && marks <= 80){
        printf("Grade B");
    }else if(marks > 40 && marks <= 60){
        printf("Grade C");
    }else{
        printf("Fail");
    }
    return 0;
}

// Example - subject marks 

#include <stdio.h>

int main() {
    int Sub1, Sub2, Sub3, Sub4, Sub5, Total_Marks;
    float Percentage;
    char name[50], College_Name[50];

    printf("Enter Your Name: ");
    scanf("%s", name);

    printf("Enter Your College Name: ");
    scanf("%s", College_Name);

    printf("Enter Your 5 Subjects Marks: ");
    scanf("%d %d %d %d %d", &Sub1, &Sub2, &Sub3, &Sub4, &Sub5);

    Total_Marks = Sub1 + Sub2 + Sub3 + Sub4 + Sub5;
    Percentage = Total_Marks / 5.0;

    printf("\nName: %s", name);
    printf("\nCollege: %s", College_Name);
    printf("\nTotal Marks: %d", Total_Marks);
    printf("\nPercentage: %.2f", Percentage);

    if (Percentage >= 80) {
        printf("\nGrade A");
    } else if (Percentage >= 60) {
        printf("\nGrade B");
    } else if (Percentage >= 40) {
        printf("\nGrade C");
    } else {
        printf("\nFail");
    }
    return 0;
}



/// Examplee 2 - Age 
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 0) {
        printf("Invalid age entered: %d", age);
        age = -age;
        printf("\nConverted to positive age: %d\n", age);
    }

    if (age >= 18 && age <= 104) {
        printf("You are a Major or Adult");
    } else if (age > 104) {
        printf("Invalid age");
    } else {
        printf("You are a Minor");
    }

    return 0;
}


//Positive & negative of numbers 
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number is Positive");
    } else if (num < 0) {
        printf("The number is Negative");
    } else {
        printf("The number is Zero");
    }

    return 0;
}


// Numbers Condtions - greater bet two numbers 

#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the Number: ");
    scanf("%d %d", &num1, &num2);
    
    if(num1>num2){
        printf("The %d is Greater than %d " num1, num2);
    }
    else if(num2>num1){
        printf("The %d is Greater than %d" num2, num1);
    }
    else if (num1 == 0 || num2 == 0) {
        printf("One of the numbers is zero");
    }
    else {
        printf("Both numbers are equal");
    }

    return 0;
}


// Even or odd 
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("The number is Even");
    } else {
        printf("The number is Odd");
    }

    return 0;
}



// The given number is 15 which is div by 3 and 5 
// no = 20 number is divided by 5 only
// no = 12 number is divided by 3 only
// no = 11 number iis not div by 3 and 5

#include<stdio.h>
int main(){
    int num1;

    printf("Enter a number: ");
    scanf("%d", &num1);

    if(num1 % 3 == 0 && num1 % 5 == 0){
        printf("The number is Divided by 3 and 5");
    }
    else if(num1 % 3 == 0){
        printf("The number is divided by 3");
    }
    else if(num1 % 5 == 0){
        printf("The number is Divided by 5");
    }
    else {
        printf("The Number is Not divided by 3 and 5");
    }
    return 0;
}


// Enter any character and check given chhar is captial or small char or number or other char

// A its captial
// a its small
// 1 its number
// * its other char

// ASCII Value 
//    A  65   ||   a  97
//    B  66   ||   b  98
//    C  67   ||   c  99
//    Z  90   ||   z  122

//    0  48   ||   9  57

// Enter any character and check given chhar is captial or small char or number or other char





































