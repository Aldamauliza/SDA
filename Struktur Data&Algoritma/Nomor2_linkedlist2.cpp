#include<stdio.h> 
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
}*data1, *data2, *data3, *data4;

main()
{
	int i, n=5, value;
	for(i=0; i<n;i++){
		data1=(struct node*)malloc(sizeof(struct node));

		printf("Masukkan elemen ke-%d: ", i+1);
		 scanf("%d", &value);

		data1->data = value; 
		data1->link = NULL;

		if(data2 == NULL){
			data2 = data1;
			data3 = data1;

		} else {
			data3->link = data1;
			data3 = data1;
		}
	}
	data4 = data2;
	printf("\nElemen pada Linked List :\n");

	while(data4 != NULL) {
		printf("%d\n", data4->data); 
		data4 = data4->link;
	}
}
