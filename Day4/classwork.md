##demo3 -- 
new operator -- using single variable ( malloc comparison) 
new operator -- syntax check 
new operator with multiple variable ( calloc comparison) 

##demo04 -- new and delete using try and catch block ( bad_alloc) 
//dynamic memory allocation for 2D array 
//output : std :: bad_alloc() => if new fails 

##demo - student class ( roll , name(string) , marks) , paramterless , paramterized ctor , accept , display
# Student arr[3]; 
# Student *arr[3]; 
# Student *arr = new Student[3]; 
# Student **arr = new Student*[3]; 


##demo05 -- Complex class -- ( parameterless ctor ,parameterized ,  accept , print), destructor , dynamic memory allo using new 
				( ctor and destructor calling) (basic)

##demo06 -- Array class -- (SIZE - 3 , Array(parameter-less ctor -- assing 100 to all eleme ) , acceptRecord() , printRecord() ) 

##demo07 -- Array class -- ( size , *arr , acceptR , printR , destructor) 
			parameterless ctor(0,NULL) , parameterized ctor 

##demo08 -- ctor and dtor calling sequence , Complex class (paramterless ctor , printR , dtor) , dynamic object in main array , delete 
	    complex *arr = new complex[3]
	
##dem09  -- simple count(local variable with function)  print function global , printing count through function call 

##demo10 -- same above code using static 

##demo11 -- same above code --uninit static ( BSS segment ) , init static ( Data segment) , const static ( RO Data section) , static global (file scope) 

##demo12 --Test class ( num1 , num2 , num3 = 500) , parameterized ctor ( num1 ,num2) , num3 is 500 , printRecord() 

##dem013 -- same code change to static parameterized ctor ( num1 ,num2) , num3 is 500 , printRecord() 
//size of object = size of all non-static data-members 
// non-static data-member gets space once per object 
// static data-member gets space once per class 
//Instance variable , classVariable 

##demo14 -- same code using const (const static global declaration const) 

##demo15 -- same above code using setter (without const) ( static function to update static member) 
using class-name is optional if there was a same parameter then class-name is compulsory
//designed to call on object so make it non-static 
// not designed to call on object so make it static  

##demo16 -- same code 
// we cannot access non-static inside static directly (Compiler Error)

##demo17 -- same code -- static f1 function -- create object and access non static inside static function 
// static f1 -- use setter to call all 
// we can create object inside static member function 
// and then we can access non-static member function inside static member function 
// you cannot declare static member function const , volatile , virtual 
// const member functions are designed to call on object 
// and static are designed to  call on class Name  

##demo18 -- InstanceCounter(to count number of objects Created) -- count , Paramterless ctor (count incr) , static getCount 

##demo19 -- pow function 
//If your member function doesn't need this pointer 
//then make that member function as static 
// bcause we are not processing the state of object 

##demo20 -- //Annonymous class -- showRecord() , printRecord() 

##association 

##Demo21 (without Inheritance) 
  Person(name ,age) , ctor , dtor , showRecord()
  Employee(name , age , empid , salary) , ctor , dtor , displayRecord()

##Demo22(with Inheritance) 
Person(name ,age) , ctor , dtor , showRecord()
Employee(name , age , empid , salary) , ctor , dtor , displayRecord()
sizeof(); 

##Demo23 (static data members) 
##Demo4 (with Inheritance) 
Person(name ,age) , ctor , dtor , showRecord()
Employee(name , age , empid , salary) , ctor , dtor , displayRecord()


##Demo25(static member function) 
Person(name ,age) , ctor , dtor , showRecord()
Employee(name , age , empid , salary) , ctor , dtor , displayRecord()

##Demo24
Person(name ,age) , ctor , dtor , showRecord()
Employee(name , age , empid , salary) , ctor , dtor , displayRecord()
( we can call base class member function on derived class Object) 










 