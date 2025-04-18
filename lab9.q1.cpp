#include<iostream>
using namespace std;
class Vehicle{
	protected:
	         string model;
	           double rate;
	public:
		   virtual double getdailyrate()=0;
		   virtual void displaydetails()=0;
};
class Car:public Vehicle{
	public:
		     Car(){
		     	model="civic";
		     	rate=15.5;
			 }
		     	
			 
		     double getdailyrate()
		     {
		     	return rate;
			 }
			 void displaydetails()
			 {
			 	cout<<"----------details of the car-------- "<<endl;
			 	cout<<"  model :"<<model<<endl;
			 	cout<<" rate : "<<rate<<endl;
			 }
};
class Bike:public Vehicle{
	public:
		     Bike(){
		     	model="honda";
		     	rate=10.5;
			 }
		     
		    double getdailyrate()
		    {
		    	return rate;
			}
			void displaydetails()
			 {
			 	cout<<"----------details of the bike-------- "<<endl;
			 	cout<<"  model :"<<model<<endl;
			 	cout<<" rate : "<<rate<<endl;
			 }
};
int main()
{
	Car c;
	c.displaydetails();
	Bike b;
	b.displaydetails();
	Vehicle *vehicle;
	vehicle=&c;
	vehicle->displaydetails();
	vehicle=&b;
	vehicle->displaydetails();
}
