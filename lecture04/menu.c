#include<stdio.h>

static void morning(){printf("Good morning!\n");}
static void hello(){printf("Hello!\n");}
static void night(){printf("Good night!\n");}
/*
int main(){
    int menu;
    printf("Menu(1-3)?");
    scanf("%d",&menu);

    switch (menu)
    {
    case 1:
        morning();
        return 0;
    case 2:
        hello();
        return 0;
    case 3:
        night();
        return 0;
    
    default:
        printf("ERROR: wrong menu number\n");
        return 1;
    }
}
*/

//実行したい関数を(i-1)番目に入れておく
static void(*menu_cakkbacks[])() = {
    morning,hello,night
};
int main(){
    int menu;
    printf("Menu (1-3)?");
    scanf("%d",&menu);

    if (menu < 1 || menu > 3){
        printf("ERROR: wrong menu number\n");
        return 1;
    }
    //メニュー番号に対応する関数を取り出し、呼び出し
    menu_cakkbacks[menu-1]();
    return 0;
}