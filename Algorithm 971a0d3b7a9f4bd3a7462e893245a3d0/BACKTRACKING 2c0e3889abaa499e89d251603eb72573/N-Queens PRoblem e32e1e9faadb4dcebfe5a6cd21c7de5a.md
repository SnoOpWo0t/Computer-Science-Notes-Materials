# N-Queens PRoblem

### Q1

Let's illustrate backtracking with the classic N-Queens problem.
The goal is to place N queens on an N×N chessboard in such a way
***that no two queens threaten each other. N = TOTAL QUEENS NUMBER*** 

<aside>
💡 **1. first  queen in the first row, starting from the first row. 2nd queen in 2nd row , 3rd Queen in 3rd row and so on...
2, so to check each queens locations we just have to check their column 
3. we’ll try to avoid placing 2 queens in same row and column**

</aside>

- **N-Queens Problem – Time Complexity**
    
    All possible arrangements (every position for every queen) → **nn**
    
    Backtracking reduces it to n!.
    
    Time Complexity → O(n!)
    
    The **27×27 board is the highest-order board** that has been completely
    enumerated (234,907,967,154,122,528 solutions)
    [[https://github.com/preusser/q27](https://github.com/preusser/q27)]
    

The queen can be moved any number of unoccupied squares in a
straight line(**vertically, horizontally, or diagonally.) can attack(column, row,diagonal)**

according to our problem we have to rearange our queen this how that one queen cant attack another one so they can stay safe

![this how queen moves](N-Queens%20PRoblem%20e32e1e9faadb4dcebfe5a6cd21c7de5a/Queenmoves3.gif)

this how queen moves

[N-queen problem| 4-Queen problem|8-queen problem by backtracking in hindi.](https://www.youtube.com/watch?v=B195nJ1WpDU)

[Backtracking and N-Queen Problem](https://www.codesdope.com/course/algorithms-backtracking/)

[N-Queens Problem | Backtracking | Data Structure & Algorithm | Bangla Tutorial](https://www.youtube.com/watch?v=g0LGjpMY2Q4)

[6.1 N Queens Problem using Backtracking](https://www.youtube.com/watch?v=xFv_Hl4B83A)

---

### Conditons :

1. **Column   :**   C**1 == c2** (**NOT SAFE**)
2. **Row**  :  **R1 == R2**  (**NOT SAFE**)
3. **Diagonal** :  **abs(C1 -C2 ) == abs (R1-R2)**

![queen.gif](N-Queens%20PRoblem%20e32e1e9faadb4dcebfe5a6cd21c7de5a/queen.gif)

### How Many ways to solve N-queens

![Untitled](N-Queens%20PRoblem%20e32e1e9faadb4dcebfe5a6cd21c7de5a/Untitled.png)

---

The N-Queens problem i: N queens on an N x N chessboard such that no two queens attack each other. This problem can be solved using a backtracking algorithm.

The backtracking algorithm for the N-Queens problem works as follows:  

### Here's a more detailed explanation of the backtracking Algorithm for solving the N-Queens problem:

1. **Initialize the board**: Start with an empty N x N chessboard, where all cells are initially set to 0.
2. **Place the first queen**: Try to place the first queen in the first column, starting from the first row.
3. **Check for conflicts**: Check if the current placement of the queen is valid, meaning that it does not attack any other queens on the chessboard. This can be done by checking the following conditions:
    - The current row does not have any other queens (no two queens can be on the same row).
    - The current column does not have any other queens (no two queens can be on the same column).
    - The current diagonal (both top-left to bottom-right and bottom-left to top-right) does not have any other queens (no two queens can be on the same diagonal).
4. **Recursive call**: If the current placement is valid, move on to the next column and repeat steps 2-3. This is the recursive part of the backtracking algorithm.
5. **Backtrack**: If the current placement is not valid, meaning that the queen being placed conflicts with an existing queen, backtrack to the previous column and try a different row for the queen.If t***he current placement is not valid, backtrack to the previous row and try a different column***
6. **Solution found**: If a queen has been successfully placed in each column, a solution has been found and can be reported.
7. **Report all solutions**: Repeat the backtracking process to find all possible solutions to the N-Queens problem.

1. **Initialize**: Start with an empty chessboard.
2. **Place a queen**: Try to place a queen in the first column, starting from the first row. 2nd queen in 2nd row , 3rd Queen in 3rd row and so on...
3. **Check for conflicts**: Check if the current placement of th*e queen is valid (always check from first column) , meaning that it does not attack any other* queens on the chessboard.
4. **Recursive call**: If the current placement is valid, move on to the next column/row and **repeat steps 2-3.** If t***he current placement is not valid, backtrack to the previous row and try a different column***
5. **Solution found**: If a queen has been placed in each column, a solution has been found and can be reported.
6. **Backtrack**: If a solution cannot be found, backtrack to the previous column and try a different row.

Here's an example implementation of the N-Queens problem using a backtracking algorithm in Python:

- Code
    
    
    ```python
    def is_safe(board, row, col, n):
        # Check this row on the left side
        for i in range(col):
            if board[row][i] == 1:
                return False
        # Check upper diagonal on the left side
        for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
            if board[i][j] == 1:
                return False
    
        # Check lower diagonal on the left side
        for i, j in zip(range(row, n, 1), range(col, -1, -1)):
            if board[i][j] == 1:
                return False
        return True
    
    def solve_n_queens(n):
        board = [[0 for _ in range(n)] for _ in range(n)]
        solutions = []
    
        def backtrack(col):
            if col == n:
                solutions.append([row[:] for row in board])
                return
    
            for i in range(n):
                if is_safe(board, i, col, n):
                    board[i][col] = 1
                    backtrack(col + 1)
                    board[i][col] = 0
    
        backtrack(0)
        return solutions
    
    # Example usage
    n = 4
    solutions = solve_n_queens(n)
    for solution in solutions:
        print(solution)
    ```
    
    This implementation uses a backtracking algorithm to find all possible solutions to the N-Queens problem. The `is_safe` function checks if it is safe to place a queen in a given position on the chessboard, and the `backtrack` function recursively explores the search space to find all solutions.
    
    The time complexity of the N-Queens backtracking algorithm is O(n!), as there are n! possible solutions to the problem, and the algorithm explores the entire search space. However, the algorithm can be optimized further by using various techniques, such as pruning the search space or using more efficient data structures.
    

![Untitled.png](N-Queens%20PRoblem%20e32e1e9faadb4dcebfe5a6cd21c7de5a/Untitled%201.png)