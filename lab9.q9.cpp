#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	 string line;
	 
	ofstream fout;
	fout.open("large_log.txt");
	if(!fout)
	{
		cout<<"error!opening this file";
	}
	fout<<"this is the first part of the log "<<endl;
	fout<<"this is the second part of the log "<<endl;
	fout<<"and the third part "<<endl;
     fout.close();
	ifstream fin;
	fin.open("large_log.txt");
	while(getline(fin,line))
	{
		streampos pos=fin.tellg();
		cout<<"\nposition of the get pointer : "<<pos<<endl;
		 
	}
}