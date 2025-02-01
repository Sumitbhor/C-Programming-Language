#include<stdio.h>
#include<string.h>
struct Account{
    int accountNumber;
    char accountHolderName[50];
    float accountBalance;
    char accountType[20];
};
void createAccount(struct Account *account,int accountNumber,char *AccountHolderName,float accountBalnce,char * accountType);
void deposit(struct Account *account, float amount );
void withdraw(struct Account *account , float amount);
void display(struct Account *account);