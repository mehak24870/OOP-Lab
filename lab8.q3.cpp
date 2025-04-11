#include<iostream>
using namespace std;
class Student{
	string name;
    float grade [3];
	public:
		    Student(string n):name(n){
		    	grade[0]= 60.0;
		    	grade[1]=70.0;
		    	grade[2]=75.0;
			}
			
			friend class Teacher;
			 friend float calcaverage(Student &s);
};
class Teacher{
	public:
		   void updategrades(Student &s)
		   {
		   	  cout<<endl<<"Enter the updated grades "<<endl;
		   	  int i;
			  for(i=0;i<3;i++)
			  {
			  	cin>> s.grade[i];
			  } 
		   }
		   void display(Student &s)
		   {
		   	   int i;
		   	  cout<<"Name of the student "<<s.name<<endl;
		   	  cout<<"   grades "<<endl;
		   	  for(i=0;i<3;i++)
		   	  {
		   	  	   cout<< s.grade[i]<< "  ";
				 }
		   }
		   
		   
};
float calcaverage(Student &s)
{
	int i;
	float avg;
	float sum=0;
	for(i=0;i<3;i++)
	{
		sum = sum + s.grade[i];
	}
	avg=sum/3;
	return avg;
}

int main()
{
	Student s("Mahek");
	
	Teacher t1;
	cout<<" initial grades "<<endl;
	t1.display(s);
	t1.updategrades(s);
	cout<<"  updated grades "<<endl;
	t1.display(s);
	float g;
	g=calcaverage(s);
	cout<<"Average is "<<g;
	
}
