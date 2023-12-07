#include<stdio.h>

main()
{
	int arr[] = {1,2,4,5};			//memasukkan nilai awal
	int i;
	printf("elemen array sebelum insertion\n");
	for (i=0;i<4;i++)
	{
		printf("%d", arr[i]);
	}
	
	for (i=3;i>=2;i--)
	{
		arr[i+1]=arr[i];
	}
	
	arr[2]=3;					//menambahkan nilai
	
	printf("\n");
	
	printf("elemen array sesudah insertion\n");
	for (i=0;i<5;i++)
	{
		printf("%d", arr[i]);
	}
}
