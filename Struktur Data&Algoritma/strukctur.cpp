#include <stdio.h>
//Definisi
struct siswa
{
	int id;
	char nama[20];
	float nilai;
};

main(){
	printf("\n\n");
	struct siswa S1={10,"ALI",90.5};
	printf("id siswa :%d\nnama siswa :%s\nnilai siswa :%f\n", S1.id, S1.nama, S1.nilai);
	printf("\n\n");
	struct siswa S2={8,"ANNA",80.7};
	printf("id siswa :%d\nnama siswa :%s\nnilai siswa :%f\n", S2.id, S2.nama, S2.nilai);
}














