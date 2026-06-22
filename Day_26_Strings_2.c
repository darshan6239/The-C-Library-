// whenever the string ends there is null value whihc is being displayed by /0 - this symbol
// vcnt = vowel counter 
// ccnt = conconent counter 

// ENTER ANY NAME AND TELL HOW MANY VOWELS AND CONSONENTS ARE THERE IN THE NAME 
#include<stdio.h>
int main(){
    char name[10];
    int i;
    int ccnt = 0, vcnt = 0;

    printf("Enter the String: ");
    scanf("%s", name);

    for(i = 0; name[i] != '\0'; i++){
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || 
           name[i]=='o' || name[i]=='u'){
            vcnt++;
        }
        else{
            ccnt++;
        }
    }

    printf("The Number of Vowels in the string are: %d\n", vcnt);
    printf("The Number of Consonants in the string are: %d\n", ccnt);

    return 0;
}


//CONVERT ANY NAME IN THE UPPERCASE 
#include<stdio.h>
int main(){
    char name[10];
    int i;
    
    printf("Enter any Name in small letters: ");
    scanf("%s", &name);

    for(i=0;name[i]!='\0';i++){
        if(name[i] >='a' && name[i]<= 'z'){
            name[i] = name[i] - 32; 
        }
    }

    printf("Uppercase name: %s", name);
    return 0;
}



//Concatenation 
#include<stdio.h>
int main(){
    char str1[15], str2[15];
    int i,j;
    
    printf("Enter any Name in String 1: ");
    scanf("%s", &str1);
    
    printf("Enter the Name that you want to join in String 1: ");
    scanf("%s", &str2);

    for(i=0;str1[i]!='\0';i++);
    
    for(j=0;str2[j]!='\0';j++){
        str1[i] = str2[j];
        i++;
    }
    
    str1[i] = '\0'; // we have to tell where the string is getting end to compiler or it will print the garbage value 

    printf("Concatenated String is: %s", str1);
}


// String Copy 
#include<stdio.h>
int main(){
    char str1[15], str2[15];
    int i,j;
    
    printf("Enter any Name in String 1: ");
    scanf("%s", &str1);
    
    printf("Enter the Name that you want to join in String 1: ");
    scanf("%s", &str2);

    for(i=0;str1[i]='\0';i--);
    
    for(j=0;str2[j]!='\0';j++){
        str1[i] = str2[j];
        i++;
    }
    
    str1[i] = '\0'; 
    printf("Concatenated String is: %s", str1);
}