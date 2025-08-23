#include<iostream> 
using namespace std; 
int main()
{
    //int *ptr = (int*)calloc(3 , sizeof(int)); 
    
    int *ptr = new int[3]; //12 bytes 
    ptr[0] = 10; 
    ptr[1] = 20; 
    ptr[2] = 30; 
    for(int index = 0 ; index < 3 ; index++)
        cout<<"value: "<<ptr[index]<<endl; 
    delete[] ptr; 
    ptr = NULL; 
    return 0;
}

int main2(int argc, char const *argv[])
{
    //int *ptr = new int; // init ==> garbage 

    //int *ptr = new int(); // init  value ==> 0 

    int *ptr = new int(3); // init  value ==> 3 
    return 0;
}

int main1()
{
    //int *ptr = (int*)malloc(sizeof(int)); 
    
    int *ptr = new int; 
    
    *ptr = 100; 
    cout<<"value : "<<*ptr;
    
    delete ptr; 
    ptr = NULL; 
    return 0;
}
