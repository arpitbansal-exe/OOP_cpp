//Assinment-6
//Concept: Function overloading (polymorphism)
//Write a program to implement polymorphism having an area function to display area of different shapes.

//Title-Area of different Shapes
//Author-Arpit Bansal,2213502,N div
//Date-26/05/22

#include<iostream>
using namespace std;
class shape{
 public:
 void area(float);
 void area(float,float); 
}c;

void shape::area(float a){
  cout<<"\nArea of the square is : "<<a*a;  
}
void shape::area(float x,float y){
   cout<<"\nArea of the rectangle is : "<<x*y<<"\n";
}

int main(){
  float s,l,b;
  cout<<"\nEnter length of side of square: ";
  cin>>s;
  cout<<"\nEnter length of rectangle : ";
  cin>>l;
  cout<<"\nEnter breadth of rectangle : ";
  cin>>b;
  c.area(s);
  c.area(l,b);
return 0;
}