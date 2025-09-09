#include<stdio.h>
#include<string.h>
int main(){
   int deposit,withdraw;
   int balance= 10000;
    int pin,choice;
     printf("ENTER YOUR FOUR DIGIT PIN: \n");
     scanf("%d",&pin);
     if (pin==1234){
         printf("access garenteed!");




    do {
        printf("=====SIMPLE ATM SYSTEM=====\n");
         printf("1.make a  deposit\n");
         printf("2.check your balance\n");
         printf("3.withdraw amount\n");
         printf("4.exit system\n");
         printf("enter your choice number: \n");
         scanf("%d",&choice);

        switch (choice ){
            case 1 : printf("enter your deposit amount: ");
            scanf("%d",&deposit);
            printf("you have deposited  $ %d  into your acount!",deposit); break;
            case 2 : printf("the balance in your account is: %d",balance);break;
            case 3: printf("enter your withdrawal amount: ");break;
            scanf("%d",&withdraw);
            printf("you have withdrawed $ %d from your account!",withdraw);break;
            case 4: printf("exiting system....");
            default:
            printf("your entry is  invalid ");


        }
        break;
     } while (choice !=5);




     }

     else{
         printf("access denied... wrrong password entered\n");
     }

}
