#include <stdio.h>

int main()
{
	int a[5] = {1,3,5,7,8};		//memasukkan nilai awal
	int i;
	
	printf("sebelum di update \n");
	
	for(i=0; i<5; i++)
	{
		printf("Nilai [%d]: %d \n", i, a[i]);
	}
	
	a[2] = 10;		// Memasukan nilai elemen
	
	printf("\n");
	
	printf("Sesudah di update \n");
	
	for(i=0; i<5; i++)
	{
		printf("Nilai [%d]: %d \n", i, a[i]);
	}
}

