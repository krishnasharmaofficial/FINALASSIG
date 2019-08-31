#include <iostream> 
using namespace std; 
void reverseStr(string & string) 
{ 
    int n = string.length(); 
    for (int i = 0; i < n /2 ; i++) 
        swap(string[i], string[n - i - 1]); 
} 
int main() 
{ 
    string string;
    cout<<"enter name "<<endl;
    cin>>string;
    reverseStr(string); 
    cout << string; 
}
