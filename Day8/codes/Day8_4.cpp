#include<iostream> 
#include<fstream>
#include<sstream>

using namespace std; 
class Employee
{
    private: 
    int id; 
    string name; 
    double salary; 
    public: 
    Employee(void) 
    {   } 
    Employee(int id , string name , double salary) : id(id) , name(name) , salary(salary)
    {   }
    void accept( void )
    {
        cout<<"Id : "; 
        cin>>id; 
        cout<<"Name : "; 
        cin>>name; 
        cout<<"Salary : "; 
        cin>>salary; 
    }
    void display( )
    {
        cout<<"Id : "<<id<<endl;
        cout<<"Name : "<<name<<endl; 
        cout<<"Salary : "<<salary<<endl;
    }
    int getId( void )
    {
        return this->id; 
    }
    string getName( void )
    {
        return this->name; 
    }
    double getSalary( void )
    {
        return this->salary; 
    }
}; 
void write( void )
{
    ofstream fout("Employee.txt",ios::app); 
    Employee e1; 
    e1.accept( ); 
    fout<<e1.getId()<<","<<e1.getName()<<","<<e1.getSalary()<<endl; 
    fout.close( ); 
}
void read( void )
{
    ifstream fin("Employee.txt"); 
    string line; 
    while(getline(fin,line))
    {
        //cout<<line; 
        stringstream data(line); 
        string id , name , salary; 
        getline(data,id,','); 
        getline(data,name,','); 
        getline(data,salary,',');
        
        Employee e(stoi(id) , name , stod(salary)); 
        e.display( ); 

    }
    fin.close( ); 
}
int main(int argc, char const *argv[])
{
    //write( ); 
    read( ); 
    return 0;
}
