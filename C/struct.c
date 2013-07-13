#include <stdio.h>
#include <string.h>

struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;		/* ISBN */
};

void main(){
	struct Books bookone;
	struct Books booktwo;

	strcpy(bookone.title, "Gravitys Rainbow");
	strcpy(bookone.author, "Thomas Pynchon");
	strcpy(bookone.subject, "design, production and dispatch of V-2 rockets");
	bookone.book_id = 140188592;

	strcpy(booktwo.title, "C Programming Language");
	strcpy(booktwo.author, "Brian W. Kernighan, Dennis M. Ritchie");
	strcpy(booktwo.subject, "guide to ANSI standard C language programming");
	booktwo.book_id = 131103628;
	
	printf( "Book 1 title : %s\n", bookone.title);
	printf( "Book 1 author : %s\n", bookone.author);
	printf( "Book 1 subject : %s\n", bookone.subject);
	printf( "Book 1 book_id : %d\n", bookone.book_id);

	printf( "Book 2 title : %s\n", booktwo.title);
	printf( "Book 2 author : %s\n", booktwo.author);
	printf( "Book 2 subject : %s\n", booktwo.subject);
	printf( "Book 2 book_id : %d\n", booktwo.book_id);
}
