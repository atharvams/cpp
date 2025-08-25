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
        this->showRecord( ); 
    }
    protected:
    void showRecord( void )
    {
        cout<<"num1 : "<<num1<<endl; 
    }
}; 
class B : virtual public A 
{
    private: 
    int num2; 
    public: 
    B( void ) : num2(0)
    {   } 
    B(int num2) : num2(num2) 
    {   }
    void printRecord(void )
    {
        this->showRecord( ); 
    }
    protected: 
    void showRecord( void )
    {
        cout<<"num2 : "<<num2<<endl; 
    }
}; 
class C : virtual public A
{
    private: 
    int num3; 
    public: 
    C( void ) : num3(0)
    {   }
    C(int num3) : num3(num3)
    {   }
    void printRecord(void )
    {   
        this->showRecord( ); 
    }
    protected: 
    void showRecord( void )
    {
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
    D(int num1 , int num2 , int num3 , int num4) : A(num1) , num4(num4) , B(num2) , C(num3)
    {   }
    void printRecord(void )
    {
        A::showRecord( ); 
        B::showRecord( );
        C::showRecord( ); 
        this->showRecord( ); 
    }
    protected: 
    void showRecord( )
    {
        cout<<"num4 : "<<num4<<endl; 
    }
}; 
int main(int argc, char const *argv[])
{
    D d(10,20,30,40); 
    d.printRecord( ); 
    return 0;
}


