#include <stdio.h>

struct siswa	//tagname//	
{
	int id;
	char nama[10];
	float nilai;
};

main()
{
	int i;
	struct siswa sis[10];
	
	printf("masukkan data siswa: ");
	printf("\n\n");
	for(i=0;i<10;i++)
	
{
	printf("masukkan id siswa:" );
	scanf("%d",&sis[i].id);		//Operator
	
	printf("masukkan nama siswa:");
	scanf("%d",&sis[i].nama);
	
	printf("masukkan nilai siswa:");
	scanf("%d",&sis[i].nilai);
}

	printf("DETAIL DATA SISWA:");
	printf("\n\n");
	for(i=0;i<10;i++)
	{
	printf("id siswa :%d\nnama siswa :%s\nnilai siswa :%f\n", sis[i].id, sis[i].nama, sis[i].nilai);
}

}
