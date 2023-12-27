# Java Programming (purely object oriented)

[OOP (Object Oriented Programming)](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/OOP%20(Object%20Oriented%20Programming)%200fc731bd08fb44bea77ebcf83eadb56f.md)

[Method / Constructor/Function](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Method%20Constructor%20Function%209a63d1374a314dbaa7df527182786e66.md)

[Inheritance](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Inheritance%20fadce850057e4b5bb452b21d9baa9c36.md)

[Polymorphism](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Polymorphism%20c6aaf8544b5c435daca05cde6cd3c018.md)

[Encapsulation](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Encapsulation%20799acd20d7454154ae9b78f5151da52e.md)

[Array java](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Array%20java%207dac340d648a41b4b0d75a7db0ca2a15.md)

[String JAVA](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/String%20JAVA%204cf63917573948ee95e9677c135b196b.md)

[Thread](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Thread%2079e3fc32e54a42a69cae9b4c7e6cfae4.md)

[Input Output Stream](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Input%20Output%20Stream%204159a3b41802422abbcd7c889b15e20f.md)

[Serialization](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Serialization%204741999936eb455091d279e8c8fe79fe.md)

[Abstraction](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Abstraction%208bc99a35e62c4b12af4e07b1f1ba7463.md)

[Interface](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Interface%201d4615816e6843a38e236bf68e1d2c77.md)

[Exception Handeling in Java](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Exception%20Handeling%20in%20Java%204f5ecc0b17524b9ba04859b08125c3d3.md)

[File handling in Java](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/File%20handling%20in%20Java%205ec15852df9043edbd5991cb670f3818.md)

[Collections](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Collections%20d12764b00e02448badd77cb1e35151b7.md)

- **local, class, instance variable**
    1. l**ocal variables** are declared inside method
    2. **instance variables** are declared inside class but outside method & nor declared as static

### ****To print any variable value** with text : **syso(** **“text”,+** variable);

print ***more than one variable value*** : System.out.**println(h + " " + p);**

- **Java Object Type-Casting**
    1. **Upcastin**g  -  Super classs er object variable er moddhe sub class er object rakha
    2.  **Downcasting -**  sub class er object er moddhe super class rakha
    
    ![Untitled](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Untitled.png)
    
- **Lambda Expression**
    
    
- **Static class and** variable
    - **Static Variable** is not related to object its re**lated to class**
    - to access static variable/method we **don’t need to create an object of that class.** we can use it directly with class name  .
    **ClassName.StaticMember**
    - **Non static variable / non static member** gula memory te alada alada jaiga nei
    - the `main` method is a static method, and it cannot access instance variables without an instance of the class.
    
    Wrong
    
    ![Untitled](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Untitled%201.png)
    
    Right
    
    ![Untitled](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Untitled%202.png)
    

### t**oString () method**

*`@Override public* **String toString()** 
{    *return **"**data**"***; 
}`

*`public* toString(){    *return* ""}`

if i print directly the class object name i’ll automatically show what was written in toString method .

![Untitled](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Untitled%203.png)

## Inner Class

[#62 Inner Class in Java](https://www.youtube.com/watch?v=UVOztdkD7WE)

A.B = B belongs to A

```cpp
**A.B** object_name = Object_Of_A **.B();**
    object_name**.**inside_B_method();
```

Static can be only use in Inner class.

for Static :

```cpp
A.B object_name = **A.B();**
    object_name.inside_B_method();
```

![Untitled](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Untitled%204.png)

## Annonymous class

- an annonymous class **must implement all t**he abstract methods in super class or the interface
- always uses the constructor from the super class to create an instance
- interface er object create kora jaina kintu annonymous class diye kora jai but one time use ,2nd bar use kora jaina

In Java, an anonymous class is a class that is defined on the fly without giving it a formal name. It is often used when you need to create a class that implements an interface or extends a class, but you don't want to create a separate named class for it. Anonymous classes are defined and instantiated in a single expression.

**ts a one time use class**

```
**Class_NAme objectname = new constructor() {**
    @Override
    public void myMethod() {
        System.out.println("This is a method in the anonymous class.");
    } **};**
```

![Untitled](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Untitled%205.png)

![Untitled](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Untitled%206.png)

---

- **Definition**
    
    **What is java?**
    
    Java is a popular programming language, created in 1995. It is owned by Oracle
    
    - **java = purely object oriented**
    
    **Why Use Java?**
    
    1. Platform independent (Wora)
    2. Object oriented
    3. Support web base applications
    4. robust
    5. secure
    6. Multi-threaded
    
    **Why Java Platform independent?**
    
    Java is called Platform Independent because **programs written in Java can be run on multiple platforms without re-writing them individually for a particular platform Because of JVM**, i.e., Write Once Run Anywhere (WORA).
    
    **What is JDK?**
    
    The Java Development Kit (**JDK)** is a software development kit used for creating Java applications. It offers a range of tools, libraries, and frameworks that assist developers in building, testing, and deploying Java applications efficiently. **The JDK includes a compiler to convert Java source code into bytecode,** which can b**e executed on any system with a Java Virtual Machine (JVM)**. It consists of components like the Java Runtime Environment (JRE), necessary for running Java applications, and the Java Development Tools (JDT) which encompass tools such as the Java Compiler, Java Debugger, and Java Doc. In summary, the JDK is a crucial resource for Java developers, providing the essential means to develop, test, and deploy Java applications.
    

<aside>
💡 1. member of function = methods

</aside>

1. **Any class type variable is object**
2. Assignment in java is **right to left**

- ****You cant** declare **variable inside LOOP****
- static variable object independent na
- Parameters are local variable
- **String to int conve**rt **parseInt(varible)**

### to show Decimal point in java

1. **syso(” %.2f”,variable)
System.out.printf("A=%.4f\n",A);**

decimal format class **: usasge string pattern**

```
**import java.text.DecimalFormat;**
public class Main {
    public static void main(String[] args) throws IOException {
**DecimalFormat object_name(DECIMALPOINT) = new DecimalFormat(".00")**
//DecimalFormat object_name = new DecimalFormat(**".##"**) here if **no  number after decimal it wont print any thing
Syso("text " +ob_name(for_decimalpoint) .format(  VAriable ) );**
```

- **Final Keyword**
    1. final method cant be override
    2. final class can’t be extend/ inherited
    3. jei final variable sathe sathe initialize korbo na sheita blank final variable
    4. blank final variable er age static use korle static blank final variable
- Fibonacci Series
    
    
- **Recursion vs Iteration**
    1. Iteration is done by Loop
    2. Recursion is Done By If-Else/switch / factorial structure
- **to create objects and classes in Java**
    
    Declare a Class: Classes in Java serve as blueprints for objects. They define the properties and behaviors that objects of that class will possess. Here's an example of a simple class called "Car”
    
    ```
    public class Car {
    // Class variables (also known as fields)
    String color;
    String brand;
    int year;
    // Class method (also known as a member function)
    public void startEngine() {
        System.out.println("Engine started!");
    }
    ```
    
    Create Objects: Once you have a class defined, you can create objects (also called instances) of that class. Here's an example of creating objects of the "Car" class and accessing their properties and methods:
    
    ```
        public class Main {
    public static void main(String[] args) {
    // Create objects of the Car class
    Car car1 = new Car();       Car car2 = new Car();
    // Set properties of the objects
        car1.color = "Red";
        car1.brand = "Toyota";
        car1.year = 2020;
    
        car2.color = "Blue";
        car2.brand = "Honda";
        car2.year = 2018;
    
        // Access object properties
        System.out.println("Car 1 - Color: " + car1.color + ", Brand: " + car1.brand + ", Year: " + car1.year);
        System.out.println("Car 2 - Color: " + car2.color + ", Brand: " + car2.brand + ", Year: " + car2.year);
        // Call object methods
        car1.startEngine(); // Output: Engine started!
        car2.startEngine(); // Output: Engine started!
    }
    ```
    
    In the example above, the **`Car`** class defines three variables (**`color`**, **`brand`**, and **`year`**) and one method (**`startEngine()`**) that can be used by objects of that class. The **`main()`** method in the **`Main`** class creates two **`Car`** objects, sets their properties, and calls their methods.
    
    By following these steps, you can create objects and classes in Java and define their properties and behaviors according to your requirements.
    
    ![Create object and class.png](Java%20Programming%20(purely%20object%20oriented)%20dc8a83cfa2464ce2aae5b889b6206c9d/Create_object_and_class.png)
    

---

***Java = junction +classes ||  Package = FOLDER & there’ll be a class inside folder ||***  

if the value is in larger number java by default couldn’t recognize the value data type so we need to use Suffix  variable = 843673**f**, 27846**L**

- **project ->package → 1 or more class/java program**
- at least one main method in any of classes
- if we print something with **println it’ll print the text with new line.**
- **\t**  = tab/4 or 8 space.  **\n** = newline **\\s** = space
- if we use **final** before datatype of a variable the value of that variable will consider as ***constant*** .
- we use Dot operator to use CLASS members(methods)

- **to Qube any number = Math.pow(Variable, 3);**
- **to SquareRoot /root : double** k **= Math.sqrt(variable);**

**Type Casting : variable = (desired DATATYPE)(equation)**

1. **more than one space** count as one = **\\s+**

---

### Classroom Slide contents :

### SIMILAR TO C & C++

---

- **C /C++Operators**
    - **Arithmetic :**  +, -, *, /, %
    - **Relational :**
    ==, !=, <, <=, >, >=
        
        Relational operators are operators used in programming to compare two values or expressions and determine the relationship between them. These operators evaluate to a Boolean value, which is either true or false, depending on whether the relationship between the two values is true or false.
        
        The most common relational operators are:
        
        - Equal to (==): This operator compares two values to see if they are equal.
        - Not equal to (!=): This operator compares two values to see if they are not equal.
        - Greater than (>):  compares two values to see if the left-hand value is greater than the right-hand value.
        - Less than (<):  compares two values to see if the left-hand value is less than the right-hand value.
        - Greater than or equal to (>=): compares two values to see if the left-hand value is greater than or equal to the right-hand value.
        - Less than or equal to (<=): compares two values to see if the left-hand value is less than or equal to the right-hand value.
        
        Relational operators are commonly used in decision-making statements, such as if statements, where the condition that is being evaluated determines the flow of the program.
        
    - **Logical :**    !, &&, ||
        
         used in programming to combine or manipulate Boolean values. These operators evaluate to a Boolean value, which is either true or false, depending on the values being compared and the operator being used.
        
        The most common logical operators are:
        
        - AND (&&): This operator returns true if both of the operands are true, and false otherwise.
        - OR (||): This operator returns true if either one of the operands is true, and false if both are false.
        - NOT (!): This operator negates the value of the operand, so if the operand is true, the NOT operator returns false, and if the operand is false, the NOT operator returns true.
        
        Logical operators are used in decision-making statements to combine conditions and determine the flow of the program. They are also used to perform complex logical operations, such as testing multiple conditions simultaneously.
        
    - **Bitwise :**
    &, |, ~, ^, <<, >>
        1. Bitwise Operator can **only work with binary digit,** and **a & b** means product of the binary digits of these two variables value
        2. BitWise | (or) means the binary sum of two variables value **a | b**
        3. 
        
        [Java Bangla Tutorials 35 : Bitwise operator](https://youtu.be/TllHVJGEY5A)
        
    
    **Assignments :**
    =, +=, -=, *=, /=
    **Special :**
    ++, --, ?, &, *, [], ., ->
    
    - **Unary Operator**
        
        [https://youtu.be/0QACr5AkCBU](https://youtu.be/0QACr5AkCBU)
        
- **Arithmatic operators :** you can't deliver reminder in float data type (a%2 =0) it’ll show error
**Modulus of minus number :** (-n% m = (n % m +m)%m)
    
    
    ***Increment and decrement operator :***
    
    x++ 
    
    Uses current value of variable, then increments i
    ++x
    Increments variable first, then uses new value
    x--
    Uses current value of variable, then decrements it
    --x
    Decrements variable first, then uses new value
    
    Calculations are done “one-by-one” using
    precedence, left to right within same
    precedence.
    
    P**recedence of operator :**
    
    Accoding to rule of precedence if there are several arithmatic operator math will start from left to right
    
    ***BODMAS**:* 
    
    B – Brackets, O – Order of powers or roots,
    D – Division, M – Multiplication A – Addition, and S –
    Subtraction.
    Example: Find the average of three variables a, b and c
    Do not use: a + b + c / 3
    Use: (a + b + c ) / 3
    

- **SWITCH Case**
    1. A great replacement of long If-Else construct
    2. Switch case only works with **Absolute value || No floating point.**
    3. Case_Label Has to be in constant/inteager value
    4. variable expression are not allowed as Case_Label however Marcros are allowed
    5. break
    
    Structure :
    switch(variable) 
    { 
    
    **case (number ) :**
    
    } 
    
    If the first  condition is true itll print all the cases even if they arent desired so to stop this incidient we use break
    
    and if none of the condition is matched  then **default :** will execute
    **problem 1 :**
    scanf("%d" , &a);
    
    1. The scanf statement has an extra space after **`%d`**, which will cause the program to wait for additional input. Removing the space will fix the issue.
    
    [https://www.youtube.com/watch?v=Uh8m8tcMe0s&ab_channel=AnisulIslam](https://www.youtube.com/watch?v=Uh8m8tcMe0s&ab_channel=AnisulIslam)
    
    ```
    
     char a ;
        cout<<"Enter the alphabet : ";
        cin>>a ;
        switch (a)
        {
        case 'a':
            cout<< "vowel";
            break ;
        case 'e':
            cout<<"vowel";
            break ;
             case 'i':
            cout<< "vowel";
            break ;
        case 'o':
            cout<<"vowel";
            break ;
             case 'u':
            cout<< "vowel";
            break ;
        case 'A':
            cout<<"vowel";
            break;
             case 'E':
            cout<< "vowel";
            break ;
        case 'I':
            cout<<"vowel";
            break ;
             case 'O':
            cout<< "vowel";
            break ;
        case 'U':
            cout<<"vowel";
            break ;
        default:
            cout<<"consonant";
        }
        return 0 ;
    }
    ANOTHER VERSION ==
    ```
    
    ```
    
    #include<iostream>
    using namespace std ;
    int main ()
    {char ch ;
    cin>>ch;
    ch = tolower(ch);
    switch (ch)
    {
        case ('a'):
        case ('e'):
        case ('i'):
        case ('o'):
        case('u'):
            cout<<"vowel";
            break;
        default :
      {
        cout<<"consonant"<<endl;   }
    }
    return 0;
    ```
    
    1. ****: break and continue keyword****
    
    [https://youtu.be/7qcuZAvtt0k](https://youtu.be/7qcuZAvtt0k)
    

- [C ,C++LOOPS](https://www.notion.so/C-C-LOOPS-a43a81a9f00a47d094b0e3fbc81920ff?pvs=21)
- 

- 

- 

---

---

| byte | 1 byte | Stores whole numbers from -128 to 127 |
| --- | --- | --- |
| short | 2 bytes | Stores whole numbers from -32,768 to 32,767 |
| int | 4 bytes | Stores whole numbers from -2,147,483,648 to 2,147,483,647 |
| long | 8 bytes | Stores whole numbers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| float | 4 bytes | Stores fractional numbers. Sufficient for storing 6 to 7 decimal digits |
| double | 8 bytes | Stores fractional numbers. Sufficient for storing 15 decimal digits |
| boolean | 1 bit | Stores true or false values |
| char | 2 bytes | Stores a single character/letter or ASCII values |

[https://docs.oracle.com/javase/8/docs/api/java/lang/Math.html](https://docs.oracle.com/javase/8/docs/api/java/lang/Math.html)

1.