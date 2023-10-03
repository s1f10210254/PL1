/*以下のデータ型Bookで示される値のポインタpと書籍のタイトルを表す文字列title
および価格priceを引数にとり、引数title,priceの値でpがさす値を初期化する
関数init_book(p, title, price)を定義せよ
*/

#include <stdio.h>
#include<string.h>

typedef struct {
    char title[40];
    int  price;
} Book;

void init_book(Book *p,char *title, int price){
    strcpy(p->title,title);
    p->price = price;

}   

int main()
{   
    
    Book book;
    init_book(&book, "Dragon Ball", 400);
    printf("%s (%d)\n", book.title, book.price);
    return 0;
}