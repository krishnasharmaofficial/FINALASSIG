#include<iostream>
using namespace std;
int factorial(int);

int factorial(int USERNUM)
{
	int fact=1;

	while(USERNUM>1)
	{
		fact=fact*USERNUM;
		USERNUM--;
	}

	return fact;
}
int main()
{
	int USERNUM,FINALFACT;
	cout<<"Enter number : ";
	cin>>USERNUM;
	FINALFACT=factorial(USERNUM);
	cout<<"The factorial is :"<<FINALFACT;
	
}

