#include<iostream> 

using namespace std; 

class Math
{
    public: 
    static int pow( int base , int index)
    {
        int result = 1; 
        for(int i = 1 ; i<=index ; i++)
        {
            result = result * base; 
        }
        return result; 
    }
}; 
int main(int argc, char const *argv[])
{
    int res = Math::pow(2,3); 
    cout<<"res : "<<res; 
    return 0;
}
