#include<iostream>
using namespace std;
class Book{
	string title;
	float price;
	
	public:
		   Book(string t, float p):title(t),price(p){
		   }
		   friend class Librarian;
};
class Librarian{
	public:
		    void adddiscount(Book &b)
		    {
		    	float discount;
		    	
		    	if(b.price >= 0 && b.price <= 2000)
		    	{ 
		    	  discount= 0.1 ;
		    	  b.price= b.price-(b.price * discount);
				}
				else if(b.price > 2000  && b.price <= 10000)
		    	{ 
		    	  discount= 0.3 ;
		    	  b.price= b.price-(b.price * discount);
				}
		    	
		    	 else if(b.price > 10000 )
		    	{ 
		    	  discount= 0.5 ;
		    	  b.price= b.price-(b.price * discount) ;
				}
				else
				cout<<"no discount available";
				
			}
			
			void display(Book b)
			{
				cout<<"book name "<< b.title<<endl;
				cout<<"book price "<<b.price<<endl;
			}
};
int main()
{
	Book b("kite runner",2000.00);
     Librarian l;
     cout<<" Details of the book before discount " <<endl;
     l.display(b);
     cout<<endl<<  " Details of the book after discount " <<endl;
     l.adddiscount(b);
     l.display(b);
}


