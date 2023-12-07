#include <stdio.h>
main()

{
	//deklarasi dan inisialisasi variabel
	int a[5]= {10,20,30,50,60};
	int key,flag=0;
	int i;
	
	//menginput data yang dicari
	printf("Mencari data");
	scanf("%d", &key);
	for (i=0; i<5; i++)
	{
		//menampilkan pesan jika data ditemukan atau tidak
		if (key == a[i])
	{
	
		flag = 1;
		break;
	}
}

	if (flag==1)
		printf ("data ditemukan");
	else
		printf("data tidak ditemukan");

}
