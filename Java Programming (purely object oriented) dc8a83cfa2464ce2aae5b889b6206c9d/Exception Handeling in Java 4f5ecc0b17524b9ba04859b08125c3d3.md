# Exception Handeling in Java

## Exception only happens in run time

1. checked exception
    1. unchecked exception

exception create er time kono logic thakbe na sudhu constructor thakbe,
r super er age kono kichu lekha thakbe na thakle or porer line a

- Java provides some mechanism to work with exception
    1. try 
    2. catch
    3. throw
    4. throws
    5. finally — 100% executed
- You can’t **Throws override method , use Try abd catch**

## Checked Exception and Unchecked Exception

### Checked

1. checked by compiler for smooth execution for program ruintime
2. commonly occured 

### Unchecked

1. checked by compiler and taken care by jvm
2. rarely occured exception

## Throws and Throw

**Throw :**  keyword is **used to throw the user defined exception** to the jvm Explicitly

Throws : when we don’t want to handle the exception and try to send the exception to the jvm or ther methpd(t**heres’s no sureity of normal termination). Method er heading er sathe Throws keyword likhte hoi**

- try and catch confirm normal termination

![Untitled](Exception%20Handeling%20in%20Java%204f5ecc0b17524b9ba04859b08125c3d3/Untitled.png)

![Untitled](Exception%20Handeling%20in%20Java%204f5ecc0b17524b9ba04859b08125c3d3/Untitled%201.png)

![Untitled](Exception%20Handeling%20in%20Java%204f5ecc0b17524b9ba04859b08125c3d3/Untitled%202.png)

[try-catch Vs throws in java | Learn Coding](https://www.youtube.com/watch?v=fdQ0TtUbR5E)

[Difference between throw and throws in Java | Throw Keyword vs Throws Keyword](https://www.youtube.com/watch?v=9KwbXWQQfiE)

## Exception Hierarchy

t**hrowable class is the super class or root class of java exception hierarchy** which contains  two sub classes that is  1. **Exception**  2.  E**rror parent is throwable**

## Exception

- RuntimeException
- CompileTime Exception
- IOException —> **checked**
- SQLEXception —→**checked**
- InterruptedException —→ **checked**
- ClassNotFoundExcepton

### RutntimeException (Unchecked Exception)

- ArithematicException
- NullPointerException
- NumberFormatException
- IndexOutOfBoundException
1. ArrayIndexOutofBoundsException
2. StringIndexOutofBoundsException

## Error (Unchecked Exception)

- StackOverFlowError
- OutofMemoryError
- IOError
- LinkageError

### IOException (Unchecked Exception)

- IOException
- FileNotFoundExceptions

## User defined exception

- main method a **e.getmessage()** dile user defined a jei msg likhsi oita ashbe ar sudhu **sout(e)** dile just exception er nam show korbe
- mai

This is a way to set the error message of your custom exception class.

Here's an example to illustrate why you might want to use **`super(message)`** in a user-defined exception class:

```java
class CustomException extends Exception {
    public CustomException(String message) {
     super(message); // Call the constructor of the superclass (Exception) with the provided message
    }
}
```

In this example, the **`CustomException`** class extends the **`Exception`** class. By utilizing **`super(message)`** in the constructor, you set a custom error message for the exception. This practice ensures that when users create an instance of **`CustomException`** and pass a **`String`** message, they receive meaningful information about the exception. This detailed description proves valuable for debugging and comprehending the exception's cause when caught and handled in their code. Thus, employing **`super(message)`** in a user-defined exception constructor enhances the clarity and utility of custom exceptions in Java programs.

- **Try** **Catch** and  **Finally**  with Exception  &  exception Catch
    
    <aside>
    💡 While working with multiple catch, the super class **Exception**  catch blockk must be at the last catch block ,
    2. we can also use try catch methid inside catch method(nested)
    
    </aside>
    
    **whenever we write a statement and if the ststement is error suspecting statement or risky code then put that code inside try block if it shows an exception i’ll go inside catch block.**
    
    - **Exception are Run Time error**
    
    1. **[try](https://www.geeksforgeeks.org/flow-control-in-try-catch-finally-in-java/)**: The try block contains a set of statements where an exception can occur.
    
    ```
    $try
    {
        // statement(s) that might cause exception
    }$
    ```
    
    2. **catch**: The  try block is always followed by a catch block, which handles the exception that occurs in the associated try block.
    
    ```
    **catch(Exception e)**
    {// statement(s) that handle an exception
       // examples, closing a connection, closing
       // file, exiting the process after writing
       // details to a log file.}
    ```
    
    **3. Finally :** Finally block is a realtime block and the main purpose of finally  block to handle the resources
    
    ![Untitled](Exception%20Handeling%20in%20Java%204f5ecc0b17524b9ba04859b08125c3d3/Untitled%203.png)
    

## Final, FInally, Finallize

- final class cant have sub class
- final value can’t be change
- its a applicable variable,method and classes

- finnally is a block
- always get executed

- finnalize is a method
- used to dealocating the resources which is allocated by unused obj

n Java, methods that throw exceptions are not required to be static. Both static and instance (non-static) methods can throw exceptions. Whether a method is static or not depends on the context and the design of your program.

Here's an example of a non-static method that throws an exception:

```java
javaCopy code
public class Example {
    public void doSomething() throws Exception {
        // code that may throw an exception
    }
}

```

And an example of a static method that throws an exception:

```java
javaCopy code
public class Example {
    public static void doSomethingStatic() throws Exception {
        // code that may throw an exception
    }
}

```

Whether a method is static or not depends on your use case. If the method needs to operate on instance-specific data or if it's related to an object's state, you might choose a non-static method. If the method is more of a utility function that doesn't depend on any specific instance's state, you might make it static.

In either case, throwing an exception is not tied to whether a method is static or non-static. The **`throws`** clause in the method signature is used to declare that the method can throw a checked exception, and it's not affected by the static keyword.