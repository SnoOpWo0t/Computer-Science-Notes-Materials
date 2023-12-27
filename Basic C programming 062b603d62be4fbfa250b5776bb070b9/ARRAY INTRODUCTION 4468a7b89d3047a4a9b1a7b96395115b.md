# ARRAY INTRODUCTION

[**Vector || Dynamic Array || ArrayList  :**](ARRAY%20INTRODUCTION%204468a7b89d3047a4a9b1a7b96395115b/Vector%20Dynamic%20Array%20ArrayList%20d574b02b2e68447d9b4edd81e84a22aa.md)

To store end number of values or a definite number of values in a single Variable  we use Array

**We use array :** *1. Straight forward statement 2. conditional statement  3. grouping statement in a  Sub program ;*

### **It redeem problems like** :

    1. Too many Variables  2. 

- An Array is an ordered list of data values of similiar kinds.
- Array  index starts with **0.** A Array has a **Name Index Data** in index
- **structure of Array : Data Type Array_NAme [Array_size]**
- An array size N is indexed from zero - 1 .
- **Array is only a data structure that always pass by default PASS by Reference**
- **Getting input in 2D Array ++**
    
    [https://www.youtube.com/watch?v=U8GvEO3tl64&ab_channel=AnisulIslam](https://www.youtube.com/watch?v=U8GvEO3tl64&ab_channel=AnisulIslam)
    
    ```cpp
    
         int A[2][3];
         cout<<"enter the elements for matrix : "<<endl;
         for(int row =0;row<2;row++)
         {
              for(int col=0;col<3;col++)
              {    cout<<"A["<<row<<"]"<<"["<<col<<"] = ";
                   cin>>A[row] [col];
              }
    ```
    
- **Designated Initialization :** **int arr[N]*=* {[index]*=value*,[index]*=* value};**
    
    if there is a clash Designator will win. (DESIGNATOR > normal)
    
    To specify an **array index**, write **‘[index] =’ or ‘[index]’** before the element value. For example,
    
    ```
         int a[6] = **{[4] = 29, [2] = 15** }; or
         int a[6] = **{[4]29 , [2]15** };
    ```
    
    is equivalent to
    
    ```
         int a[6] = { 0, 0, 15, 0, 29, 0 };
    ```
    

Specifying the length of an array using **Macro** is considered best practice

```
**#define N 10** 
    int arr[N];
```

- **Types of Array**
    
    **1.one dimensional :**
    
          int a[10]
    
    1. **Multi dimensional :**
    (a)  2 dimensional
    int a[2][3];
    
    **(b)  3 dimensional :**
     int a[3][4][5];
- **Print the number of distinct elements in an array which is already sorted in ascending order**
- if the number of elements are lesser than the specified length the remaining locations will’be filled with ( **0** **)**
- **To get INPUT and  OUTPUT in Array We use Loop**
- int arr[10] = { 0 }  means all the value in array is filled with **0**
- ****Count Array Elements using sizeof() Operator**
    
    > Size of 1 array element ***** num of elements = size of whole arraay
    > 
    
    The problem with the code is that `sizeof(a)` returns the size of the array in bytes, not the number of elements in the array. To get the number of elements in the array, you need to use the 
    
    `sizeof(a) / sizeof(a[0])` expression.
    
    - Sizeof() operator gives **size in bytes**
    - ***sizeof*(name_of_arr)*/sizeof*(name_of_arr[0]);**

### **Assign Array** :

- It is possible to initialize an array when it is declared example  a[3] = {1,2,3}
- we can skip the size and leave it to the compiler
- **2nd step :** use assignment operator
- **3rd step :** take input with scanf/cin
- **If we cross Index**
    1. It’ll exchange its value with another variable
    2. either show garbage value or it’ll crash

Array index Could be constant integer variable or expressions that generate integer only double and float are allowed

- **Find the maximum in array :**
    1. take first element as max
    2. then compare it with 2nd one . if 2nd one is greater than first one then put it in that variable
    3. last condition will be max = a[n-1] (n-1 because loop started with 0 ,so it’ll be always 1 less than given number)
    
    If we give value in array we can use  only number to declare the array size .
    we can use variable or number  while taking the inputs
    [N] = 10 ×
    a [ ] = {10}✔️
    a[5] ={1,2,3,4}✔️
    

### matrix

for matrix multiplication number of **row** of an matrix is has to be **same** with number of **column** of another matrix.