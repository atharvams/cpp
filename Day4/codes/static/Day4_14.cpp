#include<iostream> 
using namespace std; 
class InstanceCounter
{
    private: 
    static int count; 
    public: 
    InstanceCounter( ) 
    {   
        ++InstanceCounter::count; 
    } 
    static int getCount( void )
    {
        return InstanceCounter::count; 
    }
}; 
int InstanceCounter::count = 0; 
int main(int argc, char const *argv[])
{
    InstanceCounter i1 , i2 , i3; 
    int cnt = InstanceCounter::getCount(  ); 
    cout<<"cnt  :"<<cnt<<endl; 
    return 0;
}
