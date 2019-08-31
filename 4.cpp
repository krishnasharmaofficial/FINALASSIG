#include<iostream>
using namespace std;
int main()
{
	float p,r,t,SI;
	cout<<"Enter principle : ";
	cin>>p;
	cout<<"Enter rate : ";
	cin>>r;
	cout<<"Enter time : ";
	cin>>t;
	SI=(p*r*t)/100;
	cout<<"The simple interest is : "<<SI;
}

