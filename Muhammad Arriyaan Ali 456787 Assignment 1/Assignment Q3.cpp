#include <iostream>
using namespace std;
int main()
{
	
	int a[5]={1,2,3,4,5};
	int n=5; //n = number of elements of array a
	int b[10];
	
	for(int i=0; i<n ; i++)
	{
		b[i]=a[i];
	}
	b[n]=6;
	b[n+1]=7;
	b[n+2]=8;
	
	n=n+3;
	
	cout<<"The new elements of the Array are :"<<endl;
	
	for(int i=0; i<n ; i++)
	{
	
	cout<<b[i]<<endl;
	
	}
	return 0;
}