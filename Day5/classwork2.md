Base -- num1 , num2 , ctor , para-ctor , showRecord(num1,num2) , printRecord(num1,num2) 
Derived -- num3 , ctor , para-ctor , displayRecord(print num3)(call showRecord()) , printRecord(print num3)(call baseclass print) 


##demo02
Book -- title , price , pageCount , Book(paramterless ctor) , acceptRecord() , printRecord() 
Tape --  title , price , playTime , Tape(paramterless ctor) , acceptRecord() , printRecord() 

##demo03 (shadowing) 
Product -- title , price ,product(paramterless ctor) , acceptRecord() , printRecord() 
Book -- title , price , pageCount , Book(paramterless ctor) , acceptRecord() , printRecord() 
Tape --  title , price , playTime , Tape(paramterless ctor) , acceptRecord() , printRecord() 

##demo04(same as above (menu - driven--creating 2 Diff objects(static)) 
Product -- title , price ,product(paramterless ctor) , acceptRecord() , printRecord() 
Book -- title , price , pageCount , Book(paramterless ctor) , acceptRecord() , printRecord() 
Tape --  title , price , playTime , Tape(paramterless ctor) , acceptRecord() , printRecord() 

##demo05(same as above (menu - driven--creating 2 Diff objects(use 2 diff pointer)) 
Product -- title , price ,product(paramterless ctor) , acceptRecord() , printRecord() 
Book -- title , price , pageCount , Book(paramterless ctor) , acceptRecord() , printRecord() 
Tape --  title , price , playTime , Tape(paramterless ctor) , acceptRecord() , printRecord() 

##demo06(same as above (menu - driven--creating 2 Diff objects(use one pointer ( virtual) )) 
Product -- title , price ,product(paramterless ctor) , acceptRecord() , printRecord() 
Book -- title , price , pageCount , Book(paramterless ctor) , acceptRecord() , printRecord() 
Tape --  title , price , playTime , Tape(paramterless ctor) , acceptRecord() , printRecord() 

##demo07
Rectangle-- area, length,breadth (float) , acceptRecord() , calculateArea() , printRecord() 
Circle -- area, radius(float) , acceptRecord() , calculateArea() , printRecord() 
Math --  static const float PI , pow(base,index)

##demo08 (no menudriven)
Shape -- area , acceptRecord() , calculateArea() , printRecord()  ( empty methods) -- 
Rectangle-- length,breadth (float) , acceptRecord() , calculateArea() , printRecord() 
Circle -- radius(float) , acceptRecord() , calculateArea() , printRecord() 
Math --  static const float PI , static pow(base,index) ( all float)  

##demo09 ( pure virtual Function) (menuDriven) ( area -- protected) 
Shape -- area , paraless ctor,  acceptRecord() , calculateArea() , printRecord()  ( empty) 
Rectangle-- length,breadth (float) , acceptRecord() , calculateArea() , printRecord() 
Circle -- radius(float) , acceptRecord() , calculateArea() , printRecord() 
Math --  static const float PI , pow(base,index)


##demo09 ( pure virtual Function) 
Shape -- area , paraless ctor,  acceptRecord() , calculateArea() , printRecord()  ( empty) 
Rectangle-- length,breadth (float) , acceptRecord() , calculateArea() , printRecord() 
Circle -- radius(float) , acceptRecord() , calculateArea() , printRecord() 
Math --  static const float PI , pow(base,index)
ShapeFactory -- static Shape* getInstance(choice) , static int menu_list() --Factory Method Pattern (simple form).

#demo10 
typeid operator --- (const typeinfo &type) 

#demo11 -- using class Base and derived 
