# Python Basic

[OOP For Python](Python%20Basic%203b3b3202e2374b0898f11a0a49432391/OOP%20For%20Python%204bedda5626734f44bae8be5f95b1ad66.md)

<aside>
💡 **Spacing/indentation is very important in Python, indentation different hole oita oi specific task er baire bole count hobe**
to cancel indentation (**shift + tab**)

</aside>

[String](Python%20Basic%203b3b3202e2374b0898f11a0a49432391/String%20f69b4278b0054f0784f3d32ee54ae5ea.md)

[Array/Lists](Python%20Basic%203b3b3202e2374b0898f11a0a49432391/Array%20Lists%2099d9d3e1d18b4eca8c3a51e7aaeca351.md)

---

**Modules is python :   Built-in Module and User-defined Module**

***type conversion*** :  **dataType(variable)**

- kono songkhar seshe 0 mane sheita 10 er gunitok
- **Python is a case−sensitive programming language**
- No size limit for any return type
Immotable

**DeclaringMulti Variable :**
a,b,c = 5,10,15
a = 5
b = 10
c = 15

- Python doesn’t know how to convert a float into a string
- to write number we use nothing
    - to CommentOut any line inside ide we use #
    - to **CommentOut multiLine line** inside ide we use **‘’**’ **’’’’**
    
    ![code.png](Python%20Basic%203b3b3202e2374b0898f11a0a49432391/code.png)
    
- **for SquareRoot:**
import math
**math.sqrt(**value)
- **If-else** in Python
    
    Syntax :
    
    ```python
    **if(condition) :**
        task
    (else if)  e**if(condition) :** 
        task
    **else** **:**
      ( task)
    to cancel indentation (**shift + tab**)
    ```
    
    An `if`-ELSE statement consists of:
    
    - The `if` keyword,
    - Then comes a condition. A condition can evaluate to either True or False. Parentheses (`()`) surrounding the condition are optional,
    - A colon `:` that separates the condition from the executable statement that follows.
    - A new line.
    - A level of indentation of **4** spaces, which is a Python convention. The level of indentation is associated with the body of the statement that follows.
    - Lastly comes the body of the statement. This is the code that will run only if the statement evaluated to True. We can have **multiple lines in the body that can be executed, and in that case we need to be careful they all have the same level of indentation**
- **Loops  : Continue ,pass, break**
    
    
    - **ForLoop**
        
        
        ```python
        data  = [1,2,43,23,3]
        for x in data:
           print (x) # here data elements stored inside x
           #then print x
        ```
        
    
    ```python
    a = int(input("Enter a number: "))
    #a * i = a * 1
    for i in range (starting,ending,steps) :
        print(a,"*",i,"= ",a*i)
        i+=1
    #multiplication Table
    ```
    
    - **While Loop**
        
        ```python
        i = 1
        while i<=10 :
           print("while loop")
           i+=1
        ```
        
    
    - **DoWhileLoop**
- A**ssignment Arithmetic**
    
    
    a = a&b
    a& = b
    
    b = a&b
    b& =a
    
    ![Untitled](Python%20Basic%203b3b3202e2374b0898f11a0a49432391/Untitled.png)
    
- **Operators,Precedences,Comparison**
    - if we (10 **//** 3) = we”l get integer value
    if we (10 / 3) = we”l get float value
    if we (**10 ** 3)** = get  value of 1**0 to the power of 3**
    - **<>** boolean expression,if we print 10>3 well get **True**
    - **Logical Operator : and/ or/ not**
    
    ```
    price = 25
    print(price >10 **and** price < 30)
    #if price >10 and price < 30 ANSWER: True
    ```
    

## Map

1. a,b,c *=* **list(map(float,input().split(" ")))**
2. a,b,c *=* **list(map(int,input().split(" ")))**

- Basic Operation and syntax **Take input :**
    
    ## Take Input
    
    1. **variable = input(”text”)   # entered data will be stored in that variable // take as String**
    2. **variable = int( input(”text”)) #to take integer as a input**
    3. take input in **Binary form** = **int( input(”text”,2)**
    
    ```
    user_input = **input(**"Enter your input: "**)**
    print("You entered:", user_input)
    ```
    
    <aside>
    💡 we use **Input** for taking any value from **user it’ll covert it as String.**and if we try to do summation or arithmatical operation either it’ll concatinate or show error
    to **convert String to integer we use**
    **variable *=* int(v1)*+*int(v1)**
    
    </aside>
    
    **print(”hello ” + variable)**
    
    to take ineger input : **a *=* int(input())**
    
    - its not mandatory to define Variable type at first
    - doesn’t need semicolon after line
    
    ```python
    print('hello python')
    print(85)
    ver = 5
    print(ver)
    string ="string"
    print(string)
    ver2 = 6+4
    print(ver2)
    ```
    
    - Python doesn’t know how to convert a float into a string
    - 
    
    ```
    prod1 = **input().split(" ")[1:]**  #1,2.3,4
    # [**1:]** is a slice to remove the first element of the list
     **print(prod1[0]**) 
    # prints the first element of the list which is now
     the second element of the original list (w**ill show 2.3)**
    ```
    
- to remove last digit from number : **number // 10 (will show floor int)**
- to pprint only last digit of a number **num%10**
- **Random and Uniform**
    
    you can use the **`randint`** function from the **`random`** module to generate random integers, and you can use the **`uniform`** function to generate random floating-point numbers.
    
     **`randint(1, 10)`** will generate a random integer between 1 and 10 (inclusive), and **`uniform(1, 10)`** will generate a random floating-point number between 1 and 10.
    
    Remember to import the **`randint`** and **`uniform`** functions from the **`random`** module before using them.
    

### **number afters Decimal POint**

1. print("**A=%.4f"** ***%***area)
2. print**(f'A={area : .4f}')**
3. 

---

### Type Conversion

1. Complex Number can’t be converted as Integer
2. float can be converted into complex 
x = complex(float val)
- **turn any datatype variable into String** : 
variable_store *=* **str(**datatypeWant_toConvert)
1. **Integer to String :**
num_int = 42
**num = str(num_int)**
2. **Float to String :**
num_float = 3.14
num = **str(num_float)**
3. **String to Integer :**
str_num = "42"
**num_int = int(str_num)**
4. **String to Float :**
str_num = "3.14"
num_float **= float(str_num)**
5. **Integer to Float :**
num_int = 42
**num_float = float(num_int)**
6. **Float to Integer :**
num_float = 3.14
num_int **= int(num_float)**

### Handling conversion with error checking

![Untitled](Python%20Basic%203b3b3202e2374b0898f11a0a49432391/String%20f69b4278b0054f0784f3d32ee54ae5ea/Untitled.png)

- BAse Convertion
    1. variable = **oct(a)** → output will store as String
    2. variable = hex(a)