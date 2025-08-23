#include<iostream> 
#define SIZE 3
using namespace std; 
class Array 
{   
    private: 
    int arr[SIZE]; 
    public: 
    Array( void )
    {
        for(int index = 0 ; index < 3 ; index++)
        {
             arr[index] = 100; 
        }
    }
    void acceptRecord( void )
    {
        for(int index = 0 ; index < 3 ; index++)
        {
            cout<<"Element : "; 
            cin>>arr[index]; 
        }
    }
    void printRecord( void )
    {
        for(int index = 0 ; index < 3 ; index++)
        {
            cout<<"Element "<<arr[index]<<endl; 
        }
    }
}; 
int main(int argc, char const *argv[])
{
    Array a1; 
    a1.acceptRecord( ); 
    a1.printRecord( ); 
    return 0;
}
