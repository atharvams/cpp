#include<iostream> 
using namespace std; 
class 
{   
    public: 
    void printRecord( void )
    {
        cout<<"void printRecord( void )"<<endl; 
    }    
    static void showRecord( void )
    {
        cout<<"static void showRecord( void )"<<endl; 
    }
}c1; 
int main()
{
    c1.showRecord( ); 
    c1.printRecord( ); 
    return 0;
}
