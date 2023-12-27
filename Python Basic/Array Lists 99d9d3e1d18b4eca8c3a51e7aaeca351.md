# Array/Lists

- Python is the only language that allows to add **-1 th index** which indicates the last element of List
    - **List is Mutable ,** i can store different data type in onelist

- **Syntax :**
**v = [1,2,3]
v = list( (1,2,3) )**

```python
names = ["akhi","pakhi","rakhi","sakhi","mukhi"]
print(names[**0:3**])#  here i'm printing 0 to 3 index value
```

- To concatinated LISt : 
**1.** list3 = List 1 + list 2
**2**. list1**.extend([**elements**])**

- What is r**ange** ? how to use in LISTS
    - **range (starting,ending,steps) // steps is not mandetory**
    
    n Python, the **`range`** function generates a sequence of numbers up to, but not including, the specified endpoint. Therefore, if you want the loop to iterate from 1 to 10 (inclusive), you should use **`range(1, 11)`**.
     The **`range`** function includes the start value and excludes the stop value.
    1. **`range(1, 11)`** generates the sequence: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10.
    
    1. If you used **`range(1, 10)`**, it would generate the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, but not 10

- **slice Operator:  i’ll generate a new list it won’t make any change to original LIST
a) v[ : ]**  → i’all show all the numbers
**b) v[3 : ]**  → i’ll start from idx 3 to end
**c) v[3 : 7]**  → i’ll start from idx 3 to 7 idx
**d) v[3 : 7 : 2]**  → i’ll start from idx 3 to 7 idx steps/ increment will be 2
**e) v[-1 : -7 : -1 ]**  → i’ll Reverse the LIST
**f) v[  :   : -1 ]**  → i’ll Reverse the LIST

- **Replace specific index of : ist  using slicing operator (i’ll modify the original list)**
    
    a) v[ 0 : 3] =[xx,yy,33]  → first 3 idx is chnaged to this elements
    
    b) v[ 0 : 3] =[xx,yy,]  → first 3 idx is chnaged to this elements, but as chnaging 3 elements but providing only 2, it’ll decrease a index from list
    
    ![Untitled](Array%20Lists%2099d9d3e1d18b4eca8c3a51e7aaeca351/Untitled.png)
    
    c) v[ 0 : 3] =[xx,yy,]  → first 3 idx is chnaged to this elements, but as chnaging 3 elements but providing only 2, it’ll decrease a index from list
    

---

### List Methods

1. **.append()** //adds exacly one element to list
2. **.extend([**elements**]) //**extend is for collection of elements
3. **.insert**(i**dx_numbe**r**,**element want to insert)
4. **.remove**(idx number)
5. .**clear() = empty list**
6. **in**   = returns  a boolean , checks if the number is present in array
7. **len(variable)** = checks the array length
8. v = L**.copy() // it’’ create a copy L and store inside v**
9. **variable  = range(starting_value, end_value, interval)**   **#this generates a sequence of number, 0 to upto the number given but need a loop**
10. **pop(idx num)** // idx value is optional, otherwise it’ll dele
11. **remove()**
12. **clear()**
13. **.index(**element_want_tosearch, start , end**)**
14. **.count**()
15. **v.reverse()**

<aside>
💡 In Python, the **`range`** function generates a sequence of numbers up to, but not including, the specified endpoint. Therefore, if you want the loop to iterate from 1 to 10 (inclusive), you should use **`range(1, 11)`**.
 The **`range`** function includes the start value and excludes the stop value.
1. **`range(1, 11)`** generates the sequence: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10.

1. If you used **`range(1, 10)`**, it would generate the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, but not 10.
</aside>

## Tuples

<aside>
💡 Tuples are like Lists but they are Inmutable, use paranthesis**()**

</aside>

- **variable = (elements )**

**Slicing :**
sequence[start:stop:step]
my_list = [0, 1, 2, 3, 4, 5]
Get elements from index 1 to 3 (exclusive)
result = my_list[1:3]  output: 1,2

# Output: [1, 2]

# Get every second element

result = my_list[::2]

# Output: [0, 2, 4]

---

**print('+'.join(map(str, a)))**
The code snippet **`'+'.join(map(str, a))`** can be succinctly explained as follows:

It converts each element of the list **`a`** to a string and then joins these strings using the **`+`** symbol as a separator. The result is a single string.