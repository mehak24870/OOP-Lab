#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("vehicle.txt");
	if(!fout)
	{
		cout<<"error!opening this file";
	}
	fout<<"AutonomousCar, AC101, RoboTaxi, 2023, SW: 4.5, CERT-AI "<<endl;
 fout<<"ElectricVehicle, EV202, Voltz, 2022, Battery: 150, CERT-ECO"<<endl;
 fout<<"HybridTruck, HT303, GreenHauler, 2021, Cargo:5000 | Battery:75, CERT-HYBRID "<<endl;
 fout.close();
 ifstream fin;
 fin.open("vehicle.txt");
 string line;
 while(getline(fin,line))
 {
 	cout<<line<<endl;
 }
}


