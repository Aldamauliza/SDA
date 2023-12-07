#include <stdio.h>
main()
{
	int i,j,temp, L[5]={30,10,40,20,50};
	
	printf("Element array sebelum insertion sort\n");
	for(i=0; i<5;i++){
		printf("%d ", L[i]);
	}
		
	for(i=1;i<5;i++){
		temp=L[i];
		j=i-1;
		while(temp<L[j] && j<=0){
			L[j+1]=L[j];
			j=j-1;
		}
	L[j+1]=temp;	
	}
	printf("\n\n");
	
	printf("Element array setelah insertion sort\n");
	for(i=0; i<5;i++){
		printf("%d ", L[i]);
	}
}
