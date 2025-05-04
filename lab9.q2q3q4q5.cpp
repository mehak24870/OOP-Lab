#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("vehicle.txt");
	if(!fin)
	{
		cout<<"error!opening the file";
	}
	string line,name,age,year,extradata,certification,id,type,str;
	int var;
	float fvar;
	
	while(getline(fin,line)){
	
	
		stringstream s(line);
		getline(s,name,',');
		cout<<"name:"<<name<<endl;
		getline(s,id,',');
		cout<<"id:"<<id<<endl;
		getline(s,type,',');
		cout<<"type:"<<type<<endl;
		getline(s,year,',');
		
		cout<<"year:"<<year<<endl;
		

		try {
			var= stoi(year);
			cout << "year (as int): " << var << endl;
		}
		catch (...) {
			cout << "Error converting year: " << endl;
		}
		 getline(s,extradata,',');
		 cout<<"extradata"<<extradata<<endl;
		 getline(s,certification);
		 cout<<" certification:"<<certification<<endl;
		 cout<<endl<<endl;
		 if(name=="AutonomousCar")
		 {
		 	
	 	stringstream Extradata(extradata);
	 	   string st;
	 	  getline(Extradata,st);
		 	cout<<"extra data :"<<st<<endl;
		 	size_t pos=st.find(':');
		 	if(pos!=string::npos)
		 	{
		 		cout<<"positionfound"<<endl;
		 		str=st.substr(pos+1);
		 		cout<<"substring "<<str<<endl;
		 		try{
		 			float fvar;
		 			fvar=stof(str);
		 			cout<<"conversion of extradata string as a float : "<<fvar<<endl<<endl;
				 }
				 catch(...)
				 {
				 	cout<<"failed to convert int ";
				 }
			 }
			 
		 }
		 if(name=="ElectricVehicle")
		 {
		 	string read,sub;
		 	int var;
		 	stringstream stream(extradata);
		 	getline(stream,read);
		 	cout<<"extra data = "<<read<<endl;
		 	size_t pos=read.find(':');
		 	if(pos!=string::npos)
		 	{
		 		cout<<"position found"<<endl;
		 		sub= read.substr(pos+1);
		 		cout<<"substring = "<<sub<<endl;
		 		try{
		 			var=stoi(sub);
		 			cout<<"conversion of extradata string to int ="<<var<<endl<<endl;
				 }
				 catch(...)
				 {
				 	cout<<"error converting from string to int "<<endl;
				 }
			 }
		 }
		 if(name=="HybridTruck")
		 {
		 	string r;
		 	string stt;
		 	int v;
		 	stringstream st(extradata);
		 	
		 	
		 	while(getline(st,r,'|')){
		 	cout<<"extra data : "<<r<<endl;
		 	size_t pos= r.find(':');
		 	if(pos!=string::npos)
		 	{
		 		stt=r.substr(pos+1);
		 		cout<<"substring = "<<stt<<endl;
		 		v=stoi(stt);
		 		cout<<"conversion of string extra data to int "<<v<<endl;
			 }
		 }
		 }
		 
		 
		 
        }
    }
	
	                        
	
	
		
