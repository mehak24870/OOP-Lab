#include<iostream>
using namespace std;
class Account{
	protected:
		       int accountnumber;
		       float balance;
	public:
		
		       Account(int accountnumber, float balance):accountnumber(accountnumber),balance(balance){
			   }
	           void displaydetails()
			   {
			   	   cout<<"account number :"<<accountnumber<<endl;
			   	   cout<<"balance : "<<balance<<endl;
			    }       
};
class Savingsaccount:public Account{
	protected:
		      float interestrate;
	public:
		
		
		       Savingsaccount(int accountnumber, float balance,float interestrate):Account(accountnumber , balance),interestrate(interestrate){
			   }
	           void displaydetails()
			   {
			   	 Account::displaydetails();
			   	 cout<<"interest rate : " << interestrate<<endl;
			   	
			   }
};
class Checkingaccount:public Savingsaccount{
	protected:
		       float overdraftlimit;
		       
	public:
		       Checkingaccount(int accountnumber, float balance,float interestrate,float overdraftlimit):Savingsaccount(accountnumber,balance , interestrate),overdraftlimit(overdraftlimit){
			   }
	 void displaydetails()
	 {
	 	 Savingsaccount::displaydetails();
	 	 cout<<"overdraft limit "<< overdraftlimit;
	 }
};

int main()
{
	Checkingaccount c1(10123,500000,50,10000);
	c1.displaydetails();
}
