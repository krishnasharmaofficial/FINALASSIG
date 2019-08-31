#include <iostream>
#include<fstream>
//#include<sstream>
#include<string>
#include<cstring>
using namespace std;
void writeFile()
              {
                  
                	ofstream fout;
                	string fname= "story.txt";
                
                   fout.open(fname.c_str(),ios::app);
                   string line="The rose is red.\n";
                                  line+="A girl is playing there.\n";
                                  line +="There is a playground.\n";
                                 line+="An aeroplane is in the sky.\n";
                            line+="Numbers are not allowed in the password.\n";
                          
                            
	     	              fout << line <<"\n";
	     	             cout<<"completed...";
	     	            
	               
	             	fout.close(); 	
	              }
	              void readLine()
	              {
	              	int count=1;
	              	ifstream fin;
	              	string fname="story.txt";
	              	fin.open(fname.c_str());
	              	string line;
	              
	              	getline(fin, line,'.');
	              for(int i=0;i<100;i++)
                              {
                              if((line[0]!='A')&&( line[i-1]=='\n'))
                              {  count++;
                             }
                             }
                              
                           cout<<"\nNumber of lines="<<" "<<count;
                               fin.close();
               }
          int main() {
	writeFile();
	readLine();
	return 0;
}
