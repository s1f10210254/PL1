#include<stdio.h>
#include "bank.h"


int main(){
    Bank* bank = create_account(1000, "iniad");
    int ok;
    ok = withdraw(bank, 100, "toyo");
    printf("ok?%d\n",ok);
    printf("balance: %d\n", balance(bank));

    ok = withdraw(bank, 500, "iniad");
    printf("ok?%d\n",ok);
    printf("balance: %d\n", balance(bank));

    return 0;
}
