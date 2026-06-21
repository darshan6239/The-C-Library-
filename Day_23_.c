#include <stdio.h>
#include <string.h>
struct Account
{
    int accno;
    char custname[50];
    int accbal;
};

int main()
{
    struct Account accarr[3], temp;
    int i, j;
    int ch;
    int count = 0;
    int search;
    int found;

    while (1)
    {
        printf("\n1 - Create\n2 - Display\n3 - Search\n4 - Sort\n5 - Delete\n6 - Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1: // Create
            for (i = 0; i < 3; i++)
            {
                printf("\nEnter details for Account %d\n", i + 1);
                printf("Account Number: ");
                scanf("%d", &accarr[i].accno);

                printf("Customer Name: ");
                scanf("%s", accarr[i].custname);

                printf("Account Balance: ");
                scanf("%d", &accarr[i].accbal);
            }
            count = 3;
            break;

        case 2:
            if (count == 0)
            {
                printf("\nNo records available!");
                break;
            }
            printf("\nAccount Details:\n");
            for (i = 0; i < count; i++)
            {
                printf("\nAcc No: %d", accarr[i].accno);
                printf("\nName: %s", accarr[i].custname);
                printf("\nBalance: %d\n", accarr[i].accbal);
            }
            break;

        case 3: // Search
            printf("\nEnter Account Number to search: ");
            scanf("%d", &search);
            found = 0;
            for (i = 0; i < count; i++)
            {   if(accarr[i].accno==search){
                //transaction
                printf("\nElement Found");
                falg = 1;
                temp = accarr[i];

                printf("\n1 - Withdraw \n2 - Deposit");
                scanf("%d", &c);
                if(c==1){
                    printf("\nEnter Amount to withdraw");
                    scanf("%d", &amt);
                }
            }
                if (accarr[i].accno == search)
                {
                    printf("\nAccount Found!");
                    printf("\nAcc No: %d", accarr[i].accno);
                    printf("\nName: %s", accarr[i].custname);
                    printf("\nBalance: %d\n", accarr[i].accbal);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("\nAccount not found!");
            break;

        case 4: // Sort (by account number)
            for (i = 0; i < count - 1; i++)
            {
                for (j = i + 1; j < count; j++)
                {
                    if (accarr[i].accno > accarr[j].accno)
                    {
                        temp = accarr[i];
                        accarr[i] = accarr[j];
                        accarr[j] = temp;
                    }
                }
            }
            printf("\nAccounts sorted by Account Number!");
            break;

        case 5: // Delete
            printf("\nEnter Account Number to delete: ");
            scanf("%d", &search);
            found = 0;

            for (i = 0; i < count; i++)
            {
                if (accarr[i].accno == search)
                {
                    for (j = i; j < count - 1; j++)
                    {
                        accarr[j] = accarr[j + 1];
                    }
                    count--;
                    printf("\nAccount deleted!");
                    found = 1;
                    break;
                }
            }
            if (!=found)
                printf("\nAccount not found!");
            break;

        case 6:
            return 0;
        default:
            printf("\nInvalid choice!");
        }
    }
    return 0;
}