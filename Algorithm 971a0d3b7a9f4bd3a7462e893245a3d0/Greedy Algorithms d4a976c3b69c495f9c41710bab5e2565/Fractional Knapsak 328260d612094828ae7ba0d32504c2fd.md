# Fractional Knapsak

- Description
    - **Fractional Knapsack Problem** is a problem in combinatorial optimization.
    - It is similar to the **0/1 Knapsack Problem**. But, in this problem, the items can be broken down into smaller pieces, and we can take a fraction of any item.
    

### Algorithm

The fractional knapsack problem is an optimization problem where the goal is to maximize the total value of items that can be packed into a knapsack with a given weight capacity. The key difference from the classic 0/1 knapsack problem is that items can be divided and fractional amounts of items can be taken. The algorithm to solve the fractional knapsack problem is a greedy algorithm that follows these steps:

1. Calculate the value-to-weight ratio for each item.
2. Sort the items in decreasing order of their value-to-weight ratio.
3. Initialize the remaining capacity of the knapsack to the maximum capacity.
4. Iterate through the sorted items:
    - If the weight of the current item is less than or equal to the remaining capacity, add the entire item to the knapsack and subtract its weight from the remaining capacity.
    - Otherwise, add a fraction of the item to the knapsack, where the fraction is equal to the remaining capacity divided by the item's weight. The remaining capacity becomes zero after this step.
5. The algorithm stops when all items have been processed or the remaining capacity becomes zero.

Here's the pseudocode for the fractional knapsack algorithm:

```
Copy codeFractionalKnapsack(weights, values, capacity):
    n = length(weights)
    ratios = []
    for i = 1 to n:
        ratios.append(values[i] / weights[i])
    sort ratios in decreasing order
    total_value = 0
    remaining_capacity = capacity
    for i = 1 to n:
        if weights[i] <= remaining_capacity:
            total_value += values[i]
            remaining_capacity -= weights[i]
        else:
            fraction = remaining_capacity / weights[i]
            total_value += values[i] * fraction
            remaining_capacity = 0
            break
    return total_value

```

The time complexity of this algorithm is O(n log n) due to the sorting step, where n is the number of items. The space complexity is O(n) for storing the value-to-weight ratios.

Note that the fractional knapsack problem has an optimal greedy solution because it satisfies the greedy choice property: the optimal solution can be obtained by making locally optimal choices at each step. However, the classic 0/1 knapsack problem, where items cannot be divided, does not have an optimal greedy solution and requires a dynamic programming approach or other optimization techniques

- **Approach**
    - The **Greedy Approach** to solve the **Fractional Knapsack Problem** is to use **Greedy Algorithm**.
    - The **Greedy Algorithm** is an algorithmic paradigm that builds up a solution piece by piece, always choosing the next piece that offers the most immediate benefit.
    - The **Greedy Algorithm** is used to solve the **Fractional Knapsack Problem** by sorting the items based on their value-to-weight ratio in non-increasing order and then adding the items to the knapsack one by one until the knapsack is full.
- **Complexity :**
    - Best Case Time Complexity: `O(n log n)`
    - Average Case Time Complexity: `O(n log n)`
    - Worst Case Time Complexity: `O(n log n)`
    - Space Complexity: `O(1)`

### **FRACTIONAL Knapsack Problem(can take fraction number)**

- Focused on specific task
- how to get that specific task in highest portion in limited space

### Code

 

```
//Function Parameters: the function GreedyKS takes int T[3][4] as a parameter, 
//indicating an array of size 3x4, matching the size of the T array defined in the main function. 
 //In contrast, the second code uses int T[][4] as a parameter, which implies a flexible array size, 
 //but it's prone to errors if the actual size of the array doesn't match what the function expects.#include<stdio.h
 #include <iostream>
using namespace std;
float GreedyKS(float c, int T[][4], int i, int n)
{
    if (c <= 0 || i > n)
        return 0;
    if (c < T[i][2])
    {
        float p = c / T[i][2] * T[i][1];
        return p; //P = profit (c/w * v)
    }

    return T[i][1] + GreedyKS(c - T[i][2], T, i + 1, n);
}

int main()
{ //heere row is the item and column is the id, value, weight, value/weight
// n = 3, c = 50
    int T[3][4] = { 
    //   0, 1, 2, 3
     // id, v, w, v/w
        {1, 60, 10, 6},
        {2, 100, 20, 5},
        {3, 120, 30, 4}};
    float c = 50;  //C = Bag capacity
    float profit = GreedyKS(c, T, 0, 3); // Note: n should be 3 for the given array, as indexing starts from 0
    cout << profit << endl;         //0 is the starting index and 3 is the last index
    return 0;
}
/* 
float GreedyKS(float c, int T[][4], int i, int n): This is the declaration of a function named GreedyKS. 
It takes four parameters:
* c: A float representing the remaining capacity.
* T[][4]: A 2D array (matrix) representing the items. Each row contains an item’s ID, value, weight, and value-to-weight ratio.
* i: An integer representing the current item index.
* n: An integer representing the total number of items.
 4. // FUNCTION EXPLANATION :
 The GreedyKS function implements a greedy algorithm for the knapsack problem.
It calculates the maximum profit that can be obtained by selecting items with the highest value-to-weight ratio while staying within the given capacity c.
if the remaining capacity is less than the weight of the current item, it partially selects the item based on the remaining capacity.
The function recursively considers the next item and updates the remaining capacity.
The base case is when the remaining capacity is zero or all items have been considered.
5. int T[3][4] = {...}: This initializes a 2D array T with three rows and four columns. Each row represents an item, and the columns represent the item’s ID, value, weight, and value-to-weight ratio.
6. float c = 50;: This initializes a float variable c with the given capacity (50 in this case).
7. float profit = GreedyKS(c, T, 0, 2);: This calculates the maximum profit using the GreedyKS function. The initial item index is 0, and there are 3 items (so n is 2).
8. cout << profit << endl;: This prints the calculated profit to the console.
 */
//TODO: Explain the code
/*
The line float profit = GreedyKS(c, T, 0, 3); 
in the code calls the GreedyKS function to solve the knapsack problem greedily. 
It passes the knapsack capacity c, the array of items T,
 the starting index 0 indicating the first item, and 3 as the last index (although it should be 2 for the third item). 
 The function calculates the maximum profit achievable and stores it in the variable profit.

*/
/*
C = This is a float representing the capacity of the knapsack, i.e., the maximum weight it can hold.

T =This is a 2D array representing the items available for selection. Each row of the array T corresponds to an item, 
   and each column represents different attributes of the item. The columns are structured as follows:
Column 0: Item ID
Column 1: Value of the item
Column 2: Weight of the item
Column 3: Value-to-weight ratio of the item (value divided by weight)
0 = This parameter i represents the index of the current item being considered. In this case, 
  it starts from 0, indicating that the function begins considering items from the first item in the array T.

3 =  This parameter n represents the index of the last item in the array T.  (since indexing starts from 0), allowing the function to consider all 4 items.
The GreedyKS function implements a greedy algorithm to solve the knapsack problem. It recursively selects items based on their value-to-weight ratios, 
starting from the first item in the array T. It adds items to the knapsack until either the knapsack is full (i.e., its capacity c becomes zero or negative) or there are no more items to consider.
The function returns the total profit obtained by selecting items to fill the knapsack. This profit is stored in the variable profit, which is then printed using printf.
User
*/
```

- **Pseudocode**
    
    ```
    **FractionalKnapsack(items[], n, capacity) {**
        // Sort the items in non-increasing order of their value-to-weight ratio
        sort(items, n, value-to-weight ratio in non-increasing order);
    
        totalValue = 0;
        for (i = 0; i < n; i++) {
            // If the weight of the current item is less than or equal to the remaining capacity
            **if (items[i].weight <= capacity)** {
                // Add the entire item to the knapsack
                totalValue += items[i].value;
                // Subtract the item's weight from the remaining capacity
                capacity -= items[i].weight;
            } else {
                // Add a fraction of the item to the knapsack
                **totalValue += (capacity * items[i].value-to-weight ratio);**
                // Set the remaining capacity to zero
                capacity = 0;
                // Exit the loop since the knapsack is full
                break;
            }
        }
        return totalValue;
    }
    
    ```
    
    1. The function takes an array of items `items[]`, the number of items `n`, and the maximum capacity of the knapsack `capacity` as input.
    2. It first sorts the `items` array in non-increasing order of the value-to-weight ratio of each item using the `sort` function.
    3. It initializes the `totalValue` variable to zero, which will store the maximum value that can be obtained by filling the knapsack.
    4. It then iterates over the sorted `items` array using a `for` loop.
    5. For each item, it checks if the weight of the item is less than or equal to the remaining capacity of the knapsack.
        - If the weight is less than or equal to the remaining capacity, it adds the entire value of the item to `totalValue` and subtracts the weight of the item from the remaining capacity.
        - If the weight is greater than the remaining capacity, it adds a fraction of the item's value to `totalValue`, where the fraction is calculated as `(capacity * items[i].value-to-weight ratio)`. This represents the maximum value that can be obtained from the remaining capacity. It then sets the remaining capacity to zero and breaks out of the loop, as the knapsack is now full.
    6. Finally, it returns the `totalValue`, which represents the maximum value that can be obtained by filling the knapsack using the fractional knapsack algorithm.
    
    The sorting step is crucial to ensure that the items with the highest value-to-weight ratio are considered first, as per the greedy strategy of the algorithm. The time complexity of this implementation is O(n log n) due to the sorting step, where n is the number of items.
    
    - The **Pseudocode** for the **Greedy Algorithm** to solve the **Fractional Knapsack Problem** is as follows:
    
    ```
    FractionalKnapsack(items[], n, capacity) {
        sort(items, n, value-to-weight ratio in non-increasing order);
        totalValue = 0;
        for (i = 0; i < n; i++) {
            if (items[i].weight <= capacity) {
                totalValue += items[i].value;
                capacity -= items[i].weight;
            } else {
                totalValue += (capacity * items[i].value-to-weight ratio);
                capacity = 0;
                break;
            }
        }
        return totalValue;
    }
    ```
    
    - The **Pseudocode** sorts the items based on their value-to-weight ratio in non-increasing order and then adds the items to the knapsack one by one until the knapsack is full.
    - If the weight of the item is less than or equal to the remaining capacity of the knapsack, the entire item is added to the knapsack and the remaining capacity of the knapsack is updated.
    - If the weight of the item is greater than the remaining capacity of the knapsack, a fraction of the item is added to the knapsack such that the entire capacity of the knapsack is utilized and the remaining capacity of the knapsack is updated to 0.
    - The total value of the knapsack is then returned.