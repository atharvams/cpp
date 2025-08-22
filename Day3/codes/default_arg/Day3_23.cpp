#include<iostream> 
using namespace std; 
class Complex
{
private:
    int real;
    int imag;
public:

    Complex( int real = 0 , int imag = 0 ) : real(real) , imag(imag)
    {   }
    void printRecord(void)
    {
        cout << "Real : " << real << endl;
        cout << "Imag : " << imag << endl;
    }
   
    
};
int main(int argc, char const *argv[])
{
    Complex c1(10,20); 
    c1.printRecord( ); 
    return 0;
}

int main1()
{
    Complex c1; 
    c1.printRecord( ); 
    return 0;
}
