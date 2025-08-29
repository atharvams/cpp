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
    operator int( )
    {
        return this->real; 
    }
    void printRecord( void )
    {
        cout<<"Real : "<<real<<endl; 
        cout<<"Imag : "<<imag<<endl; 
    }
}; 
//user-defined to fundamental 
int main()
{
    Complex c1(10,20); 
    int real; 
    real = c1; 
    //c1.operator int( )
    c1.printRecord( );   
    return 0;
}
