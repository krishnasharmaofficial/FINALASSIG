#include<iostream>
using namespace std;
int main()
{
	int i;
	char* sub[]={"Mathematics","Computer","Chemistry"};
	int marks[]={90,77,69};
	
	for(i=0;i<3;i++)
	{
	cout<<sub[i]<<"      "<<marks[i]<<endl;
	}
}
