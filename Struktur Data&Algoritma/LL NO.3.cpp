#include<stdio.h> 
#include<stdlib.h>

struct node
{
	int data; 
	struct node* next;
};

int main ()
{
	struct node* head [100]; 
	int jumlah;
	int i;

	printf("masukan jumlah node:"); 
	scanf("%d", &jumlah);

	for(i=0;i<jumlah;i++) { 
		head[i]=NULL;
}
for (i=0;i<jumlah;i++){
	head[i]=(struct node*)malloc(sizeof(struct node));
}
int nilai[jumlah];
	for(i=0;i<jumlah; i++){
		printf("input angka ke-%d:", i+1); 
		scanf("%d", &nilai[i]);
}

for(i=0;i<jumlah;i++){
	head[i]->data=nilai[i];
	head[i]->next=head[i+1];
} 

//head[4]->next=NULL;
printf("isi dari linked list: \n"); 
struct node* n=head[0];
while(n!=NULL)
{
	printf("%d\n", n->data);
	n=n->next;
}
return 0;
}
