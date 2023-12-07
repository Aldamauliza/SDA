#include<stdio.h> 
#include<stdlib.h>

//definisi struct node

struct node {
	int data; 
	struct node *next;
};

//deklarasi pointer head untuk node pertama 
struct node *head;

//deklarasi fungsi yang akan digunakan

void headnode (int jumlahnode); 
void currentnode (int data);
void deleterdmnode (int posisi);
void print();

main (){
	int jumlahnode=5;
	int data;
	int posisi;
	printf("Isi dari Linked list sebelum insertion: \n");

	//menginput data node pertama dengan memanggil fungsi headnode 
	headnode(50); 
	//menginput data node selanjutnya dengan memanggil fungsi currentnade
	currentnode (28); 
	currentnode (30);
	currentnode (40);
	currentnode (50);

//menampilkan data node yang telah diinputkan dengan memanggil fungsi print 
	print();

//menghapus data node terakhir dengan memanggil fungsi deletelostnade

	deleterdmnode(3); 
	printf("\nIsi dari linked list setelah insertion : \n"); 
	print();
}

 //definisi fungsi headnode 
 //fungsi untuk memasukan data node pertama 
 void headnode (int nodedata) {

	struct node *temp;

//memberikan alamat node secara otomatis 
	head=(struct node *)malloc(sizeof(struct node));

		head->data =nodedata; 
		head->next=NULL;
		temp=head;

} 
//definisi fungsi currentnode 
//fungsi untuk memasukan data node selanjutnya 
void currentnode (int data)

{

	struct node *baru; 
	struct node *temp;

	baru=(struct node *)malloc(sizeof(struct node));
	baru=(struct node*)malloc(sizeof(struct node));

		baru->data= data;
		baru->next= NULL;

		temp= head;

		while (temp->next!=NULL)
		{
		
			temp=temp->next;
			}
			temp->next-baru;

}
//definisi fungsi delete lastnode 
//fungsi untuk menghapus data node terakhir

void deleterdmnode (int posisi){
	int posisinode;
	struct node *currentnode;
	struct node *prevnode;

	currentnode=head; 
	prevnode=head;

	for (posisinode=2; posisinode <=posisi; posisinode++)
	{
	prevnode=currentnode; 
	currentnode=currentnode->next;

	if(currentnode==NULL)
		break;
	}

		if(currentnode != NULL)
		{
			if (currentnode==head) {

				head=head->next;
			}
			prevnode->next=currentnode->next; 
			currentnode->next=NULL;

			free(currentnode);
		}
	}
//definisi fungsi print 
//fungsi untuk menampilkan data

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
			printf("%d\n", temp->data);
			temp=temp->next;
		}
	}
}
