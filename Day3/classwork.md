#demo1 -- Addition of 2 objects using this pointer 

#demo2 - Time class -- hrs , mins , secs (input() , display()) 

  

#demo3 - Initialization and assignment concept -- Complex class with initComplex 

#demo04 -- Complex class with constructor ( testing ctor with pointer , reference(use . operator ) 
(constructor calling sequence) 	
//constructor cannot be declared static , const , volatile , virtual 

#demo05 -- Same Complex making ctor as private 

#demo06 -- Same complex with parameterized ctor (one argument) , 2 argument 

#demo07 --/* Complex class to demonstrate parameterized ctor 
    If we dont write any ctor inside the class then compiler generate 
    one ctor by default it is called default ctor (compiler defined ctor)
    Complex( )
    {
        ptr = NULL 
    }
    it is empty for the programmer , it is used to init data-member
    added by compiler eg : ptr ( if pointer added)
    ctor will not generate default parametrized ctor  
    // you must write the parameterized ctor 
*/

#demo08 -- Complex class -- single parameter ( value ) , 2 parameter ctor , parameter-less , printRecord
	   demonstrate diff calls to constructor

#demo09 -- Constructor delegation (calling ctor from parameter-less) --Complex class 

#demo10 -- Array of objects using ctor -- Complex class -- Complex arr[3] -- (Complex (10,20)  
           para-less , parameterized 

#demo11 -- Constructor member init list (parameter-less and parameterized) 
	   ctor member init list should appear in defination not declaration 

#demo -- const data member , printRecord() , showRecord() 
// i dont to modify inside any member function,
//in that case data-member should be const 

#demo12 -- const data-member 
// mutable keyword 

//ctor cannot be const 
//we cannot declare global function const , class cannot const 
//local pointer and global pointer can be made const 
//data-member can be const 
//member funtion  can be const 
********************************
// main cannot be const ( global function cannot be const)
// only current state of object  is  modified 
// we can make such members as const who can get this pointer 
// I dont want to modify state of current inside the printRecord
//const Test * const this = &t 



#demo13 -- const object and const member function 
// num1 , num2 , Test class , show() , print() 

#demo14 -- all about reference  , swap method 
//typedef is used to create the alias for existing data type (class / structure)
//where-as reference is used to create alias of existing object(not for constant literal)   

#demo15 -- class A -- int (a1,a2,a3) , parameterized ctor , global function input to input and display to print 
//C++11, allows array initializer

#demo16 default argument 


##demo01 -- Dynamic memory allocation 
malloc - single variable , multiple variable 
calloc - same code using calloc (single variable , multiple variable) 
calloc - allocating memory dynamically for 2D array 


##demo2 -- Complex class -- ( parameterless ctor , accept , print), destructor , dynamic memory allo using malloc 








	 
