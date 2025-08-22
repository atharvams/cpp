#include<iostream> 
using namespace std; 
class Test
{
    private: 
    const int num1; 
    public:
    Test( void ) : num1(0)
    { }
    void printRecord( void )
    {
        cout<<"num1 : "<<num1<<endl; 
    }
}; 
int main()
{
    Test t1; 
    t1.printRecord( ); 
    return 0;
}
