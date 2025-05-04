#include<iostream>
#include<fstream>
using namespace std;
class InventoryItem{
	int id;
	char name[20];
	public:
		    InventoryItem(){
			}
			void takeinput()
			{
				cout<<"Enter user id "<<endl;
				cin>>id;
				cout<<"Enter your name "<<endl;
				cin>>name;
				
			}
			void display()
			{
				cout<<"Item id "<<id<<endl<<"ItemName "<<name<<endl;
			}
			void adddata()
			{
				 InventoryItem i;
				 i.takeinput();
				ofstream fout;
				fout.open("inventory.dat",ios::binary|ios::out);
				if(!fout)
				{
					cout<<"error!opening this file ";
				}
				fout.write((char*)&i,sizeof(i));
				fout.close();
				
			}
			void readdata()
			{
				 InventoryItem i1;
				 string line;
				ifstream f;
				f.open("inventory.dat",ios::binary|ios::in);
				f.read((char*)&i1,sizeof(i1));
				getline(f,line);
				i1.display();
			}
};
int main()
{
	InventoryItem i;
	i.adddata();
	i.readdata();
}