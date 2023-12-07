#include <stdio.h>

main ()
{

int L[10]= {70,68,67,45,25,23,17,15,14,12};
int i=0,j=9,x=20,k;

while (x>=L[j])

	{
		k=(i+j)/2;
	
	
		if(x==L[k]){
			printf("Data ditemukan pada indeks ke-%d", k);
			return 0;
		
		}
		else if (x>L[k]){
			i=k+1;
		}
			
		else {
			j=k-1;
		}
	}
	printf("data tidak ditemukan");
}
