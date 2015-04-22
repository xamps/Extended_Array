#include <stdio.h>
int c = 4;
int r = 2;

void initarray2d(int (*narray)[c])
{
	int m,n;
	for(m=0; m<r; m++)
	{
		for(n=0; n<c; n++)
		{
			narray[m][n] = 0;
		}
	}
}
void getarray2d(int (*narray)[c])
{
	int m,n;
	for(m=0; m<r; m++)
	{
		for(n=0; n<c; n++)
		{
			scanf("%d",&narray[m][n]);
		}
	}
}
void putarray2d(int (*narray)[c])
{
	int m,n;
	for(m=0; m<r; m++)
	{
		for(n=0; n<c; n++)
		{
			printf("%d ",narray[m][n]);
		}
	}
}
int rm = 2;
int cm = 4;
int main(int argc, char *argv[])
{	
	int array[rm][cm];
	sarray2d(array);
	parray2d(array);
	return 0;
}
