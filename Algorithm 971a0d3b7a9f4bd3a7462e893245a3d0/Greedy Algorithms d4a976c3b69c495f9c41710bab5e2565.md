# Greedy Algorithms

Follows Local optimal choice of each stage with intend of finding global

→ Feasible solution(Selection)
→ Optimal Solution

- **Dynamic Programming:** Guarantees finding the optimal solution since it considers all possible combinations of items and weights.
- **Greedy Approach:** Does not guarantee the optimal solution as it makes locally optimal choices without considering future consequences. it only gurrenttes optimal solution at condition when you choose Best solution at current state

[Fractional Knapsak](Greedy%20Algorithms%20d4a976c3b69c495f9c41710bab5e2565/Fractional%20Knapsak%20328260d612094828ae7ba0d32504c2fd.md)

[**Job Sequencing with Deadline**](Greedy%20Algorithms%20d4a976c3b69c495f9c41710bab5e2565/Job%20Sequencing%20with%20Deadline%208a031a00bdbb47e5a22da28536bebf2e.md)

[Coin Change GREEDY](Greedy%20Algorithms%20d4a976c3b69c495f9c41710bab5e2565/Coin%20Change%20GREEDY%20cc827517eee74a9da23d67d14efa5823.md)

[Greedy Vs Dynamic ](../Algorithm%20971a0d3b7a9f4bd3a7462e893245a3d0.md) 

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

### **Change Problem-Minimum number of coins**

![Untitled](Greedy%20Algorithms%20d4a976c3b69c495f9c41710bab5e2565/Untitled.png)

![Untitled](Greedy%20Algorithms%20d4a976c3b69c495f9c41710bab5e2565/Untitled%201.png)

![Untitled](Greedy%20Algorithms%20d4a976c3b69c495f9c41710bab5e2565/Untitled%202.png)

![Untitled](Greedy%20Algorithms%20d4a976c3b69c495f9c41710bab5e2565/Untitled%203.png)

[Coin Change Problem in Bangla | Greedy | Dynamic | Recursive Approach | PART 1 | Algorithms](https://youtu.be/z_wxAMUlVPo?si=XzGkCAwlbDZBvQY-)

### CODE

```cpp
#include <iostream>
using namespace std;

const int numCoins = 5;
int output[numCoins];

int greedyCoinChange(int c[], int n, int i) {
    if (n == 0) {
        return 0;
    }
    if (i < numCoins && c[i] <= n) {
        output[i]++;
        return 1 + greedyCoinChange(c, n - c[i], i);
    } else {
        return greedyCoinChange(c, n, i + 1);
    }
}

int main() {
    int numCoins = 5;
    int c[numCoins] = {50, 25, 10, 5, 1};
    int n = 87;

    // Initialize output array to zeroes
    for (int i = 0; i < numCoins; i++) {
        output[i] = 0;
    }

    int result = greedyCoinChange(c, n, 0);

    cout << "Minimum number of coins needed: " << result << endl;

    cout << "Coins used:" << endl;
    for (int i = 0; i < numCoins; i++) {
        if (output[i] > 0) {
            cout << c[i] << " x " << output[i] << endl;
        }
    }

    return 0;
}

```

### **Job Sequencing Algorithm with Deadlines|**

[Job Sequence with Deadlines-Greedy Algorithm | Bangla](https://youtu.be/_fFljp7z9Y4?si=7omvXqDoTqIgR_Lr)

![Untitled](Greedy%20Algorithms%20d4a976c3b69c495f9c41710bab5e2565/Untitled%204.png)

[L-4.5: Job Sequencing Algorithm with Example | Greedy Techniques](https://youtu.be/Tpp7o0jQ-8w?si=I3iP5ckD8vQO2qZm)

[3.2 Job Sequencing with Deadlines - Greedy Method](https://www.youtube.com/watch?v=zPtI8q9gvX8)

[Job Sequencing Algorithm with Deadlines| Greedy Method| Data structure & Algorithm | Bangla Tutorial](https://youtu.be/qdEK7vyHS6c?si=ZbFtIvubnVNREfbs)

## **Huffman Coding**

1.  Compression Technique
2. Used to Compress the size of Data or message

### Assignment 0/1 using both greedy and Dp

[22101095_01KnapsackAssignment.pdf](Greedy%20Algorithms%20d4a976c3b69c495f9c41710bab5e2565/22101095_01KnapsackAssignment.pdf)

[22101095_01knapsackDP.cpp](Greedy%20Algorithms%20d4a976c3b69c495f9c41710bab5e2565/22101095_01knapsackDP.cpp)

[22101095_01knapsackGreedy.cpp](Greedy%20Algorithms%20d4a976c3b69c495f9c41710bab5e2565/22101095_01knapsackGreedy.cpp)

[CSE 208 ASSIGNMENT 1.docx](Greedy%20Algorithms%20d4a976c3b69c495f9c41710bab5e2565/CSE_208_ASSIGNMENT_1.docx)

![Screenshot 2024-03-26 015907.png](Greedy%20Algorithms%20d4a976c3b69c495f9c41710bab5e2565/Screenshot_2024-03-26_015907.png)

![Screenshot 2024-03-28 231358.png](Greedy%20Algorithms%20d4a976c3b69c495f9c41710bab5e2565/Screenshot_2024-03-28_231358.png)