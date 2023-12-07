#include<stdio.h>

struct Karyawan
{
	int id;
	char nama[10];
	char departemen[10];
	char jabatan[10];
	int gaji;
};

main()

{
	int i;
	struct Karyawan Kar[10];

	printf("masukkan data karyawan; ");
	printf("\n\n");
	printf("=======================");
	printf("\n\n");	

{
	printf("masukkan id karyawan:" );
	scanf("%d",&Kar[i].id);
	printf("=======================");	
	printf("\n\n");

	printf("masukkan nama karyawan:");
	scanf("%s",&Kar[i].nama);
	printf("========================");	
	printf("\n\n");

	printf("masukkan departemen siswa:");
	scanf("%s",&Kar[i].departemen);
	printf("========================");
	printf("\n\n");

	printf("masukkan jabatan karyawan:");
	scanf("%s",&Kar[i].jabatan);
	printf("========================");
	printf("\n\n");

	printf("masukkan gaji karyawan:");
	scanf("%d",&Kar[i].gaji);
	printf("========================");

}
printf("\n\n");
printf("DATA KARYAWAN:");
	printf("\n\n");
	{
	printf("id karyawan :%d\nnama karyawan :%s\ndepartemen karyawan :%s\njabatan karyawan:%s\ngaji karyawan:%d\n", Kar[i].id, Kar[i].nama, Kar[i].jabatan, Kar[i].jabatan, Kar[i].gaji);
}

}










