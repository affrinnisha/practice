#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>
#include<string.h>
int main(){
    int choice,total, roll_num,marks[3];
    float avg;
    char grade;
    char name;
    do {
        printf("======STUDENT RESULT MANAGEMENT SYSTEM======\n");
        printf("1.add student details\n");
         printf("2.display student details\n");

            printf("3.exit\n ");
            scanf("%d",&choice);


            switch(choice){
                case 1:
                printf("enter student name: ");
                scanf("%s",&name);

                printf("enter student roll number: ");
                scanf("%d",&roll_num);

                for (int i= 0;i<3;++i){
                    printf("enter the marks in subjects%d : ",i+1);
                    scanf("%d",&marks [i]);
                    total += marks[i];
                }
                avg= total/3;
                if (avg>=90) grade ='A';
                 else if (avg>=80) grade ='B';
                 else if (avg>=50) grade='C';
                else grade ='D';
                printf("details saved!\n");
                break;
            }
            } while ( choice !=5);
    }
