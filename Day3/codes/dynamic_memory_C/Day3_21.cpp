#include<iostream> 
using namespace std; 
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
    ~Complex(void)
    {
        cout<<"~Complex(void)"<<endl; 
    }
    
};
int main(int argc, char const *argv[])
{
    Complex *ptr = (Complex*)malloc(sizeof(Complex)); // no constructor called 
    ptr->acceptRecord( ); 
    ptr->printRecord( ); 
    free(ptr); // To avoid memory leakage  // no destructor called 
    ptr = NULL; // To avoid dangling pointer 
    return 0;
}
