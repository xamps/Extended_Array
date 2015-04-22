#ifndef _iarr2_h_
#define _iarr2_h_

#ifdef BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#elif BUILDING_APP
#define DLLIMPORT
#else
#define DLLIMPORT __declspec(dllimport)
#endif

#ifndef CAPI
#define CAPI  __stdcall
#endif

// row and column size for 2D array
int r;
int c;
// size of 1D array
int size;
// N = number of columns will be allocated per row
// by following way 1D Array to 2D Array casting can be done
#define cast2D_t(N) (int (*)[N]);
//	"(int (*)[nCOLS])" is the way to casting 1d array to 2d array
DLLIMPORT void  CAPI initarray2d(int (*narray)[c],int r,int c);
DLLIMPORT void  CAPI  getarray2d(int (*narray)[c],int r,int c);
DLLIMPORT void  CAPI  putarray2d(int (*narray)[c],int r,int c);

DLLIMPORT void  CAPI initarray1d(int *narray,int size);
DLLIMPORT void  CAPI  getarray1d(int *narray,int size); 
DLLIMPORT void  CAPI  putarray1d(int *narray,int size);

#endif
