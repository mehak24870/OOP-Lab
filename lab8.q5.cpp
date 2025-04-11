#include<iostream>
using namespace std;
class Fraction{
float numerator,denominator;
public: 
Fraction(float n=0.0,float d=1.0){
numerator = n;
if(d>0){
denominator = d;
}
else{
denominator = 1.0;
}
}
Fraction operator+(){
numerator++;
denominator++;
return *this;
}
Fraction operator+(Fraction f){
float n1 = f.numerator +f.denominator;
float n2 = numerator + denominator;
return Fraction(n2,n1);
}

Fraction operator-(){
numerator--;
denominator--;
return *this;
}
Fraction operator-(Fraction f){
float n1 = f.numerator-f.denominator;
float n2 = f.denominator-denominator;
return Fraction(n1,n2);
}
Fraction operator*(Fraction f){
float n1 = f.numerator*f.denominator;
float n2 = numerator*denominator;
return  Fraction(n1,n2);
}
Fraction operator/(Fraction f){
float n1 = f.numerator/f.denominator;
float n2 = numerator/denominator;
return Fraction(n1,n2);
}
void display(){

cout << numerator<<"/"<<denominator << endl;
}
friend ostream operator<<(ostream& os,Fraction f){
 os<<f.numerator<<"/"<<f.denominator<<endl;
}
};

int main()
{
    Fraction f(12);
    cout << f<< endl;
    
    return 0;
}
