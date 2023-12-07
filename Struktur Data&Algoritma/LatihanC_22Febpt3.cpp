#include<stdio.h>
main()
{
	int arr[] = {1,3,5,7,8,};		//memasukkan nilai
	int i;
	
	printf("element array sebelum delete\n");
	for (i=0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}
	
	
	for (i=3; i<5;i++)	
	{
		arr[i-1]= arr[i];
	}
	
	printf("\n");
	
	printf("element array setelah delet\n");		//menghapus nilai
	for (i=0;i<4;i++)
	{
		printf("%d ",arr[i]);
	}
}

