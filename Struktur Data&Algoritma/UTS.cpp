#include <stdio.h>

main ()
{

int A[10]= {2,4,6,8,10,12,14,16,18,20};
int i=0,j=9,x,k;

printf("Masukkan data yang dicari : ");
	scanf("%d",&x);
	

while (x<=A[j])

	{
		k=(i+j)/2;
	
	
		if(x==A[k]){
			printf("Data ditemukan pada indeks ke-%d", k);
			return 0;
		
		}
		else if (x<A[k]){
			j=k-1;
		}
			
		else {
			i=i+1;
		}
	}
	printf("data tidak ditemukan");
}
