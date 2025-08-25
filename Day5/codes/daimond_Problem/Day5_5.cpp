#include<iostream> 

using namespace std; 

class A 
{
    private: 
    int num1; 
    public: 
    A(void) : num1(0)
    {   } 
    A(int num1) : num1(num1)
    { }
    void printRecord(void )
    {
        cout<<"num1 : "<<num1<<endl; 
    }
}; 
class B : public A 
{
    private: 
    int num2; 
    public: 
    B( void ) : num2(0)
    {   } 
    B(int num1 , int num2) : num2(num2) , A(num1) 
    {   }
    void printRecord(void )
    {
        A::printRecord( ); 
        cout<<"num2 : "<<num2<<endl; 
    }
}; 
class C : public A
{
    private: 
    int num3; 
    public: 
    C( void ) : num3(0)
    {   }
    C(int num1 , int num3) : A(num1) , num3(num3) 
    {   }
    void printRecord(void )
    {   
        A::printRecord( ); 
        cout<<"num3 : "<<num3<<endl; 
    }

}; 
class D : public B , public C 
{
    private: 
    int num4; 
    public: 
    D(void) : num4(0)
    {   } 
    D(int num1 , int num2 , int num3 , int num4) :B(num1,num2) , C(num1,num3) ,  num4(num4)  
    {   }
    void printRecord(void )
    {
        B::printRecord( ); 
        C::printRecord( ); 
        cout<<"num4 : "<<num4<<endl; 
    }
}; 
int main4(int argc, char const *argv[])
{
    D d(10,20,30,40); 
    d.printRecord( ); 
    return 0;
}

int main(int argc, char const *argv[])
{
    C c(10,40); 
    c.printRecord( ); 
    return 0;
}

int main2(int argc, char const *argv[])
{
    B b(10,20); 
    b.printRecord( ); 
    return 0;
}

int main1(int argc, char const *argv[])
{
    A a(10); 
    a.printRecord( ); 
    return 0;
}
