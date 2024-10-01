#include <stdio.h>
#include <string.h>
 struct book
{
    int bookno;
    char bookname[40];
    int  price ;
    char Authorname[20];
};

void show( struct book *b)

{
    printf("the b0ok no is  is : %d\n", b1->code);
    printf("the price of a book is  : %d\n", b1->code);
    printf("the author name of book is  : %s\n", b1->code);
    printf("the name  of book is  : %s\n", b1->code);
}

int main()
{

    struct book b1;
    struct book *ptr;
    ptr = &b1; 

    ptr->bookno = 101;
    ptr->price = 200;
    strcpy(ptr->Authorname, "Himanshu");.
    strcpy(ptr->Bookname, "C programming");
    show(&b1);
    return 0;
}