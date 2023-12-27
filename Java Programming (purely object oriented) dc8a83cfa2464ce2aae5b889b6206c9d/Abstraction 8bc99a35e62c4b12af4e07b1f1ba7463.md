# Abstraction

- **Abstract class extend korle ar jodi abstract class a  constructor thake tahole child class ao constructor baniye super diye attribute call korte hpbe  b**
    
    ![Untitled](Abstraction%208bc99a35e62c4b12af4e07b1f1ba7463/Untitled.png)
    

- Abstract class can have both abstract and non abstract method.
    - **can’t create object(instantiate)** of Abstract Class, but can create reference variable
    - **abstract sob shomoi super class hobe**
    - **abstract  class  class_name {** inside class body **}**
    - ABSTRACT MEHTOD ONLY IN abstract class
    - abstract class k**a extend kor**le  you have to use all of it’s **abstract methods(override**) or you have to declare the class as Abstract itself otherwise it’ll show error.
- if want to skip all the abstract method and want to use some selected method that you need but its showing error if you skip some methods from super class then use **Concrete Class**

Abstraction can only possible by

[Interface](Interface%201d4615816e6843a38e236bf68e1d2c77.md)

1. Abstract class
    
    <aside>
    💡 Abstraction in Java simplifies complexity by **hiding implementation details,** promotes code reusability, and facilitates encapsulation. It makes systems more manageable, enhances maintainability, and enables polymorphism and modular development, benefiting code organization and team collaboration.
    
    </aside>
    

![Untitled](Abstraction%208bc99a35e62c4b12af4e07b1f1ba7463/Untitled%201.png)

- Abstract **Method**
    
     ***`public abstract void method_name*();`**
    
    - points to remember about abstract method
    - this method has no body.  **abstract  class void method_name ();**
    - must end with a semicolon
    - must be inside abstract class
    - cant be declare as final or static
    
    [Java Bangla Tutorials 130 : Abstraction (Practical)](https://www.youtube.com/watch?v=P_Yb5CQFh3Y)
    
- How to achieve Abstraction ?
    1. Abstract class (0 to 100%)
    2. Interface (Achieve 100% abstraction)
    
    [#61 Abstract Keyword in Java](https://www.youtube.com/watch?v=VJh2u7NLLDg)
    

## Concrete Class and Concrete Methods

an a**bstract class can have both abstract methods (methods without a body) and concrete methods (methods with a body).** Abstract methods in an abstract class define the interface for the subclasses that extend the abstract class. Concrete methods, on the other hand, provide default behavior that can be inherited by the subclasses.

```
abstract class AbstractClass {
// Abstract method (no implementation)
public abstract void abstractMethod();
// Concrete method with implementation
public void concreteMethod() {
    System.out.println("This is a concrete method in the abstract class.");
}

```

In this example, **`abstractMethod()`** is an abstract method that does not have an implementation in the abstract class, whereas **`concreteMethod()`** is a concrete method with a default implementation. Subclasses that extend **`AbstractClass`** can choose to override the abstract method and provide their own implementation, but they are not required to override the concrete method unless they want to change its behavior.

Remember that abstract methods must be implemented by the first concrete subclass that extends the abstract class. Concrete methods in an abstract class can be inherited and used directly by subclasses without overriding them.

- 
    1. first create a abstract class
    2. then create a abstract method (no body)
    3. override at other class
    4. create a refrence variable of that abstract class inside main method
    5. call that other class inside that reference variable

---