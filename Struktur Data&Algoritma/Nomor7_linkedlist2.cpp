#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;	
};

struct node *head;

void headnode(int jumlahnode);
void currentnode(int data);
void deletefirstnode();
void print();

main (){
	int jumlahnode=5;
	int data;
	printf("Isi dari Linked list sebelum insertion:\n");
	
	headnode(10);
	currentnode(20);
	currentnode(30);
	currentnode(40);
	currentnode(50);
	print();
	
	deletefirstnode();

	printf("\nIsi dari Linked list setelah insertion : \n");
	print();	
}

//fungsi untuk membuat list node
void headnode(int nodedata){

	struct node *baru;
	struct node *temp;
		//alokasi memori untuk memulai node
	head=(struct node*)malloc(sizeof(struct node));
	
	//mengecek apakan memori sudah di lokasikan
	if(head==NULL){
		
		printf("memori tidak bisa dilokasikan.");
    }
	else	
	{
		head->data =nodedata;
		head->next=NULL;
		
		temp=head;		
	} 
}

void currentnode(int data)
{
	struct node *baru;
	struct node *temp;
	
	baru=(struct node*)malloc(sizeof(struct node));
	
	
	if(baru==NULL){
		
		printf("Memory can be allocated.");
	}
	else 
	{
		baru->data= data;
		baru->next= NULL;
		
		temp= head;
		while (temp->next!=NULL)
		{			
			temp=temp->next;
			}	
			temp->next=baru;
	}
}
void deletefirstnode(){
	struct node *temp;
	
	temp=head;
	
	head=head->next;
	free(temp);

}
void print(){
	struct node *temp;
	temp=head;
	if(temp==NULL){
		
		printf("list is empty.");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			
			temp=temp->next;	
		}
	}
}
