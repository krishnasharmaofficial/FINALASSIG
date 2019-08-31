#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of elements :: ";
    cin>>n;
    float arr1[n],sum=0,avg;
    for(int i = 0;i<n;i++)
	{
        cin>>arr1[i];
        sum = sum + arr1[i];
    }
    for(int i = 0;i<n;i++)
	{
        cout<<arr1[i]<<"\t";
	}   
    avg= sum/n;
    cout<<"\nSum ="<<sum<<"\nPercentage = "<<avg;
	
}
