#include<iostream> 
using namespace std; 

class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    Complex( void ) : real(0) , imag(0)
    {   }
    Complex(int real , int imag ) : real(real) , imag(imag)
    {   }
    Complex(int value)
    {
        cout<<"Complex(int value)"<<endl; 
        this->real = value; 
        this->imag = value; 
    }
    void operator=(const Complex &other)
    {
        cout<<"void operator=(const Complex &other)"<<endl; 
        this->real = other.real; 
        this->imag = other.imag; 
    }
    void printRecord( void )
    {
        cout<<"Real : "<<real<<endl; 
        cout<<"Imag : "<<imag<<endl; 
    }
}; 
//fundamental to user-defined 
int main()
{
    int number = 10; // fundamental type 
    Complex c1;
    c1 = number; 
    //Complex(int value);
    c1.printRecord( );   
    return 0;
}
