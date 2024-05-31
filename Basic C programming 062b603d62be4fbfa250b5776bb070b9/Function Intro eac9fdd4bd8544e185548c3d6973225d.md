# Function Intro

- ***FunctionStructure :***
    
    **ReturnType FunctionName (parameter List)
    {
    	//functionBody
    }
    And if there is no parameter and  return mention void** 
    
    ![Screenshot_2.png](Function%20Intro%20eac9fdd4bd8544e185548c3d6973225d/Screenshot_2.png)
    

****Arrays can only pass by Address****

- **Array is only a data structure that always pass by default PASS by Reference**

****You can’t use Printf and Scanf Function inside of Function  Only MAin function can have them****

- **Benifits of Function :**
    1. Reduce Complexity
    2. Modulizing a program
    3. Reusability

There are **three Types** of Functions :

1. no parameter(Void)
no return (Void)
2. Has parameter but no return 
3. Has parameter & Returns results

### **Pass by value & pass by reference /** P**assing Arguments :**

can pass value to function in 2 ways

1. pass by value
2. pass by reference

### pass by value :

Normal function is pass by value .in pass by value it only passes a value. **(normal functi**on) it won’t modify the actual value. to change the actual value we’ll have to use pointer. pass address in function prototype and put pointer in function parameter

### pass by reference :

and **pass by reference** will be when with function modified data will also modify the main functions data just put  **& infront of function parameter**

- **Returning a value from a function**
    1. mention return datatype infront of function
    2. use explicit return statement to return value
    3. store return value in a variable

### Function prototype

Functions have been written prior to the function but it cant be maintained always

**prototype** : Means a replica  of a real system

- Function prototype is  :  **ReturnType FunctionName (parameter List) ;**
- Library function prototype is by default given By **C** and its called header file and their extension is **.h**
- **Function in Memory : 1.**  Heap Section **2.** stack Section **3.** Code Section
    
    We can declare as many function as we want but Function Parameter or the Data Type has to be different from each other Otherwise the code wont run 
    
- ***Local variable and Global Variable || scope resolution operator***
    
    **Selfish principle :** Variables declared within a function can only be used by that function
    
    We can use global variable outside main function but not any statement
    
    in Function Local variable is more important than Global variable.
    
    1. scope resulation operator is   ** ::**
    2. global variable is  **::**

- **Malloc / Calloc/free/realloc**
    
    A malloc() in C++ is **a function that allocates memory at the runtime**, hence, malloc() is a dynamic memory allocation technique. It returns a null pointer if fails. Syntax: pointer_name = (cast-type*) malloc(size); Here, size is an unsigned integral value (cast to size_t) which represents the memory block in bytes.
    
    [Dynamic Memory Allocation in C using malloc(), calloc(), free() and realloc() - GeeksforGeeks](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
    

### ** **POINTER ****

**pointer it self doesn’t have any specific data type it on contain its variable data type**

**Scanf Stores the value at a variable so it needs the address of the variable**

Pointer is a type of variable that can store other variable Address and point a memory. (Int *A = integer pointer A.

*A= content of A)

Different type of data type has different type Pointer. We can declare Pointer

we use pointer to direct access in heap section as code section cant directly access heap
so pointer in code section will access stack section from there it’ll access heap

### to print address of a pointer we use  %p format specifier & address will show in hexadecimal or other

```c
 main () {
    int a, b;   // declaring variable
    int *p, *q; // declaring 2 pointers
    p = &a;     // assigning a value inside of p
    q = &b;     // assigning b value inside of q
    a = 5;    b = 6;
    printf("%d value a  \n", a);
    printf("%d value b \n", b);
    printf("%d adress a \n", p); // **as the address of a is already in p so printing p means printing the address of a**
    printf("%d adress b \n", q);
    printf("%d \n", *p); // **and printing *p means printing the value of that variable whose address is inside of p**
    printf("%d \n", *q);
```

### Pointers in Arrays

```cpp

**int* fmid(int ar[],int n)  // here int * means this funcction is returning a pointer
{**
    return &ar[n/2];}
int main ()
{   int a[] ={1,2,3,4,5,6,7,8,9,10};
  **int n = sizeof(a)/sizeof(a[0]); //finding size of / total elelment of that array
    int *mid = fmid(a,n);
    cout<<*mid;  }**
```

- here **int * means this function is returning a pointer or address**
- and **for receiving that pointer/address we must have a pointer container in main fu**nction

<aside>
💡 1. never try to return the address of **Automatic variable** / local variable

</aside>

- p diye pointer declare mane automatically P ekta integer jar moddhe address thakbe . alada vabe p declare kore or moddhe address na rakhleo cholbe
  int ***p = &i ;**     // i er value
   **p =&i ;               //i er address**
- performing arithmetic on pointers which are not pointing to a an array element  leads to undefined behavior .

---

  **Pointers in  2D Arrays    :**

for 1D array to get first element of array we can write a= 1000 || a* =first ele

for 2D array to get first element of array we can write a= 1000  || **a

- ***Advantages of Parameter***
    
    [https://www.youtube.com/watch?v=L3kBg7K-fIA&ab_channel=AnisulIslam](https://www.youtube.com/watch?v=L3kBg7K-fIA&ab_channel=AnisulIslam)
    
    ```cpp
    
    using namespace std ;
    void square (int n)
    {
         int result = n*n;
         cout<<"square of "<<n<<" = "<<result <<endl;
    }
    int main ()
    {  square(5);
         square(90);
         square(58);
         getch();
         return 0;
    }
    ```
    
- F**unction overloading :**
- **Multiple Function Declaring**
    
    [https://www.youtube.com/watch?v=sTqCPQmiHXA&ab_channel=AnisulIslam](https://www.youtube.com/watch?v=sTqCPQmiHXA&ab_channel=AnisulIslam)