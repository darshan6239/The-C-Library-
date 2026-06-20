#include<stdio.h>

struct Employee
{
    int empid;
    char empname[10];
    float empsalary;
};

int main()
{
    struct Employee emp;

    printf("Enter Employee id :");
    scanf("%d", &emp.empid);

    printf("Enter Employee Name :");
    scanf("%s", emp.empname);

    printf("Enter Employee Salary : ");
    scanf("%f", &emp.empsalary);

    printf("\n-----------------------------------------");
    printf("\nEmployee ID: %d", emp.empid);
    printf("\nEmployee Name: %s", emp.empname);
    printf("\nEmployee Salary : %f", emp.empsalary);
    return 0;
}

// Using Array 
#include<stdio.h>
struct Employee
{
    int empid;
    char empname[10];
    float empsalary;
};

int main()
{
    struct Employee emp[3];
    int i;

    for(i=0; i<3; i++)
    {
    
    printf("Enter Employee id :");
    scanf("%d", &emp[i].empid);

    printf("Enter Employee Name :");
    scanf("%s", emp[i].empname);

    printf("Enter Employee Salary : ");
    scanf("%f", &emp[i].empsalary);
    
    }
    for(i=0;i<3;i++)
    {
    printf("\n-----------------------------------------");
    printf("\nEmployee ID: %d", emp[i].empid);
    printf("\nEmployee Name: %s", emp[i].empname);
    printf("\nEmployee Salary : %f", emp[i].empsalary);
    }
    return 0;
}

// Seaching the element 
#include<stdio.h>
struct Employee
{
    int empid;
    char empname[10];
    float empsalary;
};

int main()
{
    struct Employee emp[3];
    int i;
    int search;
    int flag=0;

    for(i=0; i<3; i++)
    {
    printf("Enter Employee id :");
    scanf("%d", &emp[i].empid);

    printf("Enter Employee Name :");
    scanf("%s", emp[i].empname);

    printf("Enter Employee Salary : ");
    scanf("%f", &emp[i].empsalary);
    }
    
    for(i=0;i<3;i++){
        if(emp[i].empid == search){
            flag = 1;
            printf("\nEmployee ID: %d", emp[i].empid);
            printf("\nEmployee Name: %s", emp[i].empname);
            printf("\nEmployee Salary %f", emp[i].empsalary);
            break;
        }
    }
    if(flag == 0){
        printf("\nInvalid Employeee Id");
    }
    return 0;
}


// By options 
#include<stdio.h>
struct Employee
{
    int empid;
    char empname[10];
    float empsalary;
};

int main(){
    struct Employee emp[3];
    int i;
    int search;
    int flag=0;

    struct Employee temp;

    while(1){
        printf("\n1 - Create \n2 - Display \n3 - Search \n4 - Sort \n5 - Delete");
        printf("\nEnter Your CHoice");
        scanf("%d",&ch);

        switch(ch){

            case 1:
                for(i=0; i<3; i++)
            {
                printf("Enter Employee id :");
                scanf("%d", &emp[i].empid);

                printf("Enter Employee Name :");
                scanf("%s", emp[i].empname);

                printf("Enter Employee Salary : ");
                scanf("%f", &emp[i].empsalary);
            }
            break;

            case 2:
                for(i=0;i<3;i++){
                    if(emp[i].empid == search){
                    flag = 1;
                    printf("\nEmployee ID: %d", emp[i].empid);
                    printf("\nEmployee Name: %s", emp[i].empname);
                    printf("\nEmployee Salary %f", emp[i].empsalary);
            break;
        }
    }
    if(flag == 0){
        printf("\nInvalid Employeee Id");
    }
    return 0;
}
}}
// By options
// 1. create 2. display 3. Search  4. sort 5. Delete 
// for bank account number , customer name , Balance 
#include<stdio.h>

struct Employee
{
    int empid;
    char empname[20];
    float empsalary;
};

int main()
{
    struct Employee emp[3];
    int i, ch;
    int search, flag;
    
    while(1)
    {
        printf("\n1 - Create \n2 - Display \n3 - Search \n4 - Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                for(i = 0; i < 3; i++)
                {
                    printf("\nEnter Employee ID: ");
                    scanf("%d", &emp[i].empid);

                    printf("Enter Employee Name: ");
                    scanf("%s", emp[i].empname);

                    printf("Enter Employee Salary: ");
                    scanf("%f", &emp[i].empsalary);
                }
                break;

            case 2: // Display
                for(i = 0; i < 3; i++)
                {
                    printf("\nEmployee ID: %d", emp[i].empid);
                    printf("\nEmployee Name: %s", emp[i].empname);
                    printf("\nEmployee Salary: %.2f\n", emp[i].empsalary);
                }
                break;

            case 3: // Search
                printf("\nEnter Employee ID to search: ");
                scanf("%d", &search);
                
                flag = 0;
                for(i = 0; i < 3; i++)
                {
                    if(emp[i].empid == search)
                    {
                        flag = 1;
                        printf("\nEmployee Found!");
                        printf("\nEmployee ID: %d", emp[i].empid);
                        printf("\nEmployee Name: %s", emp[i].empname);
                        printf("\nEmployee Salary: %.2f\n", emp[i].empsalary);
                        break;
                    }
                }

                if(flag == 0)
                {
                    printf("\nEmployee not found!\n");
                }
                break;

            case 4:
                printf("\nExiting...");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }
}










