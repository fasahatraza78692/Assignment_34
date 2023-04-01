#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("D:/DevC++/file_1.txt");
	ofstream fout;
	fout.open("D:/DevC++/second.txt");
	char ch;
	while(!fin.eof())
	 {
	 	fin.get(ch);
	 	if(ch>=97&&ch<=122)
	 	 {
	 	 	ch=toupper(ch);
		 }
		else if(ch>=65&&ch<=90)
		 {
		 	ch=tolower(ch);
		 }
		fout<<ch;
	 }
	cout<<"Data has been copied";
	fin.close();
	fout.close();
	return 0;
}
