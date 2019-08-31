#include<iostream>
using namespace std;

void accept(int Arr[], int s);
void display(int Arr[], int s);

int main()
{
 int Arr[100],n,choice;
 cout<<"Enter the Size of an Array ";
 cin>>n;
 do
 {
  cout<<"\n\nMENU";
  cout<<"\n1. Accept the elements of an array";
  cout<<"\n2. Display the elements of an array";
  cout<<"\n\nEnter your choice either 1 or 2 :";
  cin>>choice;
 
 switch(choice)
  {
   case 1: accept(Arr,n);
    break;
   case 2: display(Arr,n);
    break;
 default:cout<<"\nInvalid choice !!!! TRY AGAIN !!!!";
  }
 }while(choice!=6);
}
void accept(int Arr[], int s)
{
 for(int i=0;i<s;i++)
 {
  cout<<"Enter element "<<i+1<<":";
  cin>>Arr[i];
 }
}

void display(int Arr[], int s)
{
 cout<<"The elements of the array are:\n";
 for(int i=0;i<s;i++)
  cout<<Arr[i]<<" ";
} 
