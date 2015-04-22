#include <stdio.h>

#ifndef WINAPI
#define WINAPI __stdcall
#endif

#define R 2
#define C 2

void WINAPI getarray2d(int **array, int row, int column);

int main(int argc, char **argv)
{
	int arr[C];
	int *narr = arr;
	int *parr[R] = &narr;
//	getarray2d(&arr,R,C);
}

void WINAPI getarray2d(int **array, int row, int column)
{
	int m,n;
	
	for(m=0;m<row;m++)
	{
		for(n=0;n<column;n++)
		{
			scanf("%d",*array[m*column+n]);
		}
	}
}
