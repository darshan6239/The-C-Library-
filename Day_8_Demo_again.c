// factors 
#include<stdio.h>
int main(){
    int i,n;

    printf("Enter any number: ");
    scanf("%d",&n);

    i=2;
    printf("factors of %d is:", n);

    while(i<=n/2){
        if(n%i==0){
            printf("\n%d",i);
        }
        i++;
    }
}


//factorial 
#include<stdio.h>
int main(){
    int n;
    int fact,i;
    
    printf("Enter any number: ");
    scanf("%d",&n);
    
    i=1;
    fact=1;
    while(i<=n){
        fact = fact*i;
        i++;
    }
    printf("The factors of %d is: %d", n,fact);
}

//
#include<stdio.h>
int main() {
    int n, fact = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    while(n > 0) {
        fact = fact * n;
        n--;
    }

    printf("Factorial is: %d", fact);

    return 0;
}

//Prime Number 

#include<stdio.h>
int main(){
    int n,i;
    int flag=1;

    printf("Enter any number: ");
    scanf("%d", &n);

    i=2;
    while(i<=n/2){
        if(n%i==0){
            flag=0;
            break;
        }
        i++;
    }

    if(flag==1){
        printf("Its prime Number");
    }
    else{
        printf("Not a prime number");
    }
}



//Enter base and power and print result 
#include<stdio.h>

int main(){
    int base, power, result;
    int cnt;

    printf("Enter base and Power: ");
    scanf("%d%d", base, power);

    result=1;
    while(cnt<=power){
        result=result*base;
        cnt++;
    }
    printf("\nFor base %d power %d result %d", base,power,result);
}


//Armstrong Number till Some number 

#include<stdio.h>
int main(){
    int i,num, result;
    int cnt=0 , sum =0;

    printf("Enter any number in which you want from 0 to : ");
    scanf("%d", &num);

    int i=1;
    while(i<=num){
        printf("%d", i);
        i++;
        
        while(num>0){
        count ++;
        num = num/10;
    }
    num = temp;
    while(num>0){
        int digit=num%10;
        
        int a=1, pow=1;
        while(a<=count){
            pow*= digit;//pow=pow*digit
            a++;
        }

    sum = sum+pow;

    num/=10;
    }
}
printf("The armstrong numbers are: %d", i)
}


#include<stdio.h>

int main(){
    int num, i;

    printf("Enter any number up to which you want Armstrong numbers: ");
    scanf("%d", &num);

    printf("Armstrong numbers are:\n");

    for(i = 1; i <= num; i++){
        int temp = i;
        int n = i;
        int count = 0;
        int sum = 0;

        // Count digits
        while(n > 0){
            count++;
            n /= 10;
        }

        n = temp;

        // Armstrong logic
        while(n > 0){
            int digit = n % 10;
            int pow = 1;

            for(int a = 1; a <= count; a++){
                pow *= digit;
            }

            sum += pow;
            n /= 10;
        }

        // Check
        if(sum == temp){
            printf("%d ", temp);
        }
    }

    return 0;
}



//fibonaanci number 

#include<stdio.h>
int main(){
    int i, n, a ,b , next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonanci series is: ");
    
    a=0;
    b=1;

    for(i=1; i<=n; i++){
        printf("%d\n",a);
        next = a+b;
        a=b;
        b = next;
    }
}

//fibo using while 
#include<stdio.h>
int main(){
    int i, j , k ;
    int cnt; 

    cnt = 1; 
    i = 0;
    j = 1;
    while(cnt <= 10)
    {
        k = i+j;
        printf("%d", i);
        i = j;
        j = k;

        cnt++;
    }
}