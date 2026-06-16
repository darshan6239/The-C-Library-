// To print 1 to 5 using while loop

#include<Stdio.h>
int main(){
    int i=1;
    while(i<=5)
    {
        printf("%d", i);
        i++;
    }

    return 0;
}

#include<stdio.h>
int main(){
    int i = 1;
    for(i=1; i<=5; i++){
        printf("%d", i);
    }
}
// to print 51 to 70 numbers 
#include<stdio.h>
int main(){
    int i=51;
    while(i<=70)
    {
        printf("%d", i);
        i++;
    }
    return 0;
}

// print the sum of numbers which is divisible by 5 and 7 seperately 

#include <stdio.h>

int main() {
    int i;
    int sum5 = 0, sum7 = 0;

    for (i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
            sum5 += i;
        }
    }

    for (i = 1; i <= 100; i++) {
        if (i % 7 == 0) {
            sum7 += i;
        }
    }

    printf("Sum of numbers divisible by 5: %d\n", sum5);
    printf("Sum of numbers divisible by 7: %d\n", sum7);

    return 0;
}

// ----------------------------------FOR LOOP---------------------------------------
//example 
// to print 21 to 50 
#include<stdio.h>
int main(){
    for(int i=21; i<=50; i++)
    {
        printf("%d", i);
    }
    return 0;
}

// to print REVERSE OF 21 TO 50
#include<stdio.h>
int main(){
    for(int i=50; i>=21; i--)
    {
        printf("%d", i);
    }
    return 0;
}


// fOR EVEN NUMBERS '
#include<stdio.h>
int main(){
    for(int i=50; i>=21; i--)
    {
        if(i%2==0)
        {
            printf("%d", i);
        }
    }
    return 0;
}


// USER INPUT IN FOR LOOP 
#include<stdio.h>
int main(){
    int start, end;
    printf("Enter the Start Number: \n");
    scanf("%d", &start);
    printf("Enter the End Number: \n");
    scanf("%d", &end);
    for(int i=start; i<=end; i++)
    {
        printf("%d", i);
    }
    return 0;
}

//FOR EVEN NUMBERS 

#include<stdio.h>
int main(){
    int start, end;
    printf("Enter the Start Number: \n");
    scanf("%d", &start);
    printf("Enter the End Number: \n");
    scanf("%d", &end);
    for(int i=start; i<=end; i++)
    {
        if(i%2==0);{
             printf("%d", i);
        }
    }
    return 0;
}

// Give choice to user/ 1)print number from 1 to 10
// 2) print numbers in reverse order on his wish 
// 3) sum of natural no from where to where 

#include <stdio.h>

int main() {
    int choice;
    int i, sum, start, end;

    do {
        printf("\n--- CHOICES ---");
        printf("\n1) Print numbers from where to where");
        printf("\n2) Print numbers in reverse order (user choice)");
        printf("\n3) Sum of natural numbers (from where to where)");
        printf("\n4) Exit");

        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nEnter starting number: ");
            scanf("%d", &start);

            printf("Enter ending number: ");
            scanf("%d", &end);

            printf("Numbers are:\n");
            for (i = start; i <= end; i++) {
                printf("%d ", i);
            }
        }

        else if (choice == 2) {
            printf("\nEnter starting number: ");
            scanf("%d", &start);

            printf("Enter ending number: ");
            scanf("%d", &end);

            printf("Numbers in reverse order:\n");
            i = end;
            while (i >= start) {
                printf("%d ", i);
                i--;
            }
        }

        else if (choice == 3) {
            sum = 0;

            printf("\nEnter starting number: ");
            scanf("%d", &start);

            printf("Enter ending number: ");
            scanf("%d", &end);

            i = start;
            do {
                sum += i;
                i++;
            } while (i <= end);

            printf("Sum = %d", sum);
        }

        else if (choice == 4) {
            printf("\nExiting program...");
        }

        else {
            printf("\nInvalid choice! Try again.");
        }

    } while (choice != 4);

    return 0;
}
