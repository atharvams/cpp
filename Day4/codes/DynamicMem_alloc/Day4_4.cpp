#include<iostream> 

using namespace std; 
class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    Complex( void ) : real(0 ) ,imag(0)
    {   
        cout<<this<<"Complex( void )"<<endl; 
    }
    Complex(int real , int imag) : real(real) , imag(imag)
    {   
        cout<<"Complex(int real , int imag)"<<endl; 
    }
    void acceptRecord(void)
    {
        cout<<"Real: "; 
        cin>>real; 
        cout<<"Imag: "; 
        cin>>imag; 
    }
    void printRecord( void )
    {
        cout<<"Real : "<<real<<endl; 
        cout<<"Imag : "<<imag<<endl; 
    }
    ~Complex( void )
    {
        cout<<"~Complex( void )"<<endl; 
    }
}; 
int main(int argc, char const *argv[])
{
    Complex arr[3]; 
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    return 0;
}

int main2()
{
    //Complex c1(10,20); // parameterized ctor 

    Complex *ptr = new Complex(10,20); //parameterized ctor will get called
    ptr->printRecord( ); 
    delete ptr; 
    ptr = NULL;  
    return 0;
}

int main1(int argc, char const *argv[])
{
    //Complex c1; // parameter less 
    //c1.printRecord( ); 
    
    Complex *ptr = new Complex( );//parameter-less ctor will get called 
    ptr->printRecord( );  
    delete ptr; 
    ptr = NULL;
    //Complex *ptr = (Complex*)malloc(sizeof(Complex)); 
    //free ptr; 
    return 0;
}
