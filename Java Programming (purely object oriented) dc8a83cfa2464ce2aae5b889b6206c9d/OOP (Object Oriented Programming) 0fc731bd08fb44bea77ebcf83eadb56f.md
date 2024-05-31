# OOP (Object Oriented Programming)

---

 Structures use stack allocation; classes use heap allocation

**Struct classes are Java classes with public attributes and no modeled methods**

Java class and C++ structure share some similarities in their purpose and usage, they have distinct features and semantics that differentiate them.

in **C, structs are value types but in Java, classes are reference types**

The two constructs are identical in C++ except that in structs the default accessibility is public, whereas in classes the default is private.

---

1. ***C + OOP = C++***
    1. Object Oriented Programming has 6 properties :
        1. Abstraction
        2. class
        3. object
        4. inheritance
        5. encapsulation
        6. polymorphism
    
    ### class :
    
    2. **Class is a collection of Object.**
    
    A class is  a template from which individual object can be created
    
    ### Object :
    
    Any class type variable is called object
    

- **Constructor variable & Distructor variable :**
    
    [https://youtu.be/XwasGhRnie4](https://youtu.be/XwasGhRnie4)
    
- C**onstructor initializer:**
    
    [**Classes and Constructor in C++**](https://www.notion.so/Classes-and-Constructor-in-C-9c7d6bbf51954006ba89abd16bb2f227?pvs=21) 
    
    for initializing constant variable we need **Constructor Initializer,we dont need it for normal variable as we can initialize any time**
    
    [C++ Bangla Tutorials 76 : constructor initializer](https://youtu.be/IgyMLLl9YGQ)
    

### Function overriding

**function name and parameter has to be same . and their implementaion will be different**

[C++ Bangla Tutorials 84 : Function Overriding](https://youtu.be/fNKSMl-HT7g)

### Function Overloading and Overriding

1. in overload parameter list mustbe different
and overriding parameter must be same
2. in overloading happen in one class and in overriding super class and sub class has to be present there should be **inheritance**
3. in overload one function doesnot hide other one but in overriding it hides
4. 

[C++ Bangla Tutorials 85 : difference between function overloading and function overriding](https://youtu.be/3brqrZ5g2j4)

- **Constant Variable , Objects & Initializer**
    
    ### constant variable
    
    if we declare something with Constant Variable we cant change its value,& we have to initialize the value instant otherwise it’’l show error
    
    [C++ Bangla Tutorials 74 : constant variable](https://youtu.be/KtSZyaTnfUA)
    
     
    
    ### constant objects
    
    Constant object can only **call constant** **member ,**it cant call non constant function’
    
    [C++ Bangla Tutorials 75 : Constant Objects](https://youtu.be/xtOkow5ZtJo)
    
- H**ow to create and write into a file :**
    
    ```cpp
    #include<iostream>
    #include<string>
    #include<fstream>
    using namespace std ;
    int main ()
    {
         string name;
        int age ;
         ofstream file;
        file.open("student_details.txt",ios::out|ios::app);
       
       for(int i =1;i<=3;i++)
       {
    
         cout<<"Enter your name : "<<endl;
        getline(cin,name);
        file<<name<<endl;
        cout<<"Enter your age : "<<endl;
        cin>>age;
        file<<age<<endl;
        cin.ignore();
       }
    flie.close();
         return 0;
    }
    ```
    
    [C++ Bangla Tutorials 93 : how to create and write into a file](https://www.youtube.com/watch?v=ypFSfa3nobg&ab_channel=AnisulIslam)