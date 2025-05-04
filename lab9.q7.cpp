#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("sensor_log.txt");
	if(!fout)
	{
		cout<<"error!opening this file";
	}
	
	cout<<fout.tellp()<<endl;
	fout<<"25.5 C"<<endl;
	fout.tellp();
	cout<<"current position after writing : "<<fout.tellp()<<endl;
	fout<<"98.1 %RH"<<endl;
    fout.tellp();
	cout<<"current position after writing : "<<fout.tellp()<<endl;
	fout.close();
}
