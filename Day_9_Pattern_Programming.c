// pattern of square 
//constant value mule apan inner loop vaparla coz row is 1 1 1 1 and column value is changing 

#include<stdio.h>
int main(){
    int n , i, j;

    for(i=1; i<=4; i++){
        for(j=1; j<=4; j++){
            printf("*")
        }
    printf("\n");    
    }
}

// To print 1111 / 2222 / 3333 / 4444
#include<stdio.h>
int main(){
    int n,i,j;

    n = 4;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf("%d",i);
        }
    printf("\n");
    }
}

// to print 1234 / 1234 / 1234 / 1234 
#include<stdio.h>
int main(){
int n,i,j;

n = 4;

for(j=1; j<=n; j++){
    for(i=1; i<=n; i++){
        printf("%d",i);
    }
printf("\n");
}
}



// to print 1111 / 0000 / 1111 / 0000 

#include<stdio.h>
int main(){
    int n,i,j;

    n = 4;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i%2==0){
                printf("0")
            }
            else{
                printf("1")
            }
        }
    printf("\n");
    }
}

// to print 0101 / 0101/ 0101 / 0101 

#include<stdio.h>
int main(){
    int n,i,j;

    n = 4;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(j%2==0){
                printf("1")
            }
            else{
                printf("0")
            }
        }
    printf("\n");
    }
}

// To print 0101 / 1010 / 0101 / 1010 

#include<stdio.h>
int main(){
    int sum, n,i,j;
    
    sum = 0;
    n = 4;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            sum = i+j;
            if(sum%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
    printf("\n");
    }
}

// In another way 
#include<stdio.h>
int main(){
    int n,i,j;
    
    n = 4;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            sum = i+j;
            if(sum%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
    printf("\n");
    }
}

//  1111 , 0000, 0000, 1111 

#include<stdio.h>
int main(){
    int n,i,j;
    
    n = 4;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i==1 || i==4){
                printf("0");
            }
            else{
                printf("1");
            }
        }
    printf("\n");
    }
}

// 2222 4444 2222 4444 

#include<stdio.h>
int main(){
        int n,i,j;

        n = 4; 

        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                if(i%2==0){
                    printf("4");
                }
                else{
                    printf("1");
                }
            }
        printf("\n");
    }
}

// 3636 3636 3636 3636 

#include<stdio.h>
int main(){
    int i , j , n;
    n = 4; 

    for(i=1; i<=n; i++){
        for(j=1 ; j<=n ; j++){
            if(j%2==0){
                printf("6");
            }
            else{
                printf("3");
            }
        }
    printf("\n");
    }
}

// 4321 4321 4321 4321 

#include<stdio.h>

int main(){
    int i, j, n;
    n = 4;

    for(i=1; i<=n; i++){
        for(j=n; j>=1; j--){
            printf("%d", j);
        }
        printf("\n");
    }
}

 // 2) Reverse triangle
 
 #include<stdio.h>

int main(){
    int i, j, n;
    
    n = 5;
    
    for(i = n; i >= 1; i--){
        for(j = 1; j<=n-i; j++){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}
