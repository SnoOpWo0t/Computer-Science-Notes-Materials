# (LCS)Longest Common Subsequence

<aside>
💡 For LCS : 
 2 Sequence are given and and the lc s fro this 2 sequence wont be Exceeding from any of this 2

</aside>

### LCS using DP

- if 2 char are not same write maximum and the arrow will face max value
- if both are same add 1  with the diagonal value and the direction is diagonal
[https://www.youtube.com/watch?v=jHGgXV27qtk](https://www.youtube.com/watch?v=jHGgXV27qtk)
- the last digit from the graph will be the **number of Lcs**
- to find those characters :
1. folllow the arrow
2. if you found diagonal arrow chekc both row and column characters if they are same write it 
3. then again repeart (1 and 2)

![Untitled]((LCS)Longest%20Common%20Subsequence%207486d04c19eb4154a63dff547007f276/Untitled.png)

[Longest Common Subsequence (LCS) |Dynamic Programming | Data Structure & Algorithm| Bangla Tutorial](https://www.youtube.com/watch?v=VbcDFmHkuoA)

**Subsequence vs Substring**

| Subsequence | Substring |
| --- | --- |
| A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements. | A substring is a contiguous sequence of characters within a string. |
| A subsequence is not necessary to be continuous. It can be discontinuous. | A substring is continuous. |
| The empty sequence is a subsequence of any sequence. | The empty string is a substring of any string. |
| Any sequence is a subsequence of itself. | Any string is a substring of itself. |
| The length of the longest common subsequence is the maximum length of a subsequence that is common to both the sequences. | The length of the longest common substring is the maximum length of a substring that is common to both the strings. |
| Example: ACE is a subsequence of ABCDE but not a subsequence of AED. | Example: ABC is a substring of ABCDE but not a substring of AED. |

- What i**s LCS ?**
    
    It involves finding the longest subsequence that is common to two or more sequences.A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements.It involves finding the longest subsequence that is common to two or more sequences.A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements. 
    
    ```
    **For Example :** 
    > aabbcc abcc
        In this example "abcc" is the longest common subsequence.
    >prep  rep
        "rep" is the longest common subsequence here.
    ```
    

---

# Academics

![Untitled]((LCS)Longest%20Common%20Subsequence%207486d04c19eb4154a63dff547007f276/Untitled%201.png)

![Untitled]((LCS)Longest%20Common%20Subsequence%207486d04c19eb4154a63dff547007f276/Untitled%202.png)

![Untitled]((LCS)Longest%20Common%20Subsequence%207486d04c19eb4154a63dff547007f276/Untitled%203.png)

### **Introduction**

- **Longest Common Subsequence (LCS)** is a problem to find the longest subsequence that is present in given two sequences.
- It is a classic computer science problem and has applications in **Bioinformatics**.
- It is solved using **Dynamic Programming**.
- **Longest Common Subsequence (LCS)** is a subsequence that is common to both the sequences. It is not necessary to be continuous. It can be discontinuous.

**What is a Subsequence?**

- A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.
- For example, `ACE` is a subsequence of `ABCDE` but not a subsequence of `AED`.
- The empty sequence is a subsequence of any sequence.
- Any sequence is a subsequence of itself.
- The length of the longest common subsequence is the maximum length of a subsequence that is common to both the sequences.

---

### **Apllications of Longest Common Subsequence (LCS)**

- **Bioinformatics**: It is used to find the similarity between the DNA sequences of two species.
- **Version Control Systems**: It is used to find the difference between two versions of a file.
- **Data Comparison**: It is used to find the difference between two data files.
- **Speech Recognition**: It is used to find the similarity between two voice signals.
- **Natural Language Processing**: It is used to find the similarity between two texts.
- **Plagiarism Detection**: It is used to find the similarity between two documents.
- **Linguistics**: It is used to find the similarity between two languages.

![Untitled]((LCS)Longest%20Common%20Subsequence%207486d04c19eb4154a63dff547007f276/Untitled%204.png)

### **Algorithm**

1. Create a 2D array `dp[][]` of size `(m + 1) x (n + 1)`.
2. Initialize the first row and the first column of the array `dp[][]` with `0`.
3. For each element `i` from `1` to `m` and each element `j` from `1` to `n`, calculate the value of `dp[i][j]` as:
    - `dp[i][j] = 1 + dp[i - 1][j - 1]` if `s1[i - 1] == s2[j - 1]`
    - `dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])` if `s1[i - 1] != s2[j - 1]`
    - Here, `dp[i][j]` represents the length of the longest common subsequence of the strings `s1` and `s2` of lengths `i` and `j` respectively.
    - The value of `dp[m][n]` is the length of the longest common subsequence of the strings `s1` and `s2`.
4. The base case of the recursion is when `i` is `0` or `j` is `0`.

**Tabulation**

- Suppose the strings are `AGGTAB` and `GXTXAYB`.
- The table `dp[][]` is as follows:
    
    
    |  | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |
    | --- | --- | --- | --- | --- | --- | --- | --- | --- |
    | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
    | 1 | 0 | 0 | 0 | 0 | 1 | 1 | 1 | 1 |
    | 2 | 0 | 0 | 1 | 1 | 1 | 1 | 1 | 1 |
    | 3 | 0 | 0 | 1 | 1 | 1 | 2 | 2 | 2 |
    | 4 | 0 | 1 | 1 | 1 | 1 | 2 | 2 | 2 |
    | 5 | 0 | 1 | 1 | 2 | 2 | 2 | 2 | 3 |
    | 6 | 0 | 1 | 1 | 2 | 2 | 3 | 3 | 3 |
- The value of `dp[6][7]` is `3`.
- The length of the longest common subsequence is `3`.
- The longest common subsequence is `GTAB`.
1. 

**Complexity Analysis**

- The **Recursive Approach** has an **exponential time complexity** of `O(2^n)`.
- The **Dynamic Programming Approach** has a **time complexity** of `O(m*n)`.
- The **Dynamic Programming Approach** has a **space complexity** of `O(m*n)`.
- The **Dynamic Programming Approach** is efficient.