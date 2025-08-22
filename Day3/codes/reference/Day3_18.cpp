#include<iostream>
//typedef is used to create the alias for existing data type (class / structure)
//where-as reference is used to create alias of existing object(not for constant literal)   
using namespace std; 

//by reference 
void swap(int &num1 , int &num2)
{
    int temp = num1; 
    num1 = num2; 
    num2 = temp; 
}
int main()
{
    int num1 = 10 , num2 = 20; 
    swap(num1, num2);
    cout<<"num1 : "<<num1<<endl; 
    cout<<"num2 : "<<num2<<endl;  
    return 0;
}

int main9()
{
    int num1 = 10; 
    int num2 = 20; 
    int &num3 = num1;
    num3 = num2; 
    cout<<"num1 : "<<num1<<endl; 
    cout<<"num2 : "<<num2<<endl; 
    cout<<"num3 : "<<num3<<endl; 

    return 0;
}

int main8(int argc, char const *argv[])
{
    int num1 = 10; // referent 
    int &num2 = num1; // reference 
    int &num3 = num2;  
    cout<<"&num1  : "<<&num1<<endl; 
    cout<<"&num2  : "<<&num2<<endl; 
    cout<<"&num3  : "<<&num3<<endl; 
    return 0;
}

int main7()
{
    int num1 = 10; 
    //int &num2 = NULL; // NOT ALLOWED 
    return 0;
}
int main6()
{
    int num1 = 10; 
    //int &num2; // NOT ALLOWED 
    int &num2 = num1;  
    return 0;
}

int main5()
{
    int num1 = 10; //referent 
    int &num2 = num1; //reference 
    ++num1; 
    ++num2; 
    cout<<"num1  : "<<num1<<endl; 
    cout<<"num2  : "<<num2<<endl; 
    return 0;
}
int main4()
{
    int num1 = 10; //referent 
    int &num2 = num1; //reference
    int &num3 = num1; // reference  
    ++num1; 
    ++num2; 
    ++num3; 
    cout<<"num1  : "<<num1<<endl; 
    cout<<"num2  : "<<num2<<endl; 
    return 0;
}
int main3()
{
    int num1 = 10; //referent 
    int &num2 = num1; //reference 
    ++num1; 
    ++num2; 
    cout<<"num1  : "<<num1<<endl; 
    cout<<"num2  : "<<num2<<endl; 
    return 0;
}
int main2()
{
    int num1 = 10; //referent 
    int &num2 = num1; //reference 
    cout<<"&num1  : "<<&num1<<endl; 
    cout<<"&num2  : "<<&num2<<endl; 
    return 0;
}

int main1()
{
    int num1 = 10; 
    int num2 = num1; 
    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl; 
    return 0;
}
