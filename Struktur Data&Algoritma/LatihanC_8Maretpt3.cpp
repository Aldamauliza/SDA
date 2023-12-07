#include <stdio.h>

int main()
{
	int a[10]= {20,15,22,14,12,10,24,19,18,16};
	int min=999;
	int i;
	
	for(i=0;i<10;i++)
	{
		if(a[i]<min)
		{
			min = a[i];
		}
	}
	
	printf("Nilai terkecil adalah: %d", min);
}
