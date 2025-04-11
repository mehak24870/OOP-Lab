//question 1
#include<iostream>
using namespace std;
class Humidity;
class Temperature{
	float temp;
	public:
		    Temperature(int x):temp(x){
			}
			friend float calcheatindex(Temperature te,Humidity hu);
			
};
class Humidity{
	float humidity;
	public:
		    Humidity(int h):humidity(h){
			}
	    	friend float calcheatindex(Temperature te , Humidity hu);
};
float calcheatindex(Temperature te,Humidity hu)
{
	float tf;
    tf = ((te.temp * 9)/(5) + 32);
    float HI;
    HI=-42.379+ (2.04901523 * tf )+ (10.14333127* hu.humidity)- (0.22475541*tf*hu.humidity)- (0.00683783 * tf * tf)
- (0.05481717 * hu.humidity * hu.humidity)+ ( 0.00122874 * tf * tf * hu.humidity) + (0.00085282 * tf * hu.humidity * hu.humidity)
+ (0.00122874 * tf * tf  * hu.humidity ) + (0.00085282 * tf * hu.humidity * hu.humidity)
- (0.000001 * tf * tf * hu.humidity * hu.humidity);
   return HI;
}
int main()
{
	Temperature t1(32);
	Humidity h1(70);
	int heatindex;
	heatindex= calcheatindex(t1,h1);
	cout<<"Heat index is "<<heatindex;
}
