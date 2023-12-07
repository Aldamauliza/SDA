#include <stdio.h> 
#include <stdlib.h>

struct node {
	int data;
	struct node* link;
};

int main(){
	struct node *data1 = (struct node*)malloc(sizeof(struct node));
	data1->data= 10;
	data1->link = NULL;
	
	struct node *data2 = (struct node*)malloc(sizeof(struct node));
	data2->data= 20; data2->link = NULL;
	data1->link = data2;

	struct node *data3 = (struct node*)malloc(sizeof(struct node));
	data3->data = 30; data3->link= NULL;
	data2->link= data3;
	
	struct node *data4 = (struct node*)malloc(sizeof(struct node));
	data4->data = 40; data4->link= NULL;
	data3->link = data4;

	struct node *data5= (struct node *)malloc(sizeof(struct node));
	data5->data = 50; data5->link= NULL;
	data4->link = data5;
	
	struct node *data6 = (struct node*)malloc(sizeof(struct node)); 
	struct node*data7;
	{
		if(data6 == NULL)
		{
			printf("Tidak ada Lokasi Memory.");
		} 
		else
		{
			data6->data=60;
			data6->link=NULL;
			data7=data1;

			while(data7->link!= NULL)
			{
				data7=data7->link;
			}
				data7->link=data6;
			}
}
	printf("Elemen Pada Linked List: \n"); 
	while(data1 != NULL)
	{
		printf("%d\n",data1->data); 
		data1 = data1->link;
	}
return 0;
}
