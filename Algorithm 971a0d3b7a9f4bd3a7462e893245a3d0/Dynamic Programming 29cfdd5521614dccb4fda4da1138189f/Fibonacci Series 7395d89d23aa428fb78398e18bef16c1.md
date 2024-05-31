# Fibonacci Series

**Introduction**

- **Fibonacci Series** is a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1.
- The sequence of numbers is:
    - 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
- The sequence is named after **Leonardo of Pisa**, who was known as **Fibonacci**.
- The sequence is also known as the **Golden Ratio** and **Golden Spiral**.
- Fibonacci Series recurrence relation is given by:
    - `F(n) = F(n-1) + F(n-2)` for `n > 1`
    - `F(0) = 0`
    - `F(1) = 1`

---

### **Fibonacci Series - Naive Approach**

- The **Naive Approach** to solve the **Fibonacci Series** is to use **Recursion**.
- The **Naive Approach** has an **exponential time complexity**.
- The **Naive Approach** has a **time complexity** of `O(2^n)`.
- The **Naive Approach** has a **space complexity** of `O(n)`.
- The **Naive Approach** has a **recurrence relation** of `T(n) = T(n-1) + T(n-2) + 1`.
- The **Naive Approach** has a **recurrence tree** that grows exponentially.
- The **Naive Approach** has a **recurrence tree** that has overlapping subproblems

![Untitled](Fibonacci%20Series%207395d89d23aa428fb78398e18bef16c1/Untitled.png)

---

```
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
```

- For each call to `fibonacci(n)`, there are two recursive calls to `fibonacci(n-1)` and `fibonacci(n-2)`.
- Each recursive call has two more recursive calls, and so on.
- As a result, the number of recursive calls grows exponentially.
- The **Naive Approach** has a **time complexity** of `O(2^n)`.

---

**Complexity Analysis**

- **Time Complexity**:
    - Best Case: `O(1)`
    - Average Case: `O(n)`
    - Worst Case: `O(n)`
- **Space Complexity**: `O(n)`

### Simulation

![Untitled](Fibonacci%20Series%207395d89d23aa428fb78398e18bef16c1/Untitled%201.png)