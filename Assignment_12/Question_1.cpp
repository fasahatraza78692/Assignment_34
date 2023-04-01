#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("D:/DevC++/file_1.txt");
	if(fout==NULL)
	   cout<<"File not open";
	else
	   cout<<"File open successfully";
	return 0;
}
