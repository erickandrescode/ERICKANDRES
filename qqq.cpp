#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;
int mn_raiz_cubica(
'real A',
real x,
'int Nmax',
'real TOL' )
{
	real fx=x*x*x-A;
	for(int i=0;i<Nmax;i++){
		if( fx==0.){return(i);}
		real derivada=3*x*x;
		if(derivada==0.) return (-1);
		real x2=x-fx/derivada;
		if( mn_abs(x-x2)<TOL*(mn_abs(x)+1) )
		{x=x2
		return (i);
		}
	x=x2;
	fx=x*x*x-A;
	}
	return(-1);
}
