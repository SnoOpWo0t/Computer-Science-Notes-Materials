#include <iostream>
using namespace std;
float GreedyKS(float c, int T[][3], int i, int n)
{
    if (c <= 0 || i > n) //if the remaining capacity is less than or equal to 0 or the index is greater than the total number of items
        return 0;
    if (c < T[i][2]) //if the remaining capacity is less than the weight of the current item
    {
        float p = c / T[i][2] * T[i][1];
        return p; //P = profit (c/w * v)
    }

    return T[i][1] + GreedyKS(c - T[i][2], T, i + 1, n);//return the value of the current item plus the value of the next item
//c - T[i][2] is the remaining capacity after selecting the current item, and i + 1 is  next item's index, n is last index
}

int main()
{ //row is item and column is the id, value, weight, value/weight
// n = 3, c = 50
    int T[3][3] = { 
    //   0, 1, 2, 3
     // id, v, w, v/w
        {1, 60, 10},   // Item 1: Value = 60, Weight = 10
        {2, 100, 20},  // Item 2: Value = 100, Weight = 20
        {3, 120, 30}   // Item 3: Value = 120, Weight = 30
    };
        // {1, 60, 10, 6},
        // {2, 100, 20, 5},
        // {3, 120, 30, 4}};
    float c = 50;  //C = Bag capacity
    float profit = GreedyKS(c, T, 0, 3); // Note: n should be 3  as indexing starts from 0
    cout << profit << endl;         //0 is the starting index and 3 is the last index
    return 0;
}
/*changes for analysis and simulation is :
   int T[6][3] = { 
        {0, 9, 3},   
        {1, 7, 1},   
        {2, 2, 2},  
        {3, 1, 4},
        {4, 6, 6},
        {5, 10, 7}
    };
    float c = 10;
    auto PROFIT = GreedyKS(c, T, 0, 6);*/
/* 
 The GreedyKS function implements a greedy algorithm for the knapsack problem.
It calculates the maximum profit that can be obtained by selecting items with the highest value-to-weight ratio while staying within the given capacity c.
if the remaining capacity is less than the weight of the current item, it partially selects the item based on the remaining capacity.
The function recursively considers the next item and updates the remaining capacity.
The base case is when the remaining capacity is zero or all items have been considered.

* c: A float representing the remaining capacity.
* T[][4]: A 2D array (matrix) representing the items. Each row contains an item’s ID, value, weight, and value-to-weight ratio.
* i: An integer representing the current item index.
* n: An integer representing the total number of items.
 4. // FUNCTION EXPLANATION :

5. int T[3][4] =  2D array T with three rows and four columns. Each row represents an item, and the columns represent the item’s ID, value, weight, and value-to-weight ratio.
7. float profit = GreedyKS(c, T, 0, 2);: This calculates the maximum profit using the GreedyKS function. The initial item index is 0, and there are 3 items (so n is 2).
8. cout << profit << endl;: This prints the calculated profit 
/*
The line float profit = GreedyKS(c, T, 0, 3); 
in the code calls the GreedyKS function to solve the knapsack problem greedily. 
It passes the knapsack capacity c, the array of items T,
 the starting index 0 indicating the first item, and 3 as the last index (although it should be 2 for the third item). 
 The function calculates the maximum profit achievable and stores it in the variable profit.
*/
