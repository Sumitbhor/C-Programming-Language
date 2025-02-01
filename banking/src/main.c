#include"../include/account.h"
int main(int argc, char const *argv[])
{
    printf("Hello HDfC Bank\n ");
    int count = 45;
    char ch= 'A';
    char name[20]="HDFC bank ";

    extern struct Account accSarthak;
    extern  struct Account accSaurav;

// Create Account
createAccount(&accSarthak, 1001,"sarthak" ,100000, "saving");
createAccount(&accSaurav, 1001,"sarthak", 100000, "saving");

printf("account of sarthak\n");
display(&accSarthak);

printf("account of saurav");
display(&accSaurav);
    return 0;
}
//g++ -Iinclude -c ./src/main.c -o ./build/main.o 
//g++ -Iinclude -c ./src/account.c -o ./build/account.o 
//g++ -Iinclude -c ./src/hdfcbank.c -o ./build/hdfcbank.o 