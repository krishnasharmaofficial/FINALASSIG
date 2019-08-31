#include <iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

		   void writeFile()
              {
                  
                	ofstream fout;
                	string fname= "ass13.txt";
                
                   fout.open(fname.c_str(),ios::app);
                   
	                    	
		                 	string line="Time is a great teacher but unfortunately it kills all its pupils. Berlioz";
	     	            	
	     	            	fout << line <<"\n";
	     	             cout<<"completed...";
	     	
	               
	             	fout.close(); 	
	              }
int main() {
	writeFile();
	return 0;
}
