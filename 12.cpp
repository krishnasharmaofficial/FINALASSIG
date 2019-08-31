#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
	string content ;
	content = "it kills all its pupils dfadfadsfasdf";
	ofstream filecreate;
	filecreate.open("program.csv");
	filecreate<<content;
	filecreate.close();
}

