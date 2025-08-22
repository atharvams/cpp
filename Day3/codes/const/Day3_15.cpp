#include<iostream> 
using namespace std; 
//we cannot declare global function const , class cannot const 
//local pointer and global pointer can be made const 
//data-member can be const 
//member funtion  can be const 
// main cannot be const ( global function cannot be const)
// only current state of object  is  modified 
// we can make such members as const who can get this pointer 
// I dont want to modify state of current inside the printRecord
 
class Test 
{
    private: 
    int num1; 
    int num2; 
    public: 
    Test( void ) : num1(10) , num2(20) 
    { }
    //const Test * const this = &t1  
    void showRecord( void ) const 
    {
        //++this->num1; 
        //++this->num2; 
        cout<<"num1 : "<<num1<<endl; 
        cout<<"num1 : "<<num2<<endl; 
    } 
    void printRecord( void ) const 
    {
        //++this->num1; 
        //++this->num2; 
        cout<<"num1 : "<<num1<<endl; 
        cout<<"num2 : "<<num2<<endl; 
    } 
}; 

int main() 
{
    Test t1; 
    t1.showRecord( ); 
    t1.printRecord( ); 
    return 0;
}

