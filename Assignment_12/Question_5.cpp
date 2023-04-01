#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	ifstream fin1, fin2;
	ofstream fout;
	string ch;
	fin1.open("D:/DevC++/file_1.txt");
	fin2.open("D:/DevC++/second.txt");
	fout.open("D:/DevC++/merge.txt");
	while(!fin1.eof())
	 {
	 	getline(fin1,ch);
	 	fout<<ch;
	 }
	 while(!fin2.eof())
	 {
	 	fout<<endl;
	 	getline(fin2,ch);
	 	fout<<ch;
	 }
	cout<<"Files has been merged";
	fin1.close();
	fin2.close();
	return 0;
}
