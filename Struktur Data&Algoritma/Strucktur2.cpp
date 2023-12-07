#include <stdio.h>
struct siswa S1
{
	int id;
	char nama[20];
	float nilai;
};

main(){
	struct siswa S1
	printf("Masukkan detail S1\n:");
	printf("id:");
	scanf("%d",&S1.id);
	printf("\nnama:");
	scanf("%s",&S1.nama);
	printf("\nnilai:");
	scanf("%f",&S1.nilai);

	printf("\ndetail S1\n")
	printf("id siswa :%d\nnama siswa :%s\nnilai siswa :%f\n", S1.id, S1.nama, S1.nilai);
}


