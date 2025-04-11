#include<iostream>
using namespace std;
class Currency{
	float value;
	public:
		    Currency(){
			}
		    Currency(float f):value(f){
			}
			Currency operator-()
			{
				Currency obj;
				obj.value = -(1 * value);
				return obj ;
			}
			Currency operator+(Currency c1)
			 {
			 	 Currency c;
			 	 c.value= value + c1.value;
			 	 return c;
			 }
			 Currency operator-(Currency c1)
			 {
			 	 Currency c;
			 	 c.value= value - c1.value;
			 	 return c;
			 }
			
			Currency operator+=(float x)
			{
				Currency obj;
				obj.value= x+value;
				return obj;
			}
			Currency operator-=(float x)
			{
				Currency obj;
				obj.value= x-value;
				return obj;
			}
			
			void display()
			{
				cout<<" value : "<<value<<endl;
			}
			friend ostream& operator<<(ostream& out, const Currency& c);

			
			
};
ostream& operator<<(ostream& out, const Currency& c) {
    out  << c.value;
    return out;  
}
int main(){
	Currency c(500.05);
	Currency c1;
	c1= -c;
	
	cout<<" unary operator "<<c1<<endl;
	Currency c2(1000.05);
	c1= c+ c2;
	cout<<"  Addition operator "<<c1<<endl;
	c1= c2 - c;
	cout<<"  subtraction  operator "<<c1<<endl;
	c1= c2.operator+=(114.15);
    cout<<"  Assignment addition operator "<<c1<<endl;
	c1= c2.operator-=(114.15);
	cout<<"  Assignment subtraction operator "<<c1<<endl;
}
