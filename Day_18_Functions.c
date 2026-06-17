// type 1
#include<stdio.h>

void addnum(){
    int n1, n2, add;
    printf("\nEnter any two numbers: ");
    scanf("%d%d", &n1, &n2);
    add = n1+n2;
    printf("\nAdd of the two numbers %d and %d is = %d", n1, n2, add);
}

void subnum(){
    int n1, n2, sub;
    printf("\nEnter any two numbers: ");
    scanf("%d%d", &n1, &n2);
    sub = n1-n2;
    printf("\nSubstraction of the two numbers %d and %d is = %d", n1, n2, sub);
}

void mulnum(){
    int n1, n2, mul;
    printf("\nEnter any two numbers: ");
    scanf("%d%d", &n1, &n2);
    mul = n1*n2;
    printf("\nMultiplication of the two numbers %d and %d is = %d", n1, n2, mul);
}

void divnum(){
    float n1, n2, div;
    printf("\nEnter any two numbers: ");
    scanf("%d%d", &n1, &n2);
    div = n1/n2;
    printf("\nDivison of the two numbers %0.2f and %0.2f is = %0.2f", n1, n2, div);
}

int main(){
    while(1){
        int ct;

        addnum();
        subnum();
        mulnum();
        divnum();

        printf("\nPress 1 if you want to continue: ");
        scanf("%d", ct);

        if(ct!=1){
            break;
        }
    }

}


// Type 2

#include<stdio.h>

void addnum(){
    int n1, n2, add;
    printf("\nEnter any two numbers: ");
    scanf("%d%d", &n1, &n2);
    add = n1 + n2;
    printf("\nAdd of the two numbers %d and %d is = %d", n1, n2, add);
}

void subnum(int n1, int n2){
    int sub;
    sub = n1 - n2;
    printf("\nSubtraction of the two numbers %d and %d is = %d", n1, n2, sub);
}

int mulnum(){
    int n1, n2, mul;
    printf("\nEnter any two numbers: ");
    scanf("%d%d", &n1, &n2);
    mul = n1 * n2;
    return mul;
}

float divnum(int n1, int n2){
    float div;
    div = (float)n1 / n2;
    printf("\nDivision of %d and %d is = %.2f", n1, n2, div);
    return div;
}

int main(){

    while(1){

        int ct;
        int n1, n2, mul;
        float div;

        printf("\nEnter any two numbers: ");
        scanf("%d%d", &n1, &n2);

        addnum();          // no argument, no return
        subnum(n1,n2);     // argument, no return

        mul = mulnum();    // no argument, return
        printf("\nMul is : %d", mul);

        div = divnum(n1,n2); // argument , return
        printf("\nDivision is: %.2f", div);

        printf("\nPress 1 if you want to continue: ");
        scanf("%d", &ct);

        if(ct != 1)
            break;
    }

    return 0;
}


// Example 
// void circle(float), float triangle(), float react(float, float)

#include<stdio.h>
void circle(float radius){
    float area;
    area = 3.14*radius*radius;
    printf("The area of the circle whose radius is %f is : %f", radius, area);
}

float triangle(){
    float base, height, areatriangle;
    printf("\n Enter the value of Base and Height: ");
    scanf("%f%f", &base, &height);
    areatriangle = 0.5*base*height;
    return areatriangle;
}

float rectangle(float lenght, float breadth){
    float arearectangle;
    arearectangle = lenght*breadth;
    return arearectangle;
    
}


int main(){
    float radius, length, breadth;
    float areatriangle, arearectangle

    printf("Enter the value of the radius: ");
    scanf("%f", &radius);
    circle(radius);

    areatriangle = triangle();
    printf("The Area of the triangle is: %f", areatriangle);

    printf("Enter the value of breadth and width: ");
    scanf(%f%f, &lenght, &breadth);

    arearectangle = rectangle(lenght,breadth);
    printf("Area of the rectangle is: %f", arearectangle);
}
