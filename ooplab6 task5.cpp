// task 1 and task 2 already done in class
#include<iostream>
using namespace std;

class Device{
	protected:
		       int deviceid;
		       bool status;
	public:
	           Device(int deviceid,bool status):deviceid(deviceid),status(status){
			   }
			   
	void displaydetails()
	{
		     cout<<"device id :"<<deviceid<<endl;
		     cout<<"status : "<<status<<endl;
			   }		   
			   	       
};

class Smartphone:public Device{
	protected:
	             float screensize;
	             
    public:
    	         Smartphone(int deviceid,bool status,float screensize):Device(deviceid,status),screensize(screensize){
				 }
				 
	    void displaydetails()
		{
			   cout<<"screen size : "<<screensize<<"  inches "<<endl;
					 }			 
	
};
class Smartwatch:public Smartphone{
	protected:
		         bool heartratemonitor;
		         
		         
	public:
	           Smartwatch(int deviceid,bool status,float screensize,bool heartratemonitor):	Smartphone(deviceid,status,screensize),heartratemonitor(heartratemonitor){
			   }  
			   
			   
		void displaydetails()
		{
			       Device::displaydetails();
			       Smartphone::displaydetails();
			       cout<<" heartrate monitor : "<<heartratemonitor<<endl;
					 }	         
};


class Smartwearable:public Smartwatch{
	protected:
		        int stepcounter;
	public:
		         Smartwearable(int deviceid,bool status,float screensize,bool heartratemonitor,int stepcounter):Smartwatch(deviceid,status,screensize,heartratemonitor),stepcounter(stepcounter){
				 }
				 void displaydetails()
				 {
				 	Smartwatch::displaydetails();
				 	cout<<"step counter :"<<stepcounter;
				 }
				 
				 
};               
int main()
{
	Smartwearable s1(134,true,54.00,true,20);
	s1.displaydetails();
	
}


