#include<iostream> 

void print( void)
{
    static int x; // BSS section 
    static int y = 10; // Data section 
    const static int z = 30; // RO data section 
}
int main()
{
    print( ); 
    return 0;
}
