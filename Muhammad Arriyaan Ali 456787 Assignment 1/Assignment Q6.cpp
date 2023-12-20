#include <iostream>
#include <cmath>
using namespace std;

float StallVelocity(float p, float l, float s, float cl)
{
	double V= sqrt(2*l/(cl*p*s));
	return V;
}

int main()
{
	float rho;
	float L;
	float Cl;
	float S;
	float V;
	
	cout<<"Enter The Lift Force (L):"<<endl;
	cin>>L;
	
	cout<<"Enter Coefficent of Lift (Cl):"<<endl;
	cin>>Cl;
	
	cout<<"Enter Area of Wing (S): "<< endl;
	cin>>S;
	
	cout<<"Enter Density of Air (rho): "<<endl;
	cin>>rho;

	
	V=StallVelocity(rho, L, S, Cl);
	
	cout<<"The Stall Velocity for the above parameters of an airfoil will be: "<<endl<<V<<" m/s";
	
	return 0;
}