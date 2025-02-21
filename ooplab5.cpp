 //task3
/* #include<iostream>
using namespace std;
class Professor{
	string name;
	string deptname;
	
	public:
		   Professor(string n,string d):name(n),deptname(d){
		   }
		   string getName()
		   {
		   	return name;
		   }
		   string getdepname(){
		   	return deptname;
		   }
		   
		   
		   	
		   
};

class University{
	Professor**professors;
	int capacity;
	int count;
	public:
	      University(int cap):capacity(cap),count(0){
		   professors=new Professor*[capacity];
	}
	public:
		    void addprof(Professor*p)
		    
		    {
		    	if(count<capacity)
		    	{
		    	 professors[count++]=p;
				}
				else
				{
				  cout<<"no further addition";
				}
				
				
			}
			
			void displaydetails()
			{
				int i;
				for(i=0;i<count;i++){
				cout<<"professor name : "<< professors[i]->getName() << "    "<< "department name : " << professors[i]->getdepname() <<endl;
				
			}
			}
};


int main()
{
	 Professor*p1=new Professor("mahek","cs");
	 Professor*p2=new Professor("greesh","cs");
	 Professor*p3=new Professor("Gree","cs");
	 
	 University university(3);
	 university.addprof(p1);
	 university.addprof(p2);
	 university.addprof(p3);
	 
	 university.displaydetails();
}*/

//task 5
/*#include<iostream>
using namespace std;
class Tourguide{
	string name;
	string specialization;
	int yearsofexp;
	public:
		   Tourguide(string n,string s,int y):name(n),specialization(s),yearsofexp(y){
		   }
		   string getName(){
		   	return name;
		   }
		   string getspecialization()
		   {
		   	return specialization;
		   }
		   int getYearsofexp()
		   {
		   	return yearsofexp;
		   }
		   
		   
		   
		   
};
class Travelagency{
	int capacity;
	int count;
	Tourguide**tourguides;
	public:
		    Travelagency(int cap):capacity(cap),count(0){
		    	tourguides=new Tourguide*[capacity];
			}
			void addtourguide(Tourguide*t)
			{
				if(count<capacity)
				tourguides[count++]=t;
				else
				cout<<endl<<"no capacity";
				
				
			}
			void displaydetails()
			{
				int i;
				for(i=0;i<count;i++)
				{
				cout<<"Tourguide name :"<<"    "<<tourguides[i]->getName()<<endl<<" specialization :"<<"    "<<tourguides[i]->getspecialization()<<endl<<"    "<<"years of exp :"<<tourguides[i]->getYearsofexp()<<endl<<endl;
				}
			}
			
		    
};

int main()
{
	Tourguide*t1=new Tourguide("Mahek","Doctor",2);
	Tourguide*t2=new Tourguide("gree","Doctor",3);
	Tourguide*t3=new Tourguide("ali","Doctor",4);
	Tourguide*t4=new Tourguide("nancy","Doctor",5);
	
	Travelagency travelagency(4);
	travelagency.addtourguide(t1);
	travelagency.addtourguide(t2);
	travelagency.addtourguide(t3);
	travelagency.addtourguide(t4);
	
	travelagency.displaydetails();
	
	
	
	
	
}
*/
// task 4
   /*#include<iostream>
using namespace std;
class Battery{
	int capacity;
	        public:
	        	Battery(int cp):capacity(cp){
				}
				void displaybattery()
				{
					cout<<"Battery : "<<capacity<<"  (mAh)  " ;
				}
	
};
class Smartphone{
	Battery battery;
	string model;
	public:
		   Smartphone(string m,Battery b):model(m),battery(b){
		   }
		   void displayphonedetails()
		   {
		   	 cout<<"model name :"<<" "<<model<<"   ";
				battery.displaybattery(); cout<<endl<<endl;
		   }
		   
		   
};
int main()
{
	Battery b1(3500),b2(4000),b3(5000),b4(5500);
	Smartphone s1("iphone",b1);
	Smartphone s2("samsung",b2);
	Smartphone s3("oppo",b3);
	Smartphone s4("vivo",b4);
	s1.displayphonedetails();
	s2.displayphonedetails();
	s3.displayphonedetails();
	s4.displayphonedetails();
	
}
*/
/*
#include<iostream>
using namespace std;
class Movie{
	string title;
	string director;
	int duration;
	public:
		   Movie(string t,string dir,int dur ):title(t),director(dir),duration(dur){
            }
            void displaymoviedetails(){
             cout<<"\n  Movie Name:  "<<title<<"\n "<<" Director: "<<director<<"  "<< "\n  Duration: "<< duration<<" "<<"hours"<<endl;
			}
			
};
class CinemaHall{
	string name;
	string address;
	Movie movie;
	public:
		    CinemaHall(string n,string a,Movie m):name(n),address(a),movie(m){
			}
		   void displaycinemadetails()
		   {
		   	  
	         cout<<"  cinema name:  "<<name<<"\n"<<"  cinema  address:  "<<"   " <<address;
	         movie.displaymoviedetails();
		   }
};
int main()
{
	Movie m1("interstellar","christopher Nolan",3);
	CinemaHall c1(" Sheltan hotel cinema ","Cinema Road Ghotki",m1);
	c1.displaycinemadetails();
	
}
*/

//task 1
/*   #include<iostream>
using namespace std;
class Car{
	string regno;
	string model;
	string ownername;
	public:
		   Car(string m,string ow,string r):model(m),ownername(ow),regno(r){
		   }
		
		   void displaycar()
		   {
		   	 cout<<"registration number"<<"   "<<regno <<endl<< "model name"<<"  "<<model<<endl<<"owner name"<<"    "<<ownername<<endl;
		   }
		   void updatename(string n){
		   	ownername=n;
		   }
};
int main()
{
	Car c1("civics","Mahek","BEB562");
	cout<<"------------Details of car c1-------"<<endl;
	c1.displaycar();
	cout<<"------------Details of car c2--------"<<endl;
	Car c2(c1);
	c2.displaycar();
	c2.updatename("Greesh");
	cout<<"------updated details of c2------"<<endl;
	c2.displaycar();
	
}
*/

//task 7
 /* #include <iostream>
 #include <string>
using namespace std;


class Product {
public:
    int id;
    string name;
    double price;

    
    Product(int id, string name, double price) {
        this->id = id;
        this->name = name;
        this->price = price;
    }

    
    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << endl;
    }
};


class Inventory {
private:
    Product* products[100]; 
    int productCount; 

public:
    
    Inventory() {
        productCount = 0;
    }

    
    void addProduct(int id, string name, double price) {
        if (productCount < 100) {
            products[productCount] = new Product(id, name, price);
            productCount++;
        } else {
            cout << "Inventory is full, cannot add more products." << endl;
        }
    }

    
    void sortProducts() {
        for (int i = 0; i < productCount - 1; i++) {
            for (int j = 0; j < productCount - 1 - i; j++) {
                if (products[j]->price > products[j + 1]->price) {
                    
                    Product* temp = products[j];
                    products[j] = products[j + 1];
                    products[j + 1] = temp;
                }
            }
        }
    }

    
    void searchProductByName(string name) {
        bool found = false;
        for (int i = 0; i < productCount; i++) {
            if (products[i]->name == name) {
                products[i]->display();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Product not found!" << endl;
        }
    }

    
    void displayAllProducts() {
        for (int i = 0; i < productCount; i++) {
            products[i]->display();
        }
    }
};

int main() {
    Inventory store; 
    store.addProduct(1, "Laptop", 899.99);
    store.addProduct(2, "T-shirt", 19.99);
    store.addProduct(3, "Apple", 0.99);
    store.addProduct(4, "Smartphone", 499.99);

    cout << "All products in the inventory:\n";
    store.displayAllProducts();
    
    
    store.sortProducts();
    
    cout << "\nProducts sorted by price";
}
*/


//task 2
#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    int id;
    string name;
    double* testResults; 
    int numTests;

public:
    Patient(int id, string name, int numTests, double* results) {
        this->id = id;
        this->name = name;
        this->numTests = numTests;

        testResults = new double[numTests];

        for (int i = 0; i < numTests; i++) {
            testResults[i] = results[i];
        }
    }

    Patient(const Patient& other) {
        id = other.id;
        name = other.name;
        numTests = other.numTests;

        testResults = new double[numTests];

        for (int i = 0; i < numTests; i++) {
            testResults[i] = other.testResults[i];
        }
    }

    ~Patient() {
        delete[] testResults;
    }

    void displayPatientDetails() {
        cout << "Patient ID: " << id << endl;
        cout << "Patient Name: " << name << endl;
        cout << "Number of Tests: " << numTests << endl;
        cout << "Test Results: ";
        for (int i = 0; i < numTests; i++) {
            cout << testResults[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    double testResults1[] = { 88.5, 92.0, 76.5 };
    Patient patient1(1, "John Doe", 3, testResults1);

    cout << "Original Patient Record:" << endl;
    patient1.displayPatientDetails();

    Patient patient2 = patient1;

    cout << "\nCopied Patient Record:" << endl;
    patient2.displayPatientDetails();

    double newTestResults[] = { 95.0, 78.0, 82.5 };
    patient2 = Patient(2, "Jane Smith", 3, newTestResults); 

    cout << "\nModified Copied Patient Record:" << endl;
    patient2.displayPatientDetails();

    return 0;
}




