# Loops & IF-else

### **If-else** in Python

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

### **Loops  : Continue ,pass, break**

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