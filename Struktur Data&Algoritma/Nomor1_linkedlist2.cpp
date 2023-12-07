#include <stdio.h> 
#include <stdlib.h>

struct Node {

	int data;
	struct Node* link;
};
void printList(struct Node* n)
{
	while (n != NULL){
		printf("%d\n", n->data);
		n = n->link;
	}
}
int main()
{
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	struct Node* four = NULL;
	struct Node* five = NULL;

	head = (struct Node*)malloc(sizeof(struct Node)); 
	second = (struct Node*)malloc(sizeof(struct Node)); 
	third = (struct Node*)malloc(sizeof(struct Node)); 
	four = (struct Node*)malloc(sizeof(struct Node));
	five = (struct Node*)malloc(sizeof(struct Node));

	head->data=10; 
	head->link=second;

	second->data=20;
	second->link=third;

	third->data =30;
	third->link =four;

	four->data=40; 
	four->link=five;

	five->data=50;
	five->link=NULL;

	printList (head);

	return 0;
}
