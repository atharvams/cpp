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
      //Complex *ptr; // no ctor called 
      
      //Complex c1; // parameter less ctor is called 
      
      //Complex c1(10); // single parameterized ctor will get called 
      
      //Complex c1(10,20); //2 argument ctor will get called 
      
      //Complex f1( ); //function declaration ( no ctor called)
      
      //Complex f2 = 10; //Complex f2(10); //single parameterized ctor will get called 
      
      //Complex f3 = 10,20; //Complex f3(10) , 20 // NOT OK 

      //Complex(10,20); //Annonymous object 
      //Complex(10,20).printRecord( ); 
      
      //Complex f4 = {10,20}; // OK ( 2 argument ctor is getting called)

      //Complex f5 = 10,20; // NOT OK 
      
      //Complex f5 = (10,20); //single parameterized ctor 
      //f5.printRecord( ); 
      return 0;
}
