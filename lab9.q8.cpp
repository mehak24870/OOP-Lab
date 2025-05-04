#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream f;
	f.open("config.txt");
	if(!f)
	{
		cout<<"error!handling this file";
	}
	f<<"12345ABCDE12345";
	streampos pos= f.tellp();
	cout<<"position after writing is "<<pos <<endl;
	f.close();
	fstream fout;
	fout.open("config.txt",ios::out|ios::in);
	fout.seekp(5);
	fout<<"great";
	fout.close();
	fstream fin;
	string line;
	fin.open("config.txt",ios::in);
	while(getline(fin,line))
	{
		cout<<line;
	}
	
	
}