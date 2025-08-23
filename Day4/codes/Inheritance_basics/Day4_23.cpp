#include<iostream> 

using namespace std; 
class Person 
{
    private: 
    string name; // 24 
    int age; // 4 
    public: 
    Person(void) : name("") , age(0)
    {   
        cout<<"Person(void)"<<endl; 
    } 
    Person(string name , int age) : name(name) , age(age)
    {  
        cout<<"Person(string name , int age)"<<endl;     
    }
    void showRecord( void )
    {
        cout<<"Name : "<<name<<endl; 
        cout<<"Age : "<<age<<endl; 
    }
    ~Person( void )
    {
        cout<<" ~Person( void )"<<endl; 
    }

}; 
class Employee : public Person 
{
   private:
   //string name; //24  
   //int age; // 4 
   int empid; // 4
   float salary; //4 
   public: 
   Employee( void ) : empid(0), salary(0.0)
   {    
        cout<<"Employee( void )"<<endl; 
   }
   Employee(string name , int age , int empid , float salary) : empid(empid),salary(salary)
   {    
        cout<<"Employee(int empid , float salary)"<<endl; 
   } 
   void displayRecord( void )
   {
    //cout<<"Name : "<<name<<endl; 
    //cout<<"Age : "<<age<<endl;
    cout<<"Empid : "<<empid<<endl; 
    cout<<"Salary :" <<salary<<endl;  
   }
    ~Employee( void )
    {
        cout<<"~Employee( void )"<<endl; 
    }
}; 
int main(int argc, char const *argv[])
{
    Employee e1; 
    return 0;
}

int main1(int argc, char const *argv[])
{
    //Person p; 
    Person p("Ketan",1); 
    return 0;
}



