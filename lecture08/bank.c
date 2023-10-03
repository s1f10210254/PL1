#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int balance; // 残高(balance)
    char password[128]; // パスワード(password)
} Bank;

Bank* create_account(int balance, const char* password){
    Bank* bank = (Bank*)malloc(sizeof(Bank));

    bank->balance = balance;
    strcpy(bank->password, password);
    return bank;
}

int balance(const Bank* bank){
    return bank->balance;
}

int withdraw(Bank* bank, int amount, const char* password){
    if (amount > bank->balance){
        return 0;
    }
    //if(password != bank->password){
    //    return 0;
    //} NG!
    if (strcmp(password, bank->password) != 0){
        return 0;
    }
    bank->balance -= amount;
    return 1;
}

void deposit(Bank* bank, int amount){
    bank->balance += amount;
}
