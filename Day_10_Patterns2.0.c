// Reverse Traingle 
#include<stdio.h>
int main(){
    int i, j ,n;

    n = 1;
    for(i=4; i>=n; i--){
        for(j=1; j<=i; j++){
            printf("*");
        }
    printf("\n");
    }
}

//to print 1111; 000; 11; 0 
#include<stdio.h>
int main(){
    int i, j ,n;

    n = 1;
    for(i=4; i>=n; i--){
        for(j=1; j<=i; j++){
            if(i%2==0){
                printf("1")
            }
            else {
                printf("0")
            }
        }
    printf("\n");
    }
}

// To print 1234; 123; 12; 1
#include<stdio.h>
int main(){
    int i, j ,n;

    n = 1;
    for(i=4; i>=n; i--){
        for(j=1; j<=i; j++){
            printf("%d", j);
        }
    printf("\n");
    }
}

// To print AAAA; BBB; CC; D

#include<stdio.h>
int main(){
    int i, j ,n;
     n = 4;
    char ch = 'A';

    for(i=n; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("%c", ch );
        }
        ch++;
        printf("\n");
    }
}

// ABCD; ABC ; AB; A

#include<stdio.h>
int main(){
    int i, j ,n;
     n = 4;

    for(i=n; i>=1; i--){
        char ch = 'A';
        for(j=1; j<=i; j++){
            printf("%c", ch );
            ch++;
        }
        printf("\n");
    }
}

// 2222; 444; 44; 2 
// 4444; 333; 22; 1 
// 1111; 222; 33; 4
// AAAA;aaa; BB; b 
// 1010; 010; 10; 0
// 1; 33; 555; 7777; 555; 33; 1 
// 4; 33; 222; 1111; 222; 33; 4



// Right Right angle triangle 

#include<stdio.h>
int main(){
    int i , j , k, n;
    n=4; 
    for(i=1; i<=n; i++){
        for(k=n-i; k>0; k--){
            printf(" ");
        }
    for(j=1; j<=i; j++){
        printf("*");
    }
    printf("\n");
    }
}

//  1 ; 22; 333; 4444 
#include<stdio.h>
int main(){
    int i , j , k, n;
    n=4; 
    for(i=1; i<=n; i++){
        for(k=n-i; k>0; k--){
            printf(" ");
        }
    for(j=1; j<=i; j++){
        printf("%d", i);
    }
    printf("\n");
    }
}


// 1; 21 ; 321; 4321 
#include<stdio.h>
int main(){
    int i , j , k, n;
    n=4; 
    for(i=1; i<=n; i++){
        for(k=n-i; k>0; k--){
            printf(" ");
        }
    for(j=i; j>=1; j--){
        printf("%d", j);
    }
    printf("\n");
    }
}

//4; 33; 222; 1111
#include<stdio.h>
int main(){
    int i , j , k, n, m;
    n=4; 
    m=4;
    for(i=1; i<=n; i++){
        for(k=n-i; k>0; k--){
            printf(" ");
        }
    for(j=1; j<=i; j++){
        printf("%d", m);
    }
    m--;
    printf("\n");
    }
}