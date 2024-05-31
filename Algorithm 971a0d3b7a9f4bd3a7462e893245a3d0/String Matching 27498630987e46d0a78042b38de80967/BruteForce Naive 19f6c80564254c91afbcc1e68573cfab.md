# BruteForce / Naive

---

### Algorithm  and PSudo Code BF SM

1. Start by aligning the pattern at the beginning of the text.
2. Compare each character of the pattern with the corresponding character of the text.
3. If a mismatch is found at any position, shift the pattern by one position to the right and repeat the comparison.
4. Repeat steps 2 and 3 until either a match is found or the end of the text is reached.
- **Psudo code**
    
    ```python
    def brute_force_match(text, pattern):
        n = len(text)
        m = len(pattern)
        matches = []
    
        for i in range(n - m + 1):
            j = 0
            while j < m and text[i + j] == pattern[j]:
                j += 1
            if j == m:
                matches.append(i)
    
        return matches
    
    ```
    
    In this implementation, the `brute_force_match` function takes two arguments: `text` (the string to search) and `pattern` (the string to search for). It returns a list of starting indices where the pattern string is found in the text string.
    
    Here's how the algorithm works:
    
    1. The outer loop `for i in range(n - m + 1)` iterates over the text string from the start to the position where the pattern string can potentially end.
    2. The inner loop `while j < m and text[i + j] == pattern[j]` compares characters of the pattern string with the corresponding characters in the text string, starting from the current position `i`.
    3. If all characters in the pattern string match the corresponding characters in the text string, the condition `j == m` becomes true, and the starting index `i` is added to the `matches` list.
    4. The algorithm continues to search for the next occurrence of the pattern string in the text string.

**A brute force algorithm for string matching** is a simple approach to find all occurrences of a pattern string within a given text string. The algorithm works by sliding the pattern string over the text string and checking for a match at every position. Here's how the algorithm works:

1. Iterate over the text string using a nested loop.
2. For each position in the text string, check if the pattern string matches the text string starting from that position.
3. If a match is found, record the position and continue searching for the next occurrence.
4. If no match is found, move to the next position in the text string.
5. 

The time complexity of the brute force string matching algorithm is O((n - m + 1) * m), where n is the length of the text string and m is the length of the pattern string. This is because, in the worst case, the algorithm needs to check every possible position in the text string and compare all characters of the pattern string at each position.
While the brute force algorithm is simple and easy to understand, it can be inefficient for large strings or when the pattern string is long. More advanced algorithms, such as the Knuth-Morris-Pratt (KMP) algorithm or the Boyer-Moore algorithm, can perform string matching more efficiently in certain cases.

---