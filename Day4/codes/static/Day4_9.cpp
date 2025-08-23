#include<iostream> 

using namespace std; 
class Test
{
    private: 
    int num1; 
    int num2; 
    int num3; 
    public:
    Test(void) : num1(0) , num2(0)
    {   } 
    Test(int num1 , int num2)
    { 
        this->num1 = num1; 
        this->num2 = num2; 
        num3 = 500; 
    }
    void printRecord( void )
    {
        cout<<"num1 : "<<num1<<endl; 
        cout<<"num2  : "<<num2<<endl; 
        cout<<"num3  : "<<num3<<endl; 
        cout<<endl; 
    }
}; 
int main(int argc, char const *argv[])
{
    Test t1(10,20);
    t1.printRecord( );  
    Test t2(30,40); 
    t2.printRecord( ); 
    return 0;
}
