# 0/1 Knapsack Problem

- Intro
    - **0/1 Knapsack Problem** is a problem in combinatorial optimization.
    - **0/1 Knapsack Problem** is a problem in which a set of items, each with a weight and a value, are to be placed in a knapsack of a fixed capacity to obtain the maximum total value in the knapsack.
    - In this problem, the items cannot be broken down into smaller pieces, and the thief cannot take a fraction of any item.
    - The problem is called **0/1 Knapsack Problem** because for each item, the thief must either take the whole item or leave it.
    - The problem is also known as the **Binary Knapsack Problem**.
- Algo
    
    

### **Brute Force Approach vs Dynamic Programming**

![Untitled](0%201%20Knapsack%20Problem%2040c13dab037e47b3a14a921278bf1938/Untitled.png)

- **0/1 Knapsack Problem - Dynamic Programming**
    - With **Dynamic Programming**, we can solve the **0/1 Knapsack Problem** in a more efficient way.
    - We can solve the **0/1 Knapsack Problem** using **Dynamic Programming** in two ways:
        - **Memoization**: A technique used to store the results of the subproblems so that they can be utilized later on.
        - **Tabulation**: A technique used to store the results of the subproblems in a table so that they can be utilized later on.
    - **Dynamic Programming** solves the **0/1 Knapsack Problem** in a more efficient way by solving each subproblem only once and saving its answer in a table, thereby avoiding the work of recomputing the answer every time the subproblem is encountered.

---

### **0/1 Knapsack Problem(can’t take fraction number) DP**

- Focused on specific task
- how to get that specific task in highest portion in limited space
- **to DRAW the table** : (here **row** is to show how many **items** and column shows its WEIGHTS)
- **1.** first we’ll take an item and will search for its matched profit if we found the matched profit then we’ll t**ake that profit** and do a s**um with previous row’s first element** and **continue adding the profit with previous rows eleme**nt until the row ended.   **(b**ut we need to compare with both current rows **SUMMEDvalu**e and previous rows value and write the GREAtest on**e)**
**if we dont found a matche :** write the previous rows element (but we need to compare with both current rows **SUMMEDvalu**e and previous rows value and write the GREAtest one)
- lastest element from the table is **MAXIMUM PROFIT**
- for seleting item :
1. we’ll start from last row
2. we’ll start checking from **end max valu**e to start if values are **same** then we **wont take that and move upwards,** if values are different we’ll take that value  (nicher ta nibo) and pointer change korbo
3. **pointer change** (then nicher oi selected valueprofit er sathe cell a **given value** minus korbo jei man pabo  oita  uporer cell a thakle  1st same value ta nibo)
- 
- for pointer change :
item that is selected row’s highest value(weight) **-** that selected items own weight

![eikhane 1 item er orginal weight selected 4 chilo](Untitled%201.png)

eikhane 1 item er orginal weight selected 4 chilo

- row → weight
colum → items
- **B[i,w]=max(B[i-1,w],B[i-1,w-w[i]]+v[i])**

[0/1 Knapsack Problem | Dynamic Programming | Data Structure & Algorithm | Bangla Tutorial](https://www.youtube.com/watch?v=9fMYQoS1h7o)

### Simulation & TabuLation

**Simulation :**

![68747470733a2f2f75706c6f61642e77696b696d656469612e6f72672f77696b6970656469612f636f6d6d6f6e732f642f64632f4b6e61707361636b5f70726f626c656d5f64796e616d69635f70726f6772616d6d696e672e676966.gif](0%201%20Knapsack%20Problem%2040c13dab037e47b3a14a921278bf1938/68747470733a2f2f75706c6f61642e77696b696d656469612e6f72672f77696b6970656469612f636f6d6d6f6e732f642f64632f4b6e61707361636b5f70726f626c656d5f64796e616d69635f70726f6772616d6d696e672e676966.gif)

**Tabulation**

- Suppose the weights of the items are `2`, `3`, `4`, and `5`.
- Suppose the values of the items are `3`, `4`, `5`, and `6`.
- Suppose the knapsack capacity is `5`.
- The table `dp[][]` is as follows:
    
    
    |  | 0 | 1 | 2 | 3 | 4 | 5 |
    | --- | --- | --- | --- | --- | --- | --- |
    | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
    | 1 | 0 | 0 | 3 | 3 | 3 | 3 |
    | 2 | 0 | 0 | 3 | 4 | 4 | 7 |
    | 3 | 0 | 0 | 3 | 4 | 5 | 7 |
    | 4 | 0 | 0 | 3 | 4 | 5 | 7 |
- The value of `dp[4][5]` is `7`.

### **0/1 Knapsack Problem - Brute Force Approach**

- The **Brute Force Approach** to solve the **0/1 Knapsack Problem** is to use **Recursion**.
- It has an **exponential time complexity**.
- It has a **time complexity** of `O(2^n)`.
- It has a **space complexity** of `O(n)`.
- It starts from the beginning and check it we can maximize the value by including the item or not including the item.

```
int knapsack(int capacity, int weights[], int values[], int n) {
    if (n == 0 || capacity == 0) {
        return 0;
    }
    if (weights[n-1] > capacity) {
        return knapsack(capacity, weights, values, n-1);
    } else {
        return max(
            values[n-1] + knapsack(capacity-weights[n-1], weights, values, n-1),
            knapsack(capacity, weights, values, n-1)
        );
    }
}
```

- For each call to `knapsack(capacity, weights, values, n)`, there are two recursive calls to `knapsack(capacity-weights[n-1], weights, values, n-1)` and `knapsack(capacity, weights, values, n-1)`.
- Each recursive call has two more recursive calls, and so on.
- As a result, the number of recursive calls grows exponentially.
- The **Brute Force Approach** has a **time complexity** of `O(2^n)`.

# Algorithm for 0/1 Knapsack(Dynamic programming)

### **Algorithm**

1. **Define the DP table:**
    - Let **`n`** be the number of items.
    - Let **`W`** be the maximum capacity of the knapsack.
    - Create a 2D DP table **`dp`** where **`dp[i][w]`** represents the maximum value that can be achieved with the first **`i`** items and a knapsack capacity of **`w`**.
2. **Initialize the DP table:**
    - For **`i = 0`** (no items) or **`w = 0`** (capacity 0), the maximum value is 0, so initialize **`dp[0][w] = 0`** for all **`w`** and **`dp[i][0] = 0`** for all **`i`**.
3. **Fill the DP table:**
    - Iterate through each item **`i`** from 1 to **`n`**.
    - Iterate through each capacity **`w`** from 1 to **`W`**.
    - For each item **`i`** and capacity **`w`**, decide whether to include the item in the knapsack or not:
        - If the item's weight **`weight[i-1]`** is greater than **`w`**, do not include the item: **`dp[i][w] = dp[i-1][w]`**.
        - Otherwise, consider both including and not including the item:
            - If not including: **`dp[i][w] = dp[i-1][w]`**.
            - If including: **`dp[i][w] = max(dp[i-1][w], dp[i-1][w - weight[i-1]] + value[i-1])`**.
4. **Result:**
    - The value in **`dp[n][W]`** will be the maximum value that can be achieved with the given items and capacity.

1. The function `knapsack` takes four arguments:
    - `W`: Maximum weight capacity of the knapsack
    - `wt`: A list containing the weights of the items
    - `val`: A list containing the values of the items
    - `n`: The number of items
2. A 2D matrix `dp` is created to store the maximum value that can be obtained for a given weight capacity and number of items considered.
3. The matrix `dp` is filled in a bottom-up manner using dynamic programming:
    - For each item `i` and weight capacity `j`, two cases are considered:
        - If the weight of the current item `wt[i - 1]` is less than or equal to `j`, then we have two choices: either include the current item or exclude it. We take the maximum value between these two choices.
        - If the weight of the current item `wt[i - 1]` is greater than `j`, we cannot include the current item, so we take the maximum value obtained without considering the current item.
4. After filling the matrix, the maximum value that can be obtained is stored in `dp[n][W]`, which is returned by the function.

The time complexity of this algorithm is O(n * W), where n is the number of items, and W is the maximum weight capacity of the knapsack. The space complexity is O(n * W) due to the 2D matrix used for dynamic programming.

In the example usage, we have a knapsack with a maximum weight capacity of 10, and four items with weights [5, 4, 6, 3] and values [10, 40, 30, 50]. The maximum value that can be obtained is printed to the console.