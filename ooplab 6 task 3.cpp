#include<iostream>
using namespace std;

class Person{
	string name;
	int age;
	
	public:
		    Person(string name , int age):name(name),age(age){
			}
			
			void displaydetails()
			{
				cout<<"name : "<<name<<endl<<"age : "<<endl;
			}
			
			
};

class Teacher:public Person
{
	protected:
		       string subject;
	public:
	             Teacher(string name , int age ,string subject):Person(name,age),subject(subject){
				 }	 
				 
	void displaydetails()
	{
		Person::displaydetails();
		cout<<"subject : "<<subject<<endl;
	}			 
				       
};

class Researcher:public Teacher{
	protected:
		          string researcharea;
	public:
		         Researcher(string name , int age ,string subject,string researcharea):Teacher(name,age,subject),researcharea (researcharea){
				 }
		         
		          void displaydetails()
		           {
		           	  Teacher::displaydetails();
		           	  cout<<"research area : "<< researcharea<<endl;
				   }
	                	          
};

class Professor:public Researcher{
	int publications;
	
	public:
		          Professor(string name , int age ,string subject,string researcharea,int publications):Researcher(name,age, subject,researcharea),publications(publications){
				  }
				  
	             void displaydetails(){
	             	Researcher::displaydetails();
	             	cout<<"Publications : "<< publications<<endl ;
				 }
	  		  
};
int main()
{
	Professor p1("mahek",19,"biology","usa",5);
	p1.displaydetails();
}
