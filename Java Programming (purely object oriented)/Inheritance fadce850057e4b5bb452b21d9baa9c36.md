# Inheritance

- **Syntax :    (**c**hild class/sub class/derive class)**   **extend  (parent class/super class/base class)**
- **IS - A relationship**
- **Error :** the public type main must be defined in its own file
    
    this error cause  beacause of adding 2 public in one file. must remove one public class
    
- **Method Overloading vs Method Overriding**
    
    Declaring a method in subclass which is already present in super class is known as Method overriding
    
    1. in method over loading same name but parameter different
    2. but in **method overriding** n**ame & parameter both are same**
    3. inheritance is must for method Overriding
    4. run time polymorphism
    5. [https://youtu.be/9nR-XD8hFnU?si=26d0R_lGf2JelbGO](https://youtu.be/9nR-XD8hFnU?si=26d0R_lGf2JelbGO) 
    
    [Java Bangla Tutorials 132 : Method Overriding (part-1)](https://www.youtube.com/watch?v=CXZ1SgyLMxU)
    

### Why Multiple inheritance is not possible in Java? & Interface

1. Multiple inheritance is not allowed in Java to avoid the "diamond problem," which can lead to ambiguity in method resolution. In multiple inheritance, if a class inherits from two classes that have a common method name, it's unclear which method should be called when that method is invoked on the subclass. **Java uses single inheritance with interfaces to achieve a form of multiple inheritance while avoiding this issue.** Interfaces allow classes to implement multiple sets of methods without inheriting conflicting implementations. This design choice enhances code clarity and maintainability.

### Inheritance

There are **5 types of inheritance** in C++ & java 

1. single inheritance
2. Multilevel inheritance  -  it can have multiple super and sub class
3. Hierarchical inheritance - it has one super class and multiple sub class
4. multiple inheritance - a class can inherit more than one class (not in java)
5. Hybrid inheritance - mixture of 

**Single Inheritance :**

if a sub class inherit a sub class 

- **Why Need Inheritance**
    1. for code reusablity 
    2. for method overrriding
    3. to implement parent-child relationship

- **Inheriting Private member**
    
    ![Untitled](Inheritance%20fadce850057e4b5bb452b21d9baa9c36/Untitled.png)
    

<aside>
💡 for A and B class to **make a connection** between then we need a**nother class that has main** function, **both parent and sub class cant have a main function there should be another class that has a main function**

![Untitled](Inheritance%20fadce850057e4b5bb452b21d9baa9c36/Untitled%201.png)

</aside>