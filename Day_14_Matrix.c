// Putting Values in MAtrix manually 
#include<stdio.h>
int main(){
    int i, j;
    int arr[3][3];

    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;

    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;

    arr[2][0] = 7;
    arr[2][1] = 8;
    arr[2][2] = 9;

    // rows
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d", arr[i][j]);
        }printf("\n");
    }
}


// Print the EVen values from the matrix
#include<stdio.h>
int main(){
    int i, j;
    int arr[3][3];

    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;

    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;

    arr[2][0] = 7;
    arr[2][1] = 8;
    arr[2][2] = 9;

    // rows
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(arr[i][j]%2==0){
            printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
}
}


// Taking inputs from the user

#include<stdio.h>
int main(){
    int i,j;
    int arr[3][3];

    printf("Put the elements in array: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n------------Matrix------------\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d", arr[i][j]);
        }
    printf("\n");
    }

}


// (TRANSPOSE) To print the rows vertically 
#include<stdio.h>
int main(){
    int i,j;
    int arr[3][3];

    printf("Put the elements in array: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n------------Matrix------------\n");

    for(j=0; j<3; j++){
        for(i=0; i<3; i++){
            printf("%d ", arr[i][j]);
        }printf("\n");
    }

}



// Sum of TWO MATRIX

#include<stdio.h>
int main(){
    int mat1[3][3];
    int mat2[3][3];
    int matadd[3][3];

    int i, j;

    printf("\n Add the Elements in Matrix 1: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\n Add the Elements in Matrix 2: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    
    printf("----Addition is------\n");

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            matadd[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", matadd[i][j]) ;
        }
        printf("\n");
    }
}


