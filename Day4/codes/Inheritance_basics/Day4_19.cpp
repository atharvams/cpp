#include<iostream> 

using namespace std; 
class Person 
{
    private: 
    string name; // 24 
    int age; // 4 
    public: 
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
class Employee : public Person 
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
    Employee e1; 
    cout<<sizeof(e1); 
    return 0;
}

int main1(int argc, char const *argv[])
{
    Person p1; 
    cout<<sizeof(p1); 
    return 0;
}
