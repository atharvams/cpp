#include<iostream> 
using namespace std; 
class Test
{
    private: 
    int num1; 
    int num2; 
    mutable int count; 
    public: 
    Test( void ) : num1 ( 10 ) , num2(20) , count(0)
    { }
    void showRecord( void ) const 
    {   
        //++this->num1; 
        //++this->num2; 
        cout<<"num1 : "<<num1<<endl;
        cout<<"num2 : "<<num1<<endl; 
    }
    void printRecord( void ) const 
    {
        //++this->num1; 
        //++this->num2; 
        ++this->count; 
        cout<<"num1 : "<<num1<<endl;
        cout<<"num2 : "<<num2<<endl; 
    }
    int getCount( void )
    {
        return this->count; 
    }
}; 
int main()
{
    Test t1; 
    t1.printRecord( ); 
    t1.printRecord( ); 
    t1.printRecord( );  

    int cnt = t1.getCount( ); 
    cout<<"count : "<<cnt<<endl; 
    return 0;
}
