#include<iostream> 
#include<fstream> 
#include<sstream> 
using namespace std;

void write( void )
{
    ofstream fout("file1.txt",ios::app); 
    fout<<"DAC course"<<endl; 
    fout.close( ); 
    
}
void read( void )
{
    ifstream fin("file1.txt");
    string line;  
    while(getline(fin,line))
    {
        cout<<line; 
    }
    fin.close( ); 
}
int main(int argc, char const *argv[])
{
    //write( ); 
    read( ); 
    return 0;
}
