#include<iostream> 

using namespace std; 
class Person //base class 
{
    private: 
    string name; // 24 
    int age; // 4 
    public: 
    static int count; 
    Person(void) : name("") , age(0)
    {   } 
    Person(string name , int age) : name(name) , age(age)
    {   }
    void showRecord( void )
    {
        cout<<"Name : "<<name<<endl; 
        cout<<"Age : "<<age<<endl; 
    }

}; 
int Person :: count = 10; 
class Employee : public Person // Derived class 
{
   private:
   //string name; //24  
   //int age; // 4 
   int empid; // 4
   float salary; //4 
   public: 
   Employee( void ) : empid(0), salary(0.0)
   {    }
   Employee(int empid , float salary) : empid(empid),salary(salary)
   {    } 
   void displayRecord( void )
   {
    //cout<<"Name : "<<name<<endl; 
    //cout<<"Age : "<<age<<endl;
    cout<<"Empid : "<<empid<<endl; 
    cout<<"Salary :" <<salary<<endl;  
   }
}; 
int main(int argc, char const *argv[])
{
    //Person::count; //static fields are accessible using base class 
    Employee::count; //static fields are accessible using derived class 
    return 0;
}


