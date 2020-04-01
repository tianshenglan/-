#include <stdio.h>
#if 0
int main(void)
{
	int det1 = 16;
	int oct1 = 9;
	int hex1 = 3;

	printf("This is dec:%d\n,This is oct:%#o\nThis is hex:%#x",det1,oct1, hex1);
	return 0;
}
#endif


int main(void)
{
	/*int i = 2147483647;
	unsigned int j = 4294967295;

	printf("%d,%d,%d\n", i, i + 1, i + 2);
	printf("%u,%u,%u\n",j,j+1,j+2);*/

	//long i = 65537;

	//printf("%ld,%hd\n",i,i);
	//printf("hello\007\n");
	double i = 12.99e3;
	printf("%e,%le\n",i,i);

	
	return 0;
}