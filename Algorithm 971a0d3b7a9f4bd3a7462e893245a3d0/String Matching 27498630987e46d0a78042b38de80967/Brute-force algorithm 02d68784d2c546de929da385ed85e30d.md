# Brute-force algorithm

---

[Brute Force - String Matching  | How String Matching Algorithm?](https://www.youtube.com/watch?v=FL5VXD6BWAU)

[Naive Algorithm for Pattern Searching | GeeksforGeeks](https://www.youtube.com/watch?v=nK7SLhXcqRo)

![Untitled](Brute-force%20algorithm%2002d68784d2c546de929da385ed85e30d/Untitled.png)

---

### Here's how the ***Brute Force / NAive*** algorithm works:

1. **Check for match**: If `i` reaches the end of the `pattern`, that means a match has been found, and the algorithm returns the starting index of the match in the `text`. If `j` reaches the end of the `text` without finding a match, the algorithm returns -1 to indicate that no match was found.

The brute force string matching algorithm is a simple and straightforward approach to finding a pattern within a given text. It involves comparing the pattern with the text character by character until a match is found or the end of the text is reached.

Here's how the brute force string matching algorithm works:

1. **Initialize two pointers**: `i` to keep track of the current position in the text, and `j` to keep track of the current position in the pattern.
i=j=0
2. **Iterate through the text**:
    - Start with `i = 0` and `j = 0`.
    - Compare the character at index `i` in the text with the character at index `j` in the pattern.
    - If **they match, i**ncrement both `i` and `j`.**(i++, j++)**
    - If **they don't match**, reset `j` to 0 and increment `i` **(J = 0 && i++)**
3. **Check for a match**:
    - If `j` reaches the end of the pattern, a match has been found. Return the starting index of the match in the text.
    - If `i` reaches the end of the text and `j` is not at the end of the pattern, no match has been found. Return -1 (or some other indicator of no match).

Here's the Python code for the Brute Force string matching algorithm:

```python
pythonCopy codedef brute_force_search(pattern, text):
    n = len(text)
    m = len(pattern)

    for i in range(n - m + 1):
        j = 0
        while j < m and text[i + j] == pattern[j]:
            j += 1
        if j == m:
            return i

    return -1
```

**Time Complexity**:
The time complexity of the Brute Force algorithm is O(n * m), where n is the length of the text and m is the length of the pattern. This is because, in the worst case, the algorithm has to compare each character in the text with each character in the pattern.

**Brute-force Algorithm -Time complexity :→** 
• For each of the n-m+1 possible shift values, a comparison of
corresponding characters must be performed m times to confirm
the validity of the shift.
**• O((n-m+1) × m)**

---