#include<iostream> 
#include<stdlib.h> 
using namespace std;
int main(int argc, char const *argv[])
{
    
     int *ptr; 
    //void *calloc(size_t, size_t)
    ptr = (int*)calloc(3 , sizeof(int)); //12 bytes memory allocated 
    if(ptr!=NULL)
    {
        ptr[0] = 10; 
        ptr[1] = 20; 
        ptr[2] = 30; 
        ptr = (int*)realloc(ptr, 5 * sizeof(int)); //20 bytes 
        if(ptr!=NULL)
        {
            ptr[3] = 40; 
            ptr[4] = 50;
            for(int index = 0 ; index < 5 ; index++)
            cout<<ptr[index]<<endl;     
            
            free(ptr); //to avoid memory leakage 
            ptr = NULL; // to avoid dangling pointer
        }
        else 
          cout<<"Memory allocation failed"; 
    }
    else 
      cout<<"Malloc() failed"<<endl; 
    return 0;
}

int main4()
{
    int **ptr = (int**)calloc( 4 , sizeof(int*)); 
    if(ptr!=NULL)
    {
        // ptr[0] = (int*)calloc(3 , sizeof(int)); 
        // ptr[1] = (int*)calloc(3 , sizeof(int)); 
        // ptr[2] = (int*)calloc(3 , sizeof(int)); 
        // ptr[3] = (int*)calloc(3 , sizeof(int)); 

        for(int index = 0 ; index < 4 ; index++)
          ptr[index] = (int*)calloc(3 , sizeof(int));

        for(int row = 0 ; row < 4 ; row++)
        {
            for(int col = 0 ; col< 3 ; col++)
            {
                cout<<"ptr["<<row<<"]["<<col<<"] : ";
                cin>>ptr[row][col];  
            }
        }   
        for(int row = 0 ; row < 4 ; row++)
        {
            for(int col = 0 ; col< 3 ; col++)
            {
                cout<<ptr[row][col] << " "; 
            }
            cout<<endl; 
        }  
        // free(ptr[0]); 
        // free(ptr[1]);
        // free(ptr[2]);
        // free(ptr[3]);  
        for(int index = 0 ; index < 4 ; index++)
            free(ptr[index]); 
        free(ptr); 
        ptr = NULL;    
    }
    else 
      cout<<"calloc() failed"<<endl; 
    return 0;
}

int main3(int argc, char const *argv[])
{
    int *ptr; 
    //void *calloc(size_t, size_t)
    ptr = (int*)calloc(3 , sizeof(int)); //12 bytes memory allocated 
    if(ptr!=NULL)
    {
        ptr[0] = 10; 
        ptr[1] = 20; 
        ptr[2] = 30; 
        for(int index = 0 ; index < 3 ; index++)
           cout<<ptr[index]<<endl; 
        free(ptr); //to avoid memory leakage 
        ptr = NULL; // to avoid dangling pointer
    }
    else 
      cout<<"Malloc() failed"<<endl; 
    return 0;
}

int main2(int argc, char const *argv[])
{
    int *ptr; 
    ptr = (int*)malloc(3 * sizeof(int)); //12 bytes memory allocated 
    if(ptr!=NULL)
    {
        ptr[0] = 10; 
        ptr[1] = 20; 
        ptr[2] = 30; 
        for(int index = 0 ; index < 3 ; index++)
           cout<<ptr[index]<<endl; 
        free(ptr); 
        ptr = NULL; 
    }
    else 
      cout<<"Malloc() failed"<<endl; 
    
    return 0;
}

int main1()
{
    //void* malloc(size_t size); 
    int *ptr; 
    ptr = (int*)malloc(sizeof(int)); 
    if(ptr!=NULL)
    {
        *ptr = 200; 
        cout<<"Value : "<<*ptr<<endl; 
        free(ptr); //to avoid memory leakage 
        ptr = NULL; // to avoid dangling pointer 
    }
    else 
      cout<<"Malloc() failed"<<endl; 
    return 0;
}
