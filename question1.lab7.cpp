#include<iostream>
using namespace std;
class Account{
	protected:
		      int accno;
		      double balance;
		      string holder_name;
		      string acctype;
	public:
		     Account(int a , double b,string name,string type):accno(a),balance(b),holder_name(name),acctype(type){
			 }
			 void deposit(double amount)
			 {
			 	balance+=amount;
			 }
			 void withdraw(double amount)
			 {
			 	if(amount<=balance)
			 	{ 
			 	   balance-=amount;
				 }
				 else
				 {
				 	cout<<"no enough balance";
				 }
			 }
			 virtual void calc_interest(){}
			 virtual void getaccountinfo()
			 {
			 	cout<<"Account number : "<<accno<<endl;
			 	cout<<"Balance : "<<balance<<endl;
			 	cout<<"Account holder name : "<<holder_name<<endl;
			 	cout<<"Account type : "<<acctype<<endl;
			 }
};
class Savingsaccount: public Account{
	protected:
		       float interestrate;
		       double minbal;
	public:
	           Savingsaccount(int a , double b,string name,string type,float ir,double minbal):Account(a,b,name,type),interestrate(ir),minbal(minbal){
			   } 
			     float interest; 
			   void calc_interest()
			   {
			   	   interest=balance*(interestrate)/100;
			
			   }
			   void getaccountinfo()
			 {
			 	cout<<"Account number : "<<accno<<endl;
			 	cout<<"Balance : "<<balance<<endl;
			 	cout<<"Account holder name : "<<holder_name<<endl;
			 	cout<<"Account type : "<<acctype<<endl;
			 	cout<<"Interest : "<<interest<<endl;
			 	cout<<"minimum balance : "<<minbal;
			 }
			   
			   
};
class Fixeddepositaccount: public Account{
	protected:
		string mdate;
		float fixedir;
		public:
			Fixeddepositaccount(int a , double b,string name,string type,string date,float ir):Account(a,b,name,type),mdate(date),fixedir(ir){
			   } 
	float interest; 
			   void calc_interest()
			   {
			   	   interest=balance*(fixedir)/100;
			
			   }
			   void getaccountinfo()
			 {
			 	cout<<"Account number : "<<accno<<endl;
			 	cout<<"Balance : "<<balance<<endl;
			 	cout<<"Account holder name : "<<holder_name<<endl;
			 	cout<<"Account type : "<<acctype<<endl;
			 	cout<<"Maturity date : "<<mdate<<endl;
			 	cout<<"Interest : "<<interest;
			 }
	
	
};


















int main()
{
	Savingsaccount s(12345,500000,"mahek","savings",4.0,50000);
	Account *ptr;
	ptr=&s;
	ptr->calc_interest();
	ptr->getaccountinfo();
	Fixeddepositaccount f(12345,500000,"mahek","Fixed","08March",5.0);
   ptr=&f;
   ptr->calc_interest();
   ptr->getaccountinfo();
	
	
}
