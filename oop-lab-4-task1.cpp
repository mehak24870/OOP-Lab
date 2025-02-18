#include<iostream>
using namespace std;
class Book{
    string title;
    int *stocklevel =new int;
    double price;
    public:
           Book(){
                  title="unknown";
                  price=0.0;
                  *stocklevel=30;
           }
           void display()
           {
            cout<<"title="<<title<<endl<<"price="<<price<<endl<<"stocklevel="<<*stocklevel;
           }

           void updatebook(){
            
            cout<<"enter the title of the book";
            cin>>title;
            cout<<"enter the stock level";
            cin>>*stocklevel;

            cout<<"enter the price";
            cin>>price;
            cout<<"book updated";
           }
           void purchasestock(){
            int quantity;
            cout<<"entr the quantity of book";
            cin>>quantity;
            if(quantity>(*stocklevel))
            {
                cout<<"sorry we donot have enough books ";
            }
            else{
                *stocklevel-=quantity;
                if((*stocklevel<5))
                {
                    cout<<"low stock warning";
                }
            }


           }
};
   
int main()
{
   Book b1;
   b1.display();
   b1.updatebook();
   b1.display();
   b1.purchasestock();
   b1.display();

}
