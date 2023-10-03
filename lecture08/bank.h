#ifndef DEFINE_H_BANK
#define DEFINE_H_BANK

typedef struct {
    int balance; // 残高(balance)
    char password[128]; // パスワード(password)
} Bank;

extern Bank* create_account(int balance,const char* password);
extern int balance(const Bank* bank);
extern int withdraw(Bank* bank, int amount, const char* password);
extern void deoisit(Bank* bank, int amount);
