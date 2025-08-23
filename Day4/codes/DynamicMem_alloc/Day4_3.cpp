#include<iostream> 
using namespace std; 
class Student 
{
    int roll; 
    string name; 
    double marks; 
    public: 
    Student( void ) : roll(0) , name("") , marks(0.0)
    {   }
    Student(string name , int roll , double marks) : name(name) , roll(roll) , marks(marks)
    {   }
    void accept( void )
    {
        cout<<"Roll : "; 
        cin>>roll; 
        cout<<"Name : "; 
        cin>>name; 
        cout<<"Marks : "; 
        cin>>marks; 
        cout<<endl; 
    }
    void display( void )
    {
        cout<<"Roll : "<<roll; 
        cout<<"Name : "<<name; 
        cout<<"Marks :" <<marks; 
        cout<<endl; 
    }
}; 
int main()
{
    Student** arr = new Student*[2]; 
    arr[0] = new Student("Ketan",1,1000.00); 
    arr[1] = new Student("Aditya",2,2000.00); 
    
    for(int index = 0 ; index < 2 ; index++)
          arr[index]->display( ); 
    for(int index = 0 ; index < 2 ; index++)
    {
            delete arr[index]; 
            arr[index] = NULL; 
    }
    delete[] arr; // To avoid memory leakage  
    arr = NULL; // To avoid dangling pointer 
          
    return 0;
}

int main3(int argc, char const *argv[])
{
    Student *arr = new Student[2]; 
    for(int index = 0 ; index < 2 ; index++)
        arr[index].accept( ); 
    for(int index = 0 ; index < 2 ; index++)
        arr[index].display( ); 
    delete[] arr; // To avoid memory leakage   
    arr = NULL; // To avoid dangling pointer 
    return 0;
}

int main2(int argc, char const *argv[])
{
    Student *arr[3];
    
    arr[0] = new Student("Ketan",1,1000.00); 
    arr[1] = new Student("Aditya",2,2000.00); 
    arr[2] = new Student("Rahul",3,3000.00); 

    for(int index = 0 ; index < 3 ; index++)
    {
        delete arr[index]; 
        arr[index ] = NULL; 
    }
    return 0;
}

int main1()
{
    Student arr[2]; 
    for(int index = 0 ; index < 2 ; index++)
       arr[index].accept( ); 
    for(int index = 0 ; index < 2 ; index++)
       arr[index].display( ); 
    return 0;
}
