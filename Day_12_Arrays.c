#include<stdio.h>

int main(){
    int arr[5];
    int i, ;
    
    printf("Enter any five numbers: ");
    
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("\n Reverse of the number system is: \n");
    for(i=4; i>=0; i--){
        printf("\n %d", &arr[i]);
    }
}


// array operations 
#include<stdio.h>
int main(){
    int arr[10];
    int i,j,k,search,temp,newvalue, loc;
    int ch;
    int n,ct;
    int flag=0;

    do{
        printf("\n 1-Create Array \n 2-Display Array \n 3-Search Element \n 4-Sort Array");
        printf("\n Enter Your choice: ");
        scanf("%d", &ch);

        switch(ch){

            case 1: // create
            printf("How many elements you want in array, max size is 10: ");
            scanf("%d", &n);

            printf("\n Enter %d numbers in arrays : ", n);
            for(i=0; i<n; i++){
                scanf("%d", &arr[i]);

            }
            break;

            case 2: //display
            printf("\n %d Elements in array are ", n);
            for(i=0; i<n; i++){
                printf("%5d", arr[i]);
            }
            break;

            case 3:
            flag=0;
            printf("\n Enter element to search from array \n: ");
            scanf("%d", &search);
            for(i=0; i<n; i++){
                if(arr[i]==search){
                    flag = 1;
                    break;
                }
            }
            if(flag){
                printf("\n Element Found");    
            }
            else{
                printf("\n Element not found");
            }
            break;

            case 4:
            for(i=0;i<n; i++){
                for(j=i+1;j<n;j++){
                    if(arr[i]>arr[j]){
                        temp = arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                }

                printf("\n After Pass %d \n", (i+1));
                for(k=0; k<n; k++){
                    printf("%5d", arr[k]);
                }
            }
            break; 

            case 5:
            printf("\n Enter new Values and the location you want to insert: ");
            scanf("%d%d", &newvalue, &loc);

            for(i=n; i>=loc-1;i++){
                arr[i+1]=arr[i];

            }
            arr[loc-1]=newvalue;
            n++;
            printf("\n%d Element in stored at %d location", (loc));

            break;

            case 6;
            printf("\n Enter the location to delete values: ");
            scanf("%d", &loc);
            temp = arr[loc-1];
            for(i=loc-1;i<n;i++){
                arr[i]=arr[i+1];
            }
            n--;
            printf("\n Element is deleted from array", temp);

            break;
        }
        printf("\n DO YOU WANT TO CONITNUE PRESS 1");
        scanf("%d", &ct);
    }while(ct==1);

}



