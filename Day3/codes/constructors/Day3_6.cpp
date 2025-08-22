#include<iostream> 
using namespace std; 
//constructor cannot be declared static , const , volatile , virtual 

class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    //this = &c1 
    Complex( void )   // parameter-less ctor 
    {
        cout<<"Complex( void )"<<endl; 
        this->real = 0; 
        this->imag = 0; 
    }
    void acceptRecord( void )
    {
        cout<<"Real : "; 
        cin>>real; 
        cout<<"Imag : "; 
        cin>>imag; 
    }
    void printRecord( void )
    {
        cout<<"Real : "<<real<<endl; 
        cout<<"Imag : "<<imag<<endl; 
    }
}; 
int main(int argc, char const *argv[])
{
    //Constructor is called according to the order of declaration inside the class 
    Complex c1; 
    Complex c2; 
    Complex c3; 
    return 0;
}

int main3()
{
    //Complex *ptr; 
    //ptr->Complex(); // NOT OK  
    
    Complex c1; 
    //Complex &c2 = c1; 
    //c2.Complex(); // NOT OK 
    return 0;
}

int main2()
{
    //Complex c1; // parameter-less ctor    
    
    //Complex *ptr; //Constructor not called on pointer 

    Complex c2; // parameter-less ctor
    Complex &c3 = c2; //Constructor is not called on reference 
    return 0;
}

int main1(int argc, char const *argv[])
{
    Complex c1; 
    c1.printRecord( ); 
    return 0;
}
