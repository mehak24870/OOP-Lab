#include<iostream>
using namespace std;
class Smartdevice{
	protected:
		       bool status;
	public:
		     Smartdevice():status(0){
			 }
		     virtual void turnon()=0;
		     virtual void turnoff()=0;
		     virtual bool getStatus()=0;
};
class Lightbulb:public Smartdevice{
	bool ison;
	int brightness;
	public:
		    Lightbulb():ison(1),brightness(50){
			}
			void turnon()
			{
				status=true;
				cout<<" light is on "<<endl;
			}
			void turnoff()
			{
				status=false;
				cout<<" light is off "<<endl;
			}
			bool getStatus()
			{
				return status;
			}
			void display()
			{
				cout<<" is light on ? "<<(ison? " true ":" false ")<<endl;
				cout<<" brightness : "<<brightness<<endl;
			}
			
};
class Thermostat:public Smartdevice{
	bool ison;
	double temperature;
	public:
		    Thermostat():ison(0),temperature(55.25){
			}
			void turnon()
			{
				status=true;
				cout<<" Thermostat is on"<<endl;
			}
			void turnoff()
			{
				status=false;
				cout<<" Thermostat is off "<<endl;
			}
			bool getStatus()
			{
				return status;
			}
			void display()
			{
				cout<<" is Thermostat on ? "<<(ison? " true ":" false ")<<endl;
				cout<<" Temperature : "<< temperature <<endl;
			}
};
int main()
{
	Lightbulb l;
	l.display();
	l.turnoff();
	l.turnon();
	bool c=l.getStatus();
	cout<<" light status : "<<(c ? "on":"off")<<endl;
	cout<<endl<<endl;
	Thermostat t;
	t.display();
	t.turnon();
	t.turnoff();
	 c=t.getStatus();
	cout<<" Thermostat status : "<<(c ? "on":"off")<<endl;
	
}
