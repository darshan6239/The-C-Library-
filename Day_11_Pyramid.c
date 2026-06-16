// Pyramid 

#include<stdio.h>
int main(){
    int i, j, k;
    int n = 5;
    for(i=1; i<=n; i++)
    {
        for(k=n-i; k>0; k--){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//Reverse pyramid 

#include<stdio.h>
int main(){
    int i, j, k;
    int n = 5;
    for(i=n; i>=1; i--)
    {
        for(k=n-i; k>0; k--){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


// To print 999999999, 777777, 55555, 333 , 1 

#include<stdio.h>
int main(){
    int i, j, k;
    int n = 5;
    for(i=n; i>=1; i--)
    {
        for(k=n-i; k>0; k--){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("%d",2*i-1);
        }
        printf("\n");
    }
    return 0;
}


// Full Diamond 

#include<stdio.h>
int main(){
    int i, j, k;
    int n = 5;
    for(i=1; i<=n; i++)
    {
        for(k=n-i; k>0; k--){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=n-1; i>=1; i--)
    {
        for(k=n-i; k>0; k--){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// A, CCC, EEEEE , IIIII, KKK, L 
#include<stdio.h>
int main(){
    int i, j, k;
    int n = 4;
    int ch = 'A';
    for(i=1; i<=n; i++)
    {
        for(k=n-i; k>0; k--){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("%c",ch);
        }
        ch+=2;
        printf("\n");
    }

    for(i=n-1; i>=1; i--)
    {
        for(k=n-i; k>0; k--){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("%c", ch);
        }
        ch+=2;
        printf("\n");
    }
    return 0;
}

// a , bbb, ccccc, bbb, a 
// 1, 101, 10001, 1000001, 10001, 101, 1 


