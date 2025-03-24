#include<iostream>
using namespace std;
class Currency{
	protected:
					float amount;
					string currencycode;
					char symbol;
					float exchangerate;
	public:
				 Currency(float amount,string code,char symbol,float exch):amount(amount),currencycode(code),symbol(symbol),exchangerate(exch){
				 }
				 virtual void converttobase(){}
				  void convertto(string targetcurrency){
				  	
				  	
				 }
				 virtual void displaycurrency()
				 {
				 	cout<<"Amount : "<<amount<<endl;
				 	cout<<"currency code :"<<currencycode<<endl;
				 	cout<<"symbol :"<<symbol<<endl;
				 	cout<<"exchange rate : "<<exchangerate<<endl;
				 }
				 
		         
};
class Dollar:public Currency{
	
		      float base;
	public:
		    Dollar(float amount,string code,char symbol,float exch):Currency(amount,code,symbol,exch){
			}
			
		       void converttobase(){
		       	base=(amount*exchangerate);
			   }
			  void displaycurrency()
				 {
				 	cout<<"Amount in Dollar : "<<amount<<endl;
				 	cout<<"currency code :"<<currencycode<<endl;
				 	cout<<"symbol : "<<symbol<<endl;
				 	cout<<"Exchange rate : "<<exchangerate<<endl;
				 	cout<<"Base Amount : "<<base<<" "<<currencycode<<endl<<endl;
				 }  
};
class Euro:public Currency{
	float base;
	public:
		    Euro(float amount,string code,char symbol,float exch):Currency(amount,code,symbol,exch){
			}
			void converttobase(){
		       	base=amount*exchangerate;
			   }
			  void displaycurrency()
				 {
				 	cout<<"Amount in Euros : "<<amount<<endl;
				 	cout<<"currency code :"<<currencycode<<endl;
				 	cout<<"symbol : "<<symbol<<endl;
				 	cout<<"Exchange rate : "<<exchangerate<<endl;
				 	cout<<"Base Amount : "<<base<<" "<<currencycode<<endl<<endl;
				 }  
			
			
};
class Rupee:public Currency{
	float base;
	public:
		     Rupee(float amount,string code,char symbol,float exch):Currency(amount,code,symbol,exch){
			 }
			  void converttobase(){
		       	base=(amount*exchangerate);
			   }
			 void displaycurrency()
				 {
				 	cout<<"Amount in Rupee : "<<amount<<endl;
				 	cout<<"currency code :"<<currencycode<<endl;
				 	cout<<"symbol : "<<symbol<<endl;
				 	cout<<"Exchange rate : "<<exchangerate<<endl;
				 	cout<<"Base Amount : "<<base<<" "<<currencycode<<endl<<endl;
				 }  
};
int main()
{
	Currency *ptr[3];
	ptr[0]=new Dollar(50,"USD",'$',280);
	ptr[1]=new Euro(50,"EUR",'€',304);
	ptr[2]=new Rupee(5000,"pkr",'Rs', 0.0035);
	int i;
	for(i=0;i<3;i++)
	{
		ptr[i]->converttobase();
		ptr[i]->displaycurrency();
	}
	
}

