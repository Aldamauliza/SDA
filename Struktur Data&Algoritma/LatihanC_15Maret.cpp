#include <stdio.h>

main ()
{

int L[12]= {12,14,15,17,23,25,45,67,68,70};
int i=0,j=9,x=14,k;

while (x<=L[j])

	{
		k=(i+j)/2;
	
	
		if(x==L[k]){
			printf("Data ditemukan pada indeks ke-%d", k);
			return 0;
		
		}
		else if (x<L[k]){
			j=k-1;
		}
			
		else {
			i-i+1;
		}
	}
	printf("data tidak ditemukan");
}
