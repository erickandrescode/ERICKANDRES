#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
	int A, B, P;
	float C, Q, R;
	float Ar, S;
	float s;
	float Ma, Mb, Mc;
	cout<<"digite el valor de A:";
	cin>>A;
	
	cout<<"digite el valor de B:";
	cin>>B;
	
	cout<<"digite el valor de P:";
	cin>>P;
	
	C = sqrt(pow(A,2)+pow(B,2)-2*A*B*cos(P*3.1416/180));
	
	Q = (180/3.1416)*asin((A*sin(P*3.1416/180))/C);
	
	R = 180-P-Q;
	
	S = A+B+C;
	s = S/2;
	Ar = sqrt(s*(s-A)*(s-B)*(s-C));
	
	Ma = (sqrt(2*(B*B+C*C)-A*A))/2;
	Mb = (sqrt(2*(A*A+C*C)-B*B))/2;
	Mc = (sqrt(2*(A*A+B*B)-C*C))/2;
	
	cout<<"el valor de C es" <<C <<endl;
	cin.get(); 
	cout<<"el valor del angulo de Q es "<<Q <<endl;
	
	cout<<"el valor del angulo de R es "<<R<<endl;
	
	cout<<"el valor de la superficie es "<<S <<endl;
	
	cout<<"el valor deL area es "<<Ar <<endl;
	
	cout<<"el valor de la mediana de A es "<<Ma <<endl;
	
	cout<<"el valor de la mediana de B es "<<Mb <<endl;
	
	cout<<"el valor de la mediana de C es "<<Mc <<endl;
	
	cin.get();
	return 0;
}
