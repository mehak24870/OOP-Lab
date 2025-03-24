#include<iostream>
using namespace std;
class Person{
	protected:
		       string name;
		       int id;
		       string address;
		       string phoneno;
		       string email;
	public:
	           Person(string n,int i,string a ,string p,string e):name(n),id(i),address(a),phoneno(p),email(e){
			   }	 
			   void updateinfo(){
			   }
			   virtual void displayinfo()
			   {
			   	  cout<<" Student Name : "<<name<<endl;
			   	  cout<<"  Student Id  : "<<id<<endl;
			   	  cout<<"  Student address : "<<address<<endl;
			   	  cout<<"  Student phone no  : "<<phoneno<<endl;
			   	  cout<<"   Student Email  :  "<<email<<endl;
			   }
			         
};
class Student : public Person{
	protected:
		        
		       string*courses;
		       float gpa;
		       string enrollmentyear;
	public:
	            Student(string n,int i,string a ,string p,string e,float g,string y):Person(n,i,a,p,e),gpa(g),enrollmentyear(y){
	            
	            	courses =new string[4];
	            	courses[0]="Maths";
	            	courses[1]="English";
	            	courses[2]="Physics";
	            	courses[3]="Chemistry";
			}
				
				void displayinfo()
			   {
			   	  cout<<" Student Name : "<<name<<endl;
			   	  cout<<"  Student Id  : "<<id<<endl;
			   	  cout<<"  Student address : "<<address<<endl;
			   	  cout<<"  Student phone no  : "<<phoneno<<endl;
			   	  cout<<"   Student Email  :  "<<email<<endl;
			   	   int i;
			   	   cout<<" Student Enrolled courses "<<endl;
			   	   for(i=0;i<4;i++)
			   	   {
			   	   	   cout<< courses[i] << endl;
					  }
			   }
			   
			   
				       
		       
		       
};
class Professor:public Person
{
	protected:
		        int n;
		       string department;
		       float salary;
		       string*coursestaught;
		       
	public:
		        
		        Professor(string n,int i,string a ,string p,string e,string d,float s):Person(n,i,a,p,e),department(d),salary(s){
		        	coursestaught=new string[5];
		        	coursestaught[0]="Maths";
		        	coursestaught[1]="physics";
		        	coursestaught[2]="Biology";
		        	coursestaught[3]="English";
		        	coursestaught[4]="Ethics";
		        	
				}
	
					
				 void displayinfo()
			   {
			   	  
			   	  cout<<" Professor Department : "<<department<<endl;
			   	  cout<<" Professor  salary  : "<<salary<<endl;
			   	   int i;
			   	   cout<<" courses taught by professor "<<endl;
			   	   for(i=0;i<5;i++)
			   	   {
			   	   	   cout<<coursestaught[i]<<endl;
					  }
		}
			   
			   
			   
				
	          	       
};
class Staff:public Person{
	string department;
	string position ;
	float salary;
	public:
		    Staff(string n,int i,string a ,string p,string e,string d,string pos,float s):Person(n,i,a,p,e),department(d),position(pos),salary(s){
			}
			void displayinfo()
			   {
			   	  
			   	  cout<<"  staff Department : "<<department<<endl;
			   	  cout<<"  staff  salary   : "<<salary<<endl;
			   	  cout<<"  staff position  : " <<position<<endl;
		}
			
};
int main()
{
	Person*ptr[3];
	ptr[0]= new Student("Mahek",101,"karachi","123456","mahekkuk@gmail.com",3.2,"2016");
	ptr[1]= new Professor("Mahek",101,"karachi","123456","mahekkuk@gmail.com","computerscience",50000);
    ptr[2]= new Staff("Mahek",101,"karachi","123456","mahekkuk@gmail.com","Finance","clerk",50000);
   int i;
   for(i=0;i<3;i++)
   {
   	  ptr[i]->displayinfo();
   }
   
}

