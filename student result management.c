#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>
#include<string.h>
int main(){
    int choice,total=0, roll_num,marks[3];
    float avg;
    char grade;
    char name[50];
    do {
        printf("======STUDENT RESULT MANAGEMENT SYSTEM======\n");
        printf("1.add student details\n");
         printf("2.display student details\n");
        printf("3.exit\n ");
        printf("enter your choice");
            scanf("%d",&choice);


            switch(choice){
                case 1:
                    total=0;
                printf("enter student name: ");
                scanf("%s",name);

                printf("enter student roll number: ");
                scanf("%d",&roll_num);

                for (int i= 0;i<3;++i){
                    printf("enter the marks in subjects%d : ",i+1);
                    scanf("%d",&marks [i]);
                    total += marks[i];
                }
                avg= (float)total/3;
                if (avg>=90) grade ='A';
                 else if (avg>=80) grade ='B';
                 else if (avg>=50) grade='C';
                else grade ='D';
                printf("details saved!\n");
                break;
                case 2:
                printf("the name of the student is : %s\n",name);
                printf("the roll number of the student is %d\n",roll_num);
                    for( int i=0;i<3;i++){
                printf("the mark of the student in subject %d:%d\n",i+1,marks[i]);
                    }
                printf("the total of the student is: %d\n",total);
                printf("the avg of the student is :%f\n",avg);
                printf("the grade of the student is:%c\n",grade);
                break;
                case 3:
                printf("exiting the program....");
                default:
                printf("invalid choice.... try again\n");
                break;
            }
        
            } while ( choice !=3);
    }

