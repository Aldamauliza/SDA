#include <stdio.h>

main()
{
	//deklarasi dan instalasi variabel
	int a[10]={20,15,22,14,12,10,24,19,18,16};
	int key,flag=0;
	
	//menginput data yang akan dicari
	printf("input data yang ingin dicari:");
	scanf("%d",&key);
	
	//proses pencarian data
	for(int i=0;i<10;i++){
		if(key==a[i]){
			flag=1;
			break;
			
		}
	}
	
	//menampilkan pesan jika data ditemukan atau tidak ditemukan
	if(flag==1)
		printf("data ditemukan");
	else
		printf("data tidak ditemukan");
}

