#include"../include/account.h"
// Account Operation function
void createAccount(struct Account *account,
            int accountNumber,
            char *AccountHolderName,
            float accountBalnce,
            char * accountType){
    account->accountNumber=accountNumber;
    strcpy(account->accountHolderName, AccountHolderName);
    account->accountBalance=accountBalnce;
    strcpy(account->accountType,accountType); 
}

void deposit(struct Account *account, float amount ){
    account->accountBalance+=amount;
}

void withdraw(struct Account *account , float amount){
    account->accountBalance-+amount;
}

void display(struct Account *account){
    printf("\nAccount number : %d\n",account->accountNumber);
    printf("Account Holder Name : %s\n",account->accountHolderName);
    printf("Account balance : %f\n",account->accountBalance);
    printf("Account type : %ssn",account->accountType);

}