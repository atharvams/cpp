#include<iostream> 

using namespace std; 
int main(int argc, char const *argv[])
{   
    int count = -1; 
    try
    {
        int *ptr = new int[count]; 
        *ptr = 20; 
        cout<<"Value : "<<*ptr; 
        delete ptr; 
        ptr = NULL; 
    }
    catch(bad_alloc ex)
    {
        cout<<ex.what( )<<endl; 
    }
    
    return 0;
}

int main1()
{
    //int **ptr = (int**)calloc(3 , sizeof(int*)); 
    
    int **ptr = new int*[4]; 
    
    for(int index = 0 ; index < 4 ; index++)
        ptr[index] = new int[3]; 
    
    //ACCEPT () , PRINT() 

    for(int index = 0 ; index < 4 ; index++)
    {
         delete[] ptr[index]; 
         ptr[index ] = NULL;    
    }
    delete[] ptr; // To avoid memory leakage  
    ptr = NULL; // To avoid dangling pointer 
    return 0;
}
