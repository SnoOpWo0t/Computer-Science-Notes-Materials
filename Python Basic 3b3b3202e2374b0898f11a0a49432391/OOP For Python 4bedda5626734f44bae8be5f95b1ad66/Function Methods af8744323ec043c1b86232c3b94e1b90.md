# Function / Methods

can also use global variable value as parameter without declaring it again

```python
**def funcName (parameter thakle ekhane hobe):**
   print("heel")
   a,b = 5,6
   sum = a+b
   print ("sum is ",sum)
    **#function call  
funcName()**
```

## **- Default Parameters and Local and Global variables**

- suppiled parameter value >> Default parameter value
- if we did’nt supply any parameter default parameter will execue

```python
def funcName (para1,**para2="default value"**):
  print(para1)
  print(para2)
    #function call  
funcName(10)
```