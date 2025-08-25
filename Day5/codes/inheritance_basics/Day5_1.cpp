#include<iostream> 
using namespace std;
class Person 
{
    private: 
    string name; 
    int age; 
    public: 
    Person( void ) : name("") , age(0)
    {   }
    Person(string name , int age) : name(name) , age(age)
    { }; 
    void showRecord(void )
    {
        cout<<"Name : "<<name<<endl; 
        cout<<"Age : "<<age<<endl; 
    }
}; 
class Employee : public Person 
{
    private: 
    int empid; 
    double salary; 
    public: 
    Employee( void ) : empid(0) , salary(0.0)
    {   } 
    Employee(string name , int age , int empid , double salary) : empid(empid) , salary(salary)
    {   }
    void displayRecord( void )
    {
        cout<<"Empid : "<<empid<<endl; 
        cout<<"Salary : "<<salary<<endl; 
    }
}; 
int main(int argc, char const *argv[])
{
    Employee e; 
    e.displayRecord( ); // e.Employee::displayRecord( ); 
    return 0;
}

int main1()
{
    Person p; 
    p.showRecord( ); // OK // p.Person::showRecord(); 
    //p.displayRecord( ); // NOT OK ( not a member)
    return 0;
}
