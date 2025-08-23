#include<iostream> 

using namespace std; 

class Array 
{
    private: 
    int *arr; 
    int size; 
    public: 
    
    Array( int size)
    {
        this->size = size; 
        this->arr = new int[this->size]; 
    }
    void acceptRecord( void )
    {
        for(int index = 0 ; index < this->size ; index++)
        {
            cout<<"element : "; 
            cin>>arr[index]; 
        }
    }
    void printRecord( void )
    {
        for(int index = 0 ; index < this->size ; index++)
        {
            cout<<"Element : "<<arr[index]<<endl; 
        }
    }
    ~Array( void )
    {   
        if(this->arr!=NULL)
        {
            delete[] arr; 
            arr = NULL; 
            cout<<"memory freed"<<endl; 
        }
    }
}; 
int main()
{
   return 0;
}

int main1(int argc, char const *argv[])
{
    Array a1(3); 
    a1.acceptRecord( ); 
    a1.printRecord( ); 
    

    return 0;
}
