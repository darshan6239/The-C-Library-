//Rules of matrix 
// 1) Col of matrix


// Multiplication of matrix 

#include<Stdio.h>
int main(){
    int i,j,k
    int mat1[2][3], mat2[3][4], mat3[2][4] = {0};
    
    printf("Enter the elements of Matrix 1: \n");
    for(i=0; i<2; i++){
        for(j=0;j<2;j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of Matrix 2: \n");
    for(i=0; i<3; i++){
        for(j=0;j<4;j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(k=0;k<4;k++){
            for(j=0;j<3; j++){
                mat3[i][j] = mat3[i][j] + (mat1[i][j]*mat2[i][j]);
            }
        }
    }

    printf("\n----------MULTIPLICATION OF MATRIX-------------\n");
    for(i=0;i<2;i++){
        for(k=0;k<4;k++){
            printf("%3d", mat3[i][k]);
        }
        printf("\n");
    }
}