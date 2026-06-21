#include<stdio.h>
#include<string.h>

union account{
    int accno;
    char cname[2];
    float accbal;
};

int main(){
    union Account acc;
    printf("\nSize of Union Account is: %d",sizeof(acc));
    acc.accno=101;
    printf("\nAccount Number : %d",acc.accno);
    strcpy(acc.cname,"Ganesh");
    printf("\nCust Name : %s", acc.cname);
    acc.accbal=9999;
    printf("\nAccount Bal : %f, acc.accbal");

    return 0;
}

//-------------------------------------------------------------------------



#include<stdio.h>

struct student{
    int rollno;
    int sname[20];
    int sub1,sub2,sub3;
    int total;
    float percentage;
};

int main(){
        struct student s1;

        printf("\nEnter the roll Number of the student: ");
        scanf("%d", &s1.rollno);

        printf("\nEnter the name of the student: ");
        scanf("%s", &s1.sname);

        printf("\nEnter the marks of subject 1: ");
        scanf("%d", &s1.sub1);
        printf("\nEnter the marks of subject 2: ");
        scanf("%d", &s1.sub2);
        printf("\nEnter the marks of subject 3: ");
        scanf("%d", &s1.sub3);

        s1.total = s1.sub3+s1.sub2+s1.sub1;
        s1.percentage=s1.total/3;

        //calculations 

        printf("\n\tThe Roll number of student is:\t %d", s1.rollno);
        printf("\n\tThe name of student is:\t\t\t %s", s1.sname);
        printf("\n\tThe Marks of Maths :\t\t\t %d", s1.sub1);
        printf("\n\tThe marks of Physics:\t\t\t %d", s1.sub2);
        printf("\n\tThe marks of Chemistry:\t\t\t %d", s1.sub3);
        printf("\n\tThe total of marks is :\t\t\t %d", s1.total);
        printf("\n\tThe percentage of marks is:\t\t\t %.2f", s1.percentage);


}

// --------------------------------------------------------------------------
//For asking the user of how many students

#include<stdio.h>

struct student{
    int rollno;
    int sname[20];
    int sub1,sub2,sub3;
    int total;
    float percentage;

};

int main(){
        int count,i,j;
        printf("Enter the Number of Students: ");
        scanf("%d", &count);
        
        struct student s1[100],temp; 
        
        for(i=0;i<count;i++){
        printf("\nEnter the roll Number of the student: ");
        scanf("%d", &s1[i].rollno);

        printf("\nEnter the name of the student: ");
        scanf("%s", &s1[i].sname);

        printf("\nEnter the marks of subject 1: ");
        scanf("%d", &s1[i].sub1);
        printf("\nEnter the marks of subject 2: ");
        scanf("%d", &s1[i].sub2);
        printf("\nEnter the marks of subject 3: ");
        scanf("%d", &s1[i].sub3);

        s1[i].total = s1[i].sub3+s1[i].sub2+s1[i].sub1;
        s1[i].percentage=s1[i].total/3;
        
            
        }
        for(i=0;i<count;i++){
        printf("------------------------------------------------------");
        printf("\nThe Marksheet of Student %d", (i+1));
        printf("\n\tThe Roll number of student is:\t %d", s1[i].rollno);
        printf("\n\tThe name of student is:\t\t\t %s", s1[i].sname);
        printf("\n\tThe Marks of Maths :\t\t\t %d", s1[i].sub1);
        printf("\n\tThe marks of Physics:\t\t\t %d", s1[i].sub2);
        printf("\n\tThe marks of Chemistry:\t\t\t %d", s1[i].sub3);
        printf("\n\tThe total of marks is :\t\t\t %d", s1[i].total);
        printf("\n\tThe percentage of marks is:\t\t %.2f", s1[i].percentage);
        }
    
        for(i=0;i<count-1;i++){
            for(j=i+1;j<count;j++){
                if(s1[i].total > s1[j].total){
                        temp = s1[i];
                        s1[i] = s1[j];
                        s1[j] = temp;
                    }
                }
        }
        printf("\n\n--- Students Sorted by Marks (Ascending) ---\n");

        for(i=0;i<count;i++){
            printf("\n--------------------------------------");
            printf("\n\tStudent\t %d", i+1);
            printf("\n\tRoll No:\t %d", s1[i].rollno);
            printf("\n\tName:\t\t %s", s1[i].sname);
            printf("\n\tTotal Marks: %d", s1[i].total);
            printf("\n\tPercentage: %.2f", s1[i].percentage);
        }
}


// create this code in Functions !
