#include <stdio.h>

int main() {
    char name[5][20];   // 5 names, each up to 19 chars + '\0'
    int i, j, l = 0;
    int arrlength[5];

    printf("Enter any five names:\n");
    for(i = 0; i < 5; i++) {
        scanf("%s", name[i]);
    }

    // Calculate length
    for(i = 0; i < 5; i++) {
        l = 0;
        for(j = 0; name[i][j] != '\0'; j++) {
            l++;
        }
        arrlength[i] = l;
    }
    printf("\nNAME\t\tLENGTH\n");
    for(i = 0; i < 5; i++) {
        printf("%s\t\t%d\n", name[i], arrlength[i]);
    }

    return 0;
}


// Also mention the vowel count of each name 
#include <stdio.h>

int main() {
    char name[5][20];
    int i, j, l = 0;
    int arrlength[5];
    int vcnt;

    printf("Enter any five names:\n");

    for(i = 0; i < 5; i++) {
        scanf("%s", name[i]);
    }

    // Length
    for(i = 0; i < 5; i++) {
        l = 0;
        for(j = 0; name[i][j] != '\0'; j++) {
            l++;
        }
        arrlength[i] = l;
    }

    printf("\nNAME\t\tLENGTH\t\tVOWELS\n");

    // Vowel count
    for(i = 0; i < 5; i++) {
        vcnt = 0;

        for(j = 0; name[i][j] != '\0'; j++) {
            if(name[i][j]=='a'||name[i][j]=='e'||name[i][j]=='i'||name[i][j]=='o'||name[i][j]=='u'||
               name[i][j]=='A'||name[i][j]=='E'||name[i][j]=='I'||name[i][j]=='O'||name[i][j]=='U') {
                vcnt++;
            }
        }

        printf("%s\t\t%d\t\t%d\n", name[i], arrlength[i], vcnt);
    }

    return 0;
}


//---------------------------------------------------------------------------------------------------------------------------------------
// This just using the python 
#include<Stdio.h>
int main(){
    char name[10];
    int l;
    char *ptr;
    ptr=&name[0];
    printf("Enter Your Name: ");
    scanf("%s", name);

    l=0;
    while(ptr!='\0'){
        l++;
        i++
    }

    printf("Length is: %d", l);

    return 0;
}

// Using Pointers Reverse the characters 
#include<stdio.h>
int main(){
    char name[10];
    int l=0,i;
    char *ptr;
    
    ptr=&name[0];
    
    printf("Enter Your Name: ");
    scanf("%s", name);
    
    while(*ptr!='\0'){
        l++;
        ptr++;
    }

    printf("Length is: %d\n", l);
    
    printf("The Reverse of your name is: ");
    ptr = name + l - 1;
    for(i=0;i<l;i++){
        printf("%c", *ptr);
        ptr--;
    }

    return 0;
}

// To count vowels and counters

#include<stdio.h>
int main(){
    char name[10];
    int l=0,i;
    char *ptr;
    int vcnt = 0;
    int ccnt = 0;
    
    ptr=&name[0];
    
    printf("Enter Your Name: ");
    scanf("%s", name);
    
    while(*ptr!='\0'){
        if(*ptr=='a'|| *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u'){
            vcnt++;
        }
        else{
            ccnt++;
        }
        l++;
        ptr++;
    }

    printf("Length is: %d\n", l);
    
    printf("The Reverse of your name is: ");
    ptr = name + l - 1;
    for(i=0;i<l;i++){
        printf("%c", *ptr);
        ptr--;
    }

    printf("\nThe vowels in the name are: %d", vcnt);
    printf("\nThe counters in the name are: %d", ccnt);

    return 0;
}











