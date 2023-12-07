#include <stdio.h>
#include <stdlib.h>

struct list{
int data;
struct list *link;
};

int main(){
struct list *head = (struct list*) malloc (sizeof(struct list));
head -> data = 15;
head -> link = NULL;

struct list *curent = (struct list*)malloc (sizeof(struct list));
curent -> data = 20;
curent -> link = NULL;
head -> link = curent;
  
struct list *curent2 = (struct list*)malloc (sizeof(struct list));
curent2 -> data = 25;
curent2 -> link = NULL;
curent -> link = curent2;

while(head !=NULL)
	{
		printf ("%d\n",head->data);
		head = head->link;
	}
}

































