#include<iostream> 
using namespace std; 
void sum(int n1 = 0 , int n2 = 0 , int n3 = 0 , int n4 = 0 , int n5 = 0); 
int main()
{
    //::sum(10,20,30,40,50); 
    //::sum(10,20,30,40); 
    //::sum(10,20,30); 
    //::sum(10,20); 
    //::sum(10); 
    ::sum(); 
    return 0;
}
void sum(int n1, int n2 , int n3, int n4, int n5)
{
    int result = n1 + n2 + n3 + n4 + n5; 
    cout<<"result : "<<result; 
}
