#include <stdio.h>
#include "iarr2.h"
#define BUILDING_DLL 1

int i,m,n;

DLLIMPORT void CAPI initarray2d(int (*narray)[c],int r,int c)
{
	for(m=0; m<r; m++)
	{
		for(n=0; n<c; n++)
		{
			narray[m][n] = 0;
		}
	}
}

DLLIMPORT void CAPI getarray2d(int (*narray)[c],int r,int c)
{
	for(m=0; m<r; m++)
	{
		for(n=0; n<c; n++)
		{
			scanf("%d",&narray[m][n]);
		}
	}
}

DLLIMPORT void CAPI putarray2d(int (*narray)[c],int r,int c)
{
	for(m=0; m<r; m++)
	{
		for(n=0; n<c; n++)
		{
			printf("%3d",narray[m][n]);
		}
	}
}

DLLIMPORT void CAPI initarray1d(int *narray,int size)
{
	for(i=0; i<size; i++)
	{
		narray[i] = 0;
	}
}

DLLIMPORT void CAPI getarray1d(int *narray,int size)
{
	for(i=0;i<size;i++)
	{
		scanf("%d",&narray[i]);
	}
}

DLLIMPORT void CAPI putarray1d(int *narray,int size)
{
	for(i=0;i<size;i++)
	{
		printf("%3d",narray[i]);
	}
}

