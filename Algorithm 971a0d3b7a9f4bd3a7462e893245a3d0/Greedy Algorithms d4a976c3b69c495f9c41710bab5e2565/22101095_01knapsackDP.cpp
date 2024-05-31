#include <bits/stdc++.h>
using namespace std;
// Function to solve 0/1 knapsack using dynamic programming
float knapsackDP(int capacity, int items[][3], int n) {
    float dp[n + 1][capacity + 1]; //creates new array named dp array to store the maximum profit

    // Initialize dp array
    for (int i = 0; i <= n; ++i) { 
        for (int w = 0; w <= capacity; ++w) {
            if (i == 0 || w == 0) // initializes the base case of the DP ALGO, where either there are no items or the knapsack capacity zero, resulting in a maximum value of zero.
                dp[i][w] = 0;
            else if (items[i - 1][2] <= w) /*checks if the weight of the current item is less than or equal to the current capacity of the knapsack. 
                                            If true, it calculates the maximum value by either excluding the current item or including it.*/
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - items[i - 1][2]] + items[i - 1][1]);
                /*It compares the value obtained by excluding the current item 
                 with the value obtained by including the current item and selects the maximum of the two.*/
            else
                dp[i][w] = dp[i - 1][w];// If the weight of the current item is greater than the current capacity , the current item is excluded.
        } }
    // Backtrack to find the selected items
    int w = capacity; //W =  remaining capacity
    cout << "Selected items (ID): ";
    for (int i = n; i > 0 && w > 0; --i)  // loop continues until either all items have been considered or the remaining capacity becomes zero.
    { 
        if (dp[i][w] != dp[i - 1][w]) { //If the value of the current item is not equal to the value of the previous item, 
        //current V != prev                         //it means that the current item is included in the knapsack.
            cout << items[i - 1][0] << " ";//prints the ID of the selected item.
            w -= items[i - 1][2]; //updates the remaining capacity by subtracting the weight of the current item.
        }
    }
    cout << endl;
    return dp[n][capacity];//returns the maximum value that can be obtained by selecting items .
}

int main() {
    int items[][3] = { //here item is a 2d array where each row represents an item with
  //   ID, Value, and Weight
        {0, 10, 5},    // Item 0: Value = 10, Weight = 5
        {1, 60, 10},   // Item 1: Value = 60, Weight = 10
        {2, 100, 20},  // Item 2: Value = 100, Weight = 20
        {3, 120, 30}   // Item 3: Value = 120, Weight = 30
        /*{0, 9, 3},   
        {1, 7, 1},   
        {2, 2, 2},  this values i used in Simulation and analysis part
        {3, 1, 4} ,
        {4,  6, 6 },
        {5,  10,7}*/
    };
    int n = sizeof(items) / sizeof(items[0]); //item size/count
    int capacity = 50; // Bag capacity

    float maxProfit = knapsackDP(capacity, items, n); //function call with parameter capacity, itemsARRAY, and n (total item count)
    cout << "Maximum profit: " << maxProfit << endl;
    return 0;
}
/*Problem Description:
We have a set of items, each with an associated value and weight.
The goal is to select a subset of these items to maximize the total value while ensuring that the 
total weight does not exceed a given capacity (in this case, 50).*/ 