#include <iostream>
using namespace std;
// constructor cannot be declared static , const , volatile , virtual

class Complex
{
private:
    int real;
    int imag;
    // this = &c1
    Complex(void) // parameter-less ctor
    {
        cout << "Complex( void )" << endl;
        this->real = 0;
        this->imag = 0;
    }

public:
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
      //Complex c1; // IF constructor is private we cannot create the object outside the class 
      return 0;
}
