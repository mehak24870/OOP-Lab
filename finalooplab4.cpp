#include<iostream>
using namespace std;
class Book{
	string title;
	int price;
	int stock;
	int*purchase;
	int *bookid;
	public:
		    Book(string t,int p,int s,int pu,int bi)
		    
		    	:title(t),price(p),stock(s),purchase(new int(pu)),bookid(new int(bi)){
				}
//		    	title=t;
//		    	price=p;
//		    	stock=s;
//		    	purchase= new int;
//		    	*purchase = pu;
//		    	bookid=new int;
//		    	*bookid=bi;
			
			Book(Book &obj)
			{
				title=obj.title;
				price=obj.price;
				stock=obj.stock;
				purchase=new int;
			   *purchase= *(obj.purchase);
			   bookid=new int;
			   *bookid= (*obj.bookid);
			}
			void setpurchases(){
				cout<<"enter num of articles of book do you want";
				cin>>(*purchase);
				if(*purchase>stock)
				{
					cout<<endl<<"purchases cannot be greater than stock";
			    }
			    stock=stock-(*purchase);
				if(stock<0)
				{
				   cout<<endl<<"stock cannot be less than zero";
				   stock=0;	
			    }
			    if((*purchase)>5 && (*purchase<=10))
			    {
			    	applydiscount(5);
				}
				else if((*purchase>10))
				{
					applydiscount(10);
				}
			}
			void applydiscount(int discountperc)
			{
				this->price= price-(price*discountperc/100);
			}
			void display()
			{
				cout<<endl<<"book title : "<<title;
				cout<<endl<<"book price : "<<price;
				cout<<endl<<"book purchases : "<<*purchase;
				cout<<endl<<"book stock: "<<stock;
				cout<<endl<<"book id: "<<*bookid;
				
			}
			void setpurchase(int pu)
			{
				*purchase=pu;
				stock=stock-(*purchase);
				if(stock<0)
				{
					cout<<endl<<"stock cannot be less than zero";
					stock=0;
					
				}
				if((*purchase)>5 && (*purchase<=10))
			    {
			    	applydiscount(5);
				}
				else if((*purchase>10))
				{
					applydiscount(10);
				}
				
			}
			void setbookid(int bi)
			{
				*bookid=bi;
			}
			
};
int main()
{
	Book b1("unknown",5000,10,0,1001);
	cout<<"b1"<<endl;
	b1.display();
	b1.setpurchases();
	cout<<endl<<endl;
	Book b2(b1);
	cout<<"b1";
	b1.display();
	cout<<endl<<"b2";
	b2.display();
	cout<<endl<<endl<<"b2 after modification";
	b2.setpurchase(6);
	b2.setbookid(1002);
	b2.display();
	
	
}
