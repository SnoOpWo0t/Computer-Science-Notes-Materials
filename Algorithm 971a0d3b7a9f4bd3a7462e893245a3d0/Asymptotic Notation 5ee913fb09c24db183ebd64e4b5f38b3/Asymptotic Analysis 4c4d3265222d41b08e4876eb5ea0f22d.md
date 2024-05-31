# Asymptotic Analysis

**Asymptotic Analysis**

- **f(n)** represents  the **number of instruction’s executed f**or the input value **n**
- ***Big 0 ensures it wont suddenly behaves exponential and it’ll always behaves linearly(Worst case is linear) best case a linear line er niche thakbe***

- we are not interest in exact time
- **for if-else statement: :** 
**worst case running** = **condition test** + **if or else par**t(*whichever is large*r)

- **if any function has SQUARE term we can eleminate liner and constant and can only work with Square**

- **f(n**) doesn’t grow faster than **g(n)
least upper bound = g(n)  → big O**
    - **f(n) ≤ c. g(n)**
    
    ***examp :***
    **4n +3 ≤ c . n**
    here we need to take a value of C which is greater than 4n otherwise can’t prove the equation
    - jeitar n to the power er man joto beshi oita f(n to the power) ***. example : 4n^3 then f(n^3)***
    - **f(n) = O(g(n))**
    1. **f(n) ≤ c. g(n)**
    
    1. **2 ta loop in a nested way thakle time complexity → O(n2)**
    

- **f(n2)** = squared
**f(n)** = linear
**f(constant value) =** constant growth
- **f any function has SQUARE term we can eleminate liner and constant and can only work with Square**

- ***g(n) = n***
- **f(n) = O(g(n))**
- **f(n) = O(n)**
- **f(n) ≤ c. g(n)**

[Basics of Asymptotic Analysis (Part 4)](https://www.youtube.com/watch?v=_lO-qsfk_0Q&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=8)

### **Asymptotic Analysis**

- Focused on Time Complexity || Asymptotic analysis refers to **computing the running time of any operation in mathematical units of computation**.

A mathematical notation used to describe the time complexity or space complexity of algorithms.

Asymptotic notation gives us a method for classifying functions according to their rate of growth. The growth of a function refers to how fast the function's output value increases as its input value increases.

The three most commonly used notations are:

1. **Big O notation** (O): represents the upper bound or worst-case scenario
2. **Omega notation (Ω)**: represents the lower bound or best-case scenario
3. ***Theta notation (Θ):*** represents both the upper and lower bounds

### Big O

![Untitled](Asymptotic%20Analysis%204c4d3265222d41b08e4876eb5ea0f22d/Untitled.png)

![Untitled](Asymptotic%20Analysis%204c4d3265222d41b08e4876eb5ea0f22d/Untitled%201.png)

- it used to measure the performance of any algo by providing the order of growth, it gives a upper bound on a func by which we can make sure that the function will never grow faster than this upper bound
it gives the approximate runtime
we are not inetrest in exact rtime

## Omega

![Untitled](Asymptotic%20Analysis%204c4d3265222d41b08e4876eb5ea0f22d/Untitled%202.png)

## Theta

![Untitled](Asymptotic%20Analysis%204c4d3265222d41b08e4876eb5ea0f22d/Untitled%203.png)

## Complexity Analysis

Based on the above three notations of Time Complexity there are three cases to analyze an algorithm:

1. **Worst Case Analysis:**

calculate the upper bound of the running time must know the case that causes a maximum number of operations to be executed

1. **Best Case Analysis**

calculate the lower bound of the running time must know the case that causes a minimum number of operations to be executed

1. **Average Case Analysis**

calculate the average running time must know the distribution of cases

![Untitled](Asymptotic%20Analysis%204c4d3265222d41b08e4876eb5ea0f22d/Untitled%204.png)

![Untitled](Asymptotic%20Analysis%204c4d3265222d41b08e4876eb5ea0f22d/Untitled%205.png)

/