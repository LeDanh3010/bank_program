#include <stdio.h>

double deposit();
double withdraw(double cash_balance);
void checkBalance(double cash_balance);

int main(){
    int choice = 0;
    double cash_balance = 0.0;
  
    do{
        printf("***BANK PROGRAM***\n");
        printf("Select an option:\n");
        printf("\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            checkBalance(cash_balance);
            break;
        case 2:
            cash_balance += deposit();    
            break;
        case 3:
            cash_balance -= withdraw(cash_balance);
            break;
        case 4:{
            printf("Thank you for using the bank!\n");
            break;
        }
        default:
            printf("\nInvalid choice! Please select 1-4\n");
        }

    }while(choice != 4);
    return 0;
}

double deposit(){
    double amountOfMoney = 0.0; 
    printf("Enter your cash you want to deposit: ");
    scanf("%lf",&amountOfMoney);
    if(amountOfMoney < 0){
        printf("Your amount of money invalid!\n");
        return 0.0;
    }
    printf("You deposited $%.0lf successfully\n",amountOfMoney);   
    return amountOfMoney;
}

double withdraw(double cash_balance){
    double amountOfMoney = 0.0; 
    printf("Enter your cash you want to withdraw: ");
    scanf("%lf",&amountOfMoney);
        if(amountOfMoney < 0){
            printf("Your amount of money invalid!\n");
            return 0.0;
        }else if(cash_balance < amountOfMoney){
            printf("Your balance is not enough!\n");
            return 0.0;
        } 
    printf("You withdrew $%.3lf successfully\n",amountOfMoney);     
    return amountOfMoney;
}

void checkBalance(double cash_balance){
    printf("Your current balance is: $%.3lf\n",cash_balance);
}