#include<iostream> 

using namespace std; 

class A 
{
    public: 
    int a1; 
    int a2; 
    int a3; 
    A ( void ) : a1(0) , a2(0) , a3(0) 
    { }
}; 
void input(A &obj)
{
    cout<<"Enter the values : "; 
    cin>>obj.a1>>obj.a2>>obj.a3; 
}
void display(A &obj)
{
    cout<<obj.a1<<obj.a2<<obj.a3; 
}
class Test 
{
    private: 
    char &ref; 
    public: 
    Test(char &ch) : ref(ch)
    {   }
    void incr( )
    {
        ref++; 
    }
    void display( )
    {
        cout<<ref<<endl; 
    }
}; 
int main(int argc, char const *argv[])
{
    // A obj1; 
    // ::input(obj1); 
    // ::display(obj1);
    
    //char ch = 'A'; 
    //char &ch1 = ch; 
    //cout<<sizeof(ch1)<<endl; 

    //cout<<sizeof(Test)<<endl; 
    //char ch2 = 'A'; 
    //Test t1(ch2); 
    //t1.incr( ); 
    //t1.display( ); 
    char ch1 = 'A' , ch2 = 'B' , ch3 = 'C'; 
    //char& arr[3] = {ch1,ch2,ch3}; 
    
    Test arr[3] = {ch1 , ch2 , ch3};
    
    for(int index = 0 ; index < 3 ; index++)
        arr[index].incr( ); 
    for(int index = 0 ; index < 3 ; index++)
        arr[index].display( ); 
    return 0;
}
