#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("D:/DevC++/file_1.txt",ios::app);
	fout.close();
	return 0;
}
