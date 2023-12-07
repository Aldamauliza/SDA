#include <stdio.h>
main()
{
	//Mengurutkan Data
	int A[7]={3,7,5,13,9,11,1};
	int i, j, k, l=6 ,x, n=7, temp;
	
	printf("element array sebelum sorting\n");
	for(i=0; i<n;i++){
		printf("%d ", A[i]);
	}
	
	for (i=1; i<n; i++){
		for (j=0; j < n-1; j++)
		if (A[j] > A[j+1]){
			temp = A[j+1];
			A[j+1] = A[j];
			A[j] = temp;
		}
	}
	//Mencari Data
	printf("\n\n");
	
	printf("element array setelah sorting\n");
	for(i=0; i<n;i++){
		printf("%d ", A[i]);
	}
	printf("\n\n");
	
	i=0;
	printf("Masukkan nilai yang ingin dicari:");
	scanf("%d",&x);
	while (x<=A[l])
	{
		k=(i+l)/2;
		if(x==A[k]){
			printf("Data ditemukan, data berada pada index ke-%d", k);
			return 0;
		}
		else if (x<A[k]){
			l=k-1;
		}
		else{
			i=i+1;
		}
	}
	printf("Data tidak ditemukan");
	
}
