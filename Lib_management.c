#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct library
{
    char bk_name[30];
    char author[30];
    int pages;
    float price;
};

int main()
{
    struct library l[100];
    char ar_nm[30],bk_nm[30];
    int i,choice, keepcount;
    i=choice=keepcount = 0;

    while(choice!=6)
    {
        printf("\n**## LIBRARY MANAGEMENT SYSTEM ##**\n");
        printf("1) Add a new book information.\n");
        printf("2) Display book information.\n");
        printf("3) List all books of given author.\n");
        printf("4) List the title of specified book.\n");
        printf("5) List the count of books in the library.\n");
        printf("6) Exit");

        printf ("\n\nSelect an option from the above menu : ");
        scanf("%d",&choice);

        switch (choice)
        {
        //  Adding a Book 
        case 1:  

        printf ("Enter the book's name = ");
        scanf ("%s",l[i].bk_name);

        printf ("Enter the author's name = ");
        scanf ("%s",l[i].author);

        printf ("Enter total pages in the book = ");
        scanf ("%d",&l[i].pages);

        printf ("Enter the price of the book = ");
        scanf ("%f",&l[i].price);
        keepcount++;

        break;
        //      Displaying the information of the book
        case 2:
        printf("The Entered book's information is as follows :\n");
        for(i=0; i<keepcount; i++)
        {
            printf ("Book's name = %s",l[i].bk_name);

            printf ("\t Author's name = %s",l[i].author);

            printf ("\t  Pages = %d",l[i].pages);

            printf ("\t  Price = %f",l[i].price);
        }
        break;

        //      Listing all the books of a given author.
        case 3:
        printf ("Enter author name : ");
        scanf ("%s",ar_nm);
        for (i=0; i<keepcount; i++)
        {
            if (strcmp(ar_nm, l[i].author) == 0)
            printf ("%s %s %d %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
        }
        break;

        //      Listing the Title of a Specified Book.
        case 4:
        printf ("Enter book name : ");
        scanf ("%s",bk_nm);
        for (i=0; i<keepcount; i++)
        {
            if (strcmp(bk_nm, l[i].bk_name) == 0)
            printf ("%s \t %s \t %d \t %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
        }
        break;

        //      Total books available in the Library.
        case 5:
        printf("\n Number of books present in the library are : %d", keepcount);
        break;

        //      Exiting the MENU
        case 6:
        exit (0); 

    }
}
return 0;

}