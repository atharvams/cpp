#include<iostream> 
using namespace std;
class Person 
{
    private: 
    string name; 
    int age; 
    public: 
    Person( void ) : name("") , age(0)
    {   
        cout<<"Person( void )"<<endl; 
    }
    Person(string name , int age) : name(name) , age(age)
    { 
        cout<<"Person(string name , int age)"<<endl; 
    }; 
    void printRecord(void )
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
    {   
        cout<<"Employee( void )"<<endl; 
    } 
    Employee(string name , int age , int empid , double salary) : empid(empid) , salary(salary) , Person(name,age)
    {   
        cout<<"Employee(string name , int age , int empid , double salary) "<<endl; 
    }
    void printRecord( void )
    {   
        //this->Person::printRecord( ); 
        Person::printRecord( ); 
        cout<<"Empid : "<<empid<<endl; 
        cout<<"Salary : "<<salary<<endl; 
    }
    
}; 

int main(int argc, char const *argv[])
{
    Employee emp("Ketan",30,1,1000.00); 
    emp.printRecord( ); 
    return 0;
}




