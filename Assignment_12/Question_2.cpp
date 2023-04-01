#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int count=-1;
	ofstream fout;
	fout.open("D:/DevC++/file_1.txt");
	fout<<"I am studying at iNeuron plateform";
	fout.close();
	ifstream fin;
	fin.open("D:/DevC++/file_1.txt");
	while(!fin.eof())
	 {
	 	fin.get();
	 	count++;
	 }
	cout<<"Total "<<count<<" Characters is there in this file";
	return 0;
}
