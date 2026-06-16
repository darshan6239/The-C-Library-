#include <stdio.h>

int main() {
  int i, j;
  for (i = 1; i <= 10; i++) {
    printf("Table of %d:\n", i);
    for (j = 1; j <= 10; j++) {
      printf("%d x %d = %d\n", i, j, i * j);
    }
    printf("\n"); // Blank line between tables
  }
  return 0;
}


// To get the output of -43 by logic 
#include<stdio.h>
int main(){
    int i =12;
    int sub = 11;
    do{
        sub=sub-i;

        i++;
    }while(i<=15);
    printf("%d", sub);

    return 0;
}

// sum of numbers divisible by 2 and 4

#include<stdio.h>
int main(){
    int i = 1;
    int sum = 0;
    do{
        if(i%2==0 && i%4==0)
        {
            sum +=i;
        }
        i++;
    }while(i<=100);
    printf("%d", sum);
    return 0;
}


//  Print number from 10 to 1
#include<stdio.h>
int main(){
  int i = 10;
  while(i>=1){
    printf("%d\n", i);
    i--;
  }
  return 0;
}

// Print characters reverse order
#include<stdio.h>
int main(){
  char ch ='Z';

  do{
    printf("%c", ch);
    ch++;
  }
  while(ch<='Z');
  return 0;
}


//Even characters 

#include<stdio.h>
int main(){

char ch =' A ';
do{

  if(ch%2==0)
  {
    print("%c", ch);
  }

  ch++;
}
while(ch>='A');
return 0;
}
