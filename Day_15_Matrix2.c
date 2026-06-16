// Sum of row in single matrix 

#include<stdio.h>

int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(int i=0; i<3; i++){
        int sum = 0;

        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }

        printf("Row %d sum = %d\n", i+1, sum);
    }
}

// Sum of Columns 
#include<stdio.h>
int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(int i=0; i<3; i++){
        int sum = 0;

        for(int j=0; j<3; j++){
            sum += arr[j][i];
        }
        printf("Columns %d sum = %d\n", i+1, sum);
    }
}

// matrix diagonals 1 5 9 
#include<stdio.h>

int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(int i=0; i<3; i++){
        int sum = 0;

        for(int j=0; j<3; j++){
            if(i==j){
                printf("%d", arr[i][j]);
            }
        }
    }
}


// opp matrix diagonal  3 ,5 , 7
#include<stdio.h>

int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(int i=0; i<3; i++){
        int sum = 0;

        for(int j=0; j<3; j++){
            if(i+j==2){
                printf("%d", arr[i][j]);
            }
        }
    }
}

// Even jagah pe 0 
#include<stdio.h>

int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(int i=0; i<3; i++){
        int sum = 0;

        for(int j=0; j<3; j++){
            if(arr[i][j]%2==0)
            {
                arr[i][j]=0;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}


// 

#include<stdio.h>
int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(int i=0; i<3; i++){
        int sum = 0;

        for(int j=0; j<3; j++){
            if(i==j)
            {
                arr[i][j]=1;
            }
            else{
                arr[i][j]=0;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

//  HOTEL BOOKING SYSTEM 
// 1) Book room 2) View Status 3) Cancel booking 4)Update 5) Generate the  bill 6) Exit 

#include<stdio.h>

int main(){

    int arr1[3][3]={0};
    int ch, f, r;
    int price = 1000;

    do{
        printf("\n 1. Wanna book a room");
        printf("\n 2. View room status");
        printf("\n 3. Cancel booking");
        printf("\n 4. Generate bill");
        printf("\n 5. Exit");
        printf("\n Choose your option: ");
        scanf("%d", &ch);

        switch(ch){

            case 1:
                printf("Enter Floor number (0-2): ");
                scanf("%d",&f);

                printf("Enter Room number (0-2): ");
                scanf("%d",&r);

                if(arr1[f][r]==0){
                    arr1[f][r]=1;
                    printf("Room booked successfully!\n");
                }else{
                    printf("Room already booked!\n");
                }
                break;

            case 2:
                printf("\nRoom Status (0=Free,1=Booked)\n");
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        printf("%d ",arr1[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Enter floor: ");
                scanf("%d",&f);

                printf("Enter room: ");
                scanf("%d",&r);

                if(arr1[f][r]==1){
                    arr1[f][r]=0;
                    printf("Booking cancelled.\n");
                }else{
                    printf("Room already free.\n");
                }
                break;

            case 4:
                printf("Enter floor: ");
                scanf("%d",&f);

                printf("Enter room: ");
                scanf("%d",&r);

                if(arr1[f][r]==1){
                    printf("\n----- BILL -----\n");
                    printf("Floor : %d\n",f);
                    printf("Room  : %d\n",r);
                    printf("Amount: Rs.%d\n",price);
                }else{
                    printf("Room not booked!\n");
                }
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    }while(ch!=5);

    return 0;
}
