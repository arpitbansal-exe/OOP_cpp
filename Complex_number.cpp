/*Implement a class Complex which represents the Complex Number data type. Implement the following operations:
1. Constructor (including a default constructor which creates the complex number 0+0i)
*/

//Title-Complex Number
//Author-Arpit Bansal,2213502,N div
//Date-03/05/22

#include <iostream>
using namespace std;
class complex{
    private:
        float real;
        float imag;
    public:
        complex(){
            real=5;
            imag=3;
        }
        complex(float x, float y){
            real=x;
            imag=y;
        }
        complex(complex &c){
            real=c.real;
            imag=c.imag;
        }    
        void display(){
        	cout<<"\nThe complex number is "<<real<<"+"<<imag<<"i";
		}
};
int main(){
    complex c;
    c.display(); 
    complex c1(6,9);
    c1.display();
    complex c2(c);
    c2.display();
    return 0;
}