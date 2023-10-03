
#include <stdio.h>

int amount = 0;

int withdraw(int n){
    if (n > amount){
        return 0;
    }
    else{
        return amount -= n;
    }
}

int deposit(int n){
    return amount += n;
} 

int balance(){
    return amount;
}

int main()
{
    int ok;
    deposit(300);
    ok = withdraw(500);
    printf("Transaction %s\n", ok ? "succeeded" : "failed");

    deposit(400);

    ok = withdraw(500);
    printf("Transaction %s\n", ok ? "succeeded" : "failed");

    printf("Final balance = %d\n", balance());
    return 0;
}
