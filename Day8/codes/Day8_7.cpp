#include<iostream>
using namespace std;

class Test
{
private:
	int num1;
public:
	Test( void )
	{
		this->num1 = 10;
	}

	//Test *const this = &t1
	void showRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
	}

	//const Test *const this = &t1
	void displayRecord( void )const
	{
		//Test *const ptr = ( Test *const )this;
		Test *const ptr = const_cast<Test *const>( this );
		ptr->showRecord();
	}
};
int main( void )
{
	const Test t1;
	t1.displayRecord( );
	return 0;
}
