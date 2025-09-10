#include <stdio.h>
#include <stdlib.h>

int main(){
    int ISBN,no_copies,choice;
    char title[40];
    char author[40];
    int lib_password=1234;
    int entered_password;
    do{
        printf("enter the password: ");
        scanf("%d",&entered_password);
        if (entered_password==lib_password){
            printf("welcome to the library!!\n");
        }
        else
            printf("incorrect password\n");
    }while(lib_password!=1234);
        do{
        printf("===Mini Library System===\n");
        printf("1.add book details\n");
        printf("2.display book details\n");
        printf("3.exit program\n");
        printf("4.enter your choice:\n");
        scanf("%d",&choice);
        switch (choice){
            case 1:
            printf("enter the title of the book: ");
            scanf("%s",title);
            printf("enter the author of the book: ");
            scanf("%s",author);
            printf("enter the ISBN number of the book: ");
            scanf("%d",&ISBN);
            printf("enter the number of copies  of the book: ");
            scanf("%d",&no_copies);
            printf("details saved!!\n");
            break;
            case 2:
            printf("the title of the book is : %s\n",title);
            printf("the author of the book is : %s\n",author);
            printf("the ISBN number of the book is : %d\n",ISBN);
            printf("thenumber of copies  of the book is : %d\n",no_copies);
            break;
            case 3:
            printf("exiting the program...");
            break;
            default:
            printf("invalid choice.. try again");
            break;
        }
    }while(choice !=3);
}
