#include<iostream> 

using namespace std; 
//size of object = size of all non-static data-members 
// non-static data-member gets space once per object 
// static data-member gets space once per class 
class Test
{
    private: 
    int num1; // instance variable  
    int num2; // instance variable  
    const static int num3; // class-level variable 
    public:
    Test(void) : num1(0) , num2(0)
    {   } 
    Test(int num1 , int num2)
    { 
        this->num1 = num1; 
        this->num2 = num2; 
        //num3 = 500;  // NOT Reccommended
    }
    void printRecord( void )
    {
        cout<<"num1 : "<<num1<<endl; 
        cout<<"num2  : "<<num2<<endl; 
        cout<<"num3  : "<<Test::num3<<endl; 
        cout<<endl; 
    }
}; 
const int Test :: num3 = 500; // Global defination 
int main()
{
    Test t1(10,20);
    t1.printRecord( );  
    Test t2(30,40); 
    t2.printRecord( ); 
    return 0;
}
