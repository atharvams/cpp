##demo1 -- vector class -- push_back() , size() , capacity() , pop_back() , iterator(begin() , end) 

##demo2 -- stack  -- string -- class ( push() , top() , size())
	   queue class ( size() , front() , push()

##demo03 -- map<int ,string> , m1.at() , --m1[101] = "Anil" , size() , iterator , firs() , second() 
//// duplicate keys are not allowed , iterator -- itr->first , itr-second 

##demo4 -- course(cid , name , fees) , paraless ctor(empty) , paraterized ctor , acceptCourse(), displayCourse() , getCid() 
	   student(roll , name , vector<Course*>course_taken ) ,  paraless ctor(empty) , paraterized ctor , acceptStudent(), displayStudent()
	   getRollNo() , void addCourse(Course* course) , vector<Course*> &getCourseTaken();



##addDummyCourses(course_list);
course_list.push_back(new Course(1, "C++", 5000));
course_list.push_back(new Course(2, "Java", 7000));
course_list.push_back(new Course(3, "Python", 7000));
course_list.push_back(new Course(4, "DSA", 6000));

##displayAllCourses(course_list); 

##addDummyStudents(student_list);
student_list.push_back(new Student(1, "Anil"));
student_list.push_back(new Student(2, "Mukesh"));
student_list.push_back(new Student(3, "Ramesh"));
student_list.push_back(new Student(4, "Suresh"));
student_list.push_back(new Student(5, "Ram"));
student_list.push_back(new Student(6, "Sham"));

##display student in main itself (no function) 

##purchaseCourse(course_list, student_list);

## displayAllStudentsAlongWithCourseTaken(student_list)

##courseTakenBySpecificStudent(student_list)

*************************************************************

#demo05 -- struct point (xPos , yPos) , aggregate type decln , add pt1 + pt2 --> not OK 

#demo06 -- overloading +operator for point as friend and as a non-member function  ( ctro with default argument ) , printRecord() 

#demo07 -- overloading -operator for point as friend and as a non-member function 

#demo -- overloading == operator as a member and non-member 

#demo -- overloading post-incr and pre-incr (++) , post-incr ( parameter value) 
	  as a member as well as non member  , post incr-- 


#demo - overloading c2 = c1 + 5 -- as a member and as non-member 

#dem08 -- overloading ostream<< as a friend -- Complex class ( real , imag) , para-less , parameterized , printRecord() 
//operator<<(cout , c1);
// ostream &out because if we create the copy copy ctor of ostream class is  called 
// but copy ctor of ostream class is protected so we need to pass it as a reference 
// we can use cout instead of out as well --- display state by calling parameterized ctor 

#demo09 -- same as above -- cout<<c1<<c2;
/operator<<(cout , c1) => returns cout object 
// but if object is returning by value copy ctor is getting called 
// copy ctor is protected of ostream class so error (inserting operator)
// so we need to use reference  


#demo10 -- overloading extraction operator ( both) , (use reference return as reference)(istream) 
cin>>c1;// operator>>(cin,c1); 
cout<<c1; // operator<<(cout,c1);  

#demo11 -- use return and return as reference 
cin>>c1>>c2; //operator>>(operator>>(cin,c1),c2); 
cout<<c1<<c2; 

#demo12 - overloading assignment operator(=) ,overload ostream as well 

#demo13 - overloading assignment operator(=) 
Copy ctor is called 2times to avoid use reference ( using  const in parameter) 

#demo14 - Same as above use reference to avoid copy ctor call 

#demo15 -- Overloading subscript operator  -- Array class -- param-less ctor ( hard code inside ) , operator[] function as member 
int element  = a1[0]; 

#demo16 -- same as above  (using returning  reference) 
a1[1] = 200; 

##demo creating simple Inner and outer class 
Inner class as public and creating the object 
Inner class as private and creating the object ( use of friend function) 

## Creating the inner and outer class , num1 in outer-class and num2 in inner class ( both ctor) 
   print method printing num1 and num2 without friend inaccessible 

## with friend 

##outer-class member are directly accessible 
  reverse not possible 





