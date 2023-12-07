#include<stdio.h>
main()
{
	//deklarasi dan inisialisasi array
	int i,j,temp, min, x, L[5]={30,10,40,20,50};
	
	//perulangan untuk menampilkan element array
	printf("Element array sebelum selection sort\n");
	for(i=0;i<5;i++){
		printf("%d ", L[i]);
	}
	
	//Perulangan selection sort untuk pengurutan menurun (ascending)
	for(i=0;i<4;i++){
		min=i;
		for(j=i+1;j<5;j++){
			if(L[min]>L[j]){
				min=j;
			}	
		}
		temp=L[i];
		L[i]=L[min];  
		L[min]=temp;	
	}
	printf("\n\n");
	//Perulangan untuk menampilan element yang sudah dilakukan selection sort
	printf("Element array setelah selection sort\n");
	for(i=0; i<5;i++){
		printf("%d ", L[i]);
	}
}
