#include<iostream> 

using namespace std; 
static int number = 10; // file scope 
void print( )
{
    //static int number = 10; // function scope 
    number++; 
    cout<<"number : "<<number<<endl; 
}
int main()
{
    print( );   
    print( );     
    print( );   
    return 0;
}

// void print( )
// {
//     int number = 10; 
//     number++; 
//     cout<<"number : "<<number<<endl; 
// }
// int main()
// {
//     print( );   
//     print( );     
//     print( );   
//     return 0;
// }
