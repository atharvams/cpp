#include<iostream> 

using namespace std; 
//size of object = size of all non-static data-members 
// non-static data-member gets space once per object 
// static data-member gets space once per class
// you cannot declare static member function const , volatile , virtual  
class Test
{
    private: 
    int num1; // instance variable  
    int num2; // instance variable  
    static int num3; // class-level variable 
    public:
    Test(void) : num1(0) , num2(0)
    {   } 
    Test(int num1 , int num2)
    { 
        this->num1 = num1; 
        this->num2 = num2; 
        //num3 = 500;  // NOT Reccommended
    }
    void setNum1(int num1)
    {
        this->num1 = num1; 
    }
    void setNum2(int num2)
    {
        this->num2 = num2; 
    }
    static void setNum3(int num3) 
    {   
        Test::num3 = num3; 
    }
    void printRecord( void )
    {
        cout<<"num1 : "<<num1<<endl; 
        cout<<"num2  : "<<num2<<endl; 
        cout<<"num3  : "<<Test::num3<<endl; 
        cout<<endl; 
    }
}; 
int Test :: num3 = 500; // Global defination 
int main()
{
    Test t1;
    t1.setNum1(10); 
    t1.setNum2(20); 
    Test::setNum3(1000); 
    t1.printRecord( );
    
    Test t2; 
    t2.setNum1(30); 
    t2.setNum2(40); 
    t2.printRecord( ); 
    return 0;
}
