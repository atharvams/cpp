#include <iostream>
using namespace std;
// constructor cannot be declared static , const , volatile , virtual

class Complex
{
private:
    int real;
    int imag;
public:

    Complex( void ) //parameter-less 
    {
        cout<<" Complex( void )"<<endl; 
        this->real = 0; 
        this->imag = 0; 
    }
    Complex( int value ) //single -parameterized ctor 
    {
        cout<<"Complex( int value ) "<<endl; 
        this->real = value; 
        this->imag = value; 
    }
    Complex( int real , int imag ) //2 argument -parameterized ctor 
    {
        cout<<"Complex( int real , int imag )"<<endl; 
        this->real = real; 
        this->imag = imag; 
    }
    void acceptRecord(void)
    {
        cout << "Real : ";
        cin >> real;
        cout << "Imag : ";
        cin >> imag;
    }
    void printRecord(void)
    {
        cout << "Real : " << real << endl;
        cout << "Imag : " << imag << endl;
    }
    
};
int main(int argc, char const *argv[])
{
      Complex c1; // parameter-less ctor on c1 object
      Complex c2(10); //single parameterized ctor will get called 
      Complex c3(10,20); // 2 arg parameterized ctor will get called 
      return 0;
}
