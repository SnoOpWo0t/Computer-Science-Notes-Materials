# Rabin Karp algo

Similar to the Naive Algorithm, the Rabin-Karp algorithm examines
every character.
• Rabin-Karp first compares the hash value of the pattern with the hash
value of the current text substring.
• If the hash values matches, it proceeds to compare individual
characters

***Hash Function :*** 
•      A hash function is a mathematical function that transforms each string
 into a numerical representation known as its hash value.
• When two strings are identical, their hash values are also identical.
• **Rolling Hash: The Rabin-Karp algorithm** uses a rolling hash, which
      means that as the algorithm slides its window over the text, it updates
       the hash value incrementally.
• Taking into account the removal of the first character and the
        addition of the next character

**Hash Function :**
• Consider a simple hash function that assigns each character a unique
numeric value based on its position in the alphabet (e.g., 'a' = 1, 'b' = 2, .., 'z' = 26).
• Suppose we are searching for the pattern "abc" within the text
"xabcab".
• Pattern Hash: (1 + 2 + 3) = 6
• If a window hash is 6, then we will start checking individual characters.

### Time Complexity

Processing: O(m)
• Worst Case: O((n-m+1) × m) + O(m)
• Average Case: O(n

---

### Algorithm

The time complexity of the Rabin-Karp algorithm is O(n + m) on average and O(n * m) in the worst case, where n is the length of the text and m is the length of the pattern. The use of hashing makes it efficient, especially for cases where the pattern is relatively small compared to the text.

The Rabin-Karp algorithm is a string searching algorithm that uses hashing to find patterns in texts efficiently. It works by comparing hash values of the pattern and substrings of the text, rather than comparing characters directly. Here's how the Rabin-Karp algorithm works:

1. Compute the hash value of the pattern and the first substring of the text of the same length as the pattern.
2. Slide the pattern one character at a time along the text, recomputing the hash value of the substring at each step.
3. Compare the hash value of the current substring with the hash value of the pattern. If they match, perform a full character-by-character comparison to confirm the match.
4. If a match is found, record the starting index of the match.
5. Continue until the end of the text is reached.

The use of hashing allows for efficient comparison of substrings, making the Rabin-Karp algorithm faster than the naive brute force approach.

The Rabin-Karp algorithm is a string matching algorithm used to find occurrences of a pattern string within a larger text string. It is an efficient alternative to the brute force approach and has an average-case time complexity of O(n+m), where n is the length of the text string and m is the length of the pattern string.

The algorithm works by using hashing to compare the pattern string with all possible substrings of the text string. Here's how it works:

1. **Hash Value Computation**: The algorithm first computes a hash value for the pattern string. It also computes the hash value for the first substring of the text string that is of the same length as the pattern string.
2. **Comparison**: The algorithm compares the hash values of the pattern string and the current substring of the text string. If the hash values are equal, it performs a character-by-character comparison to check for an exact match.
3. **Sliding Window**: If a match is not found, the algorithm computes the hash value for the next substring of the text string by sliding the window one position to the right. This computation is done efficiently by removing the leftmost character's contribution from the previous hash value and adding the rightmost character's contribution to the new hash value.
4. **Repetition**: The algorithm repeats steps 2 and 3 until it reaches the end of the text string or finds all occurrences of the pattern string.

The key idea behind the Rabin-Karp algorithm is the use of hashing to quickly compare substrings of the text string with the pattern string. By precomputing the hash value of the pattern string and efficiently updating the hash values for the substrings of the text string, the algorithm avoids the need for character-by-character comparisons in most cases, leading to improved performance.

In this implementation, the `rabin_karp` function takes two arguments: `text` (the string to search) and `pattern` (the string to search for). It returns a list of starting indices where the pattern string is found in the text string.

The time complexity of the Rabin-Karp algorithm is O(n+m) in the average case, assuming that the hash function distributes the hash values uniformly. However, in the worst case, where all substrings of the text string have the same hash value (e.g., when the text string consists of repeated characters), the algorithm degenerates to the brute force approach with a time complexity of O((n-m+1)*m).

---

### Psuedo Code Describe

The Rabin-Karp algorithm is a string searching algorithm that uses hashing to efficiently find patterns in a text. It works by comparing hash values of the pattern with hash values of substrings of the text. If the hash values match, it performs a full comparison to confirm the match. This algorithm has an average-case time complexity of O(n + m), where n is the length of the text and m is the length of the pattern. Here's a Python implementation of the Rabin-Karp algorithm:

```python
def rabin_karp(text, pattern, d, q):
    n = len(text)
    m = len(pattern)
    h = pow(d, m-1) % q  # Precompute the hash multiplier

    # Compute the hash of the pattern and the initial hash of the first substring
    p = 0
    t = 0
    for i in range(m):
        p = (d * p + ord(pattern[i])) % q
        t = (d * t + ord(text[i])) % q

    # Slide the pattern over the text and compare hashes
    for i in range(n - m + 1):
        if p == t:  # If hash values match, perform a full comparison
            if pattern == text[i:i+m]:
                return i  # Return the starting position of the match
        if i < n - m:
            t = (d * (t - ord(text[i]) * h) + ord(text[i + m])) % q  # Update the hash of the next substring
            t = (t + q) % q  # Ensure the hash is non-negative

    return -1  # Return -1 if no match is found

# Example usage:
text = "ababcababcabc"
pattern = "abcabc"
d = 256  # Number of possible characters (ASCII characters)
q = 101  # A prime number to reduce the chance of hash collisions

print(rabin_karp(text, pattern, d, q))  # Output: 5 (match found starting at index 5)

```

In this implementation, `d` represents the number of possible characters (ASCII characters in this case), and `q` is a prime number chosen to reduce the chance of hash collisions. The algorithm iterates through the text, updating the hash values of substrings using a rolling hash technique. If a potential match is found based on hash values, it performs a full comparison to confirm the match. If a match is confirmed, it returns the starting position of the match; otherwise, it returns -1 if no match is found.

The Rabin-Karp algorithm is a string matching algorithm that uses hashing to efficiently find occurrences of a pattern string within a given text string. It has a time complexity of O(n+m), where n is the length of the text string and m is the length of the pattern string. Here's an implementation of the Rabin-Karp algorithm in Python:

```python
def rabin_karp(text, pattern, d=256, q=101):
    n, m = len(text), len(pattern)
    p = 0  # hash value for pattern
    t = 0  # hash value for text
    h = 1

    # Calculate the hash value of the pattern and the first window of the text
    for i in range(m):
        p = (d * p + ord(pattern[i])) % q
        t = (d * t + ord(text[i])) % q

    # Calculate the hash value of the remaining (n-m) characters of the text
    for i in range(m):
        h = (h * d) % q

    matches = []

    # Slide the pattern over the text one by one
    for i in range(n - m + 1):
        # Check if the hash values of the pattern and the current window of the text are equal
        if p == t:
            # Check for a match character by character
            match = True
            for j in range(m):
                if text[i + j] != pattern[j]:
                    match = False
                    break
            if match:
                matches.append(i)

        # Calculate the hash value of the next window of the text
        if i < n - m:
            t = (d * (t - ord(text[i]) * h) + ord(text[i + m])) % q
            if t < 0:
                t += q

    return matches

```

Here's how the Rabin-Karp algorithm works:

1. First, we calculate the hash values of the pattern string and the first window of the text string of length equal to the pattern string length. We use the formula `(d * hash_value + char_code) % q` to calculate the hash value, where `d` is the base of the hashing function (typically 256 for ASCII characters), `char_code` is the ASCII code of the character, and `q` is a prime number used as the modulus.
2. We also calculate the value of `h`, which is `d^(m-1) % q`, where `m` is the length of the pattern string. This value is used to efficiently calculate the hash value of the next window of the text string.
3. We then slide the pattern over the text string one by one, and for each window of the text string, we compare its hash value with the hash value of the pattern string.
4. If the hash values match, we check for a character-by-character match between the pattern string and the current window of the text string. If they match, we record the starting index of the match in the `matches` list.
5. To calculate the hash value of the next window of the text string, we use the formula `(d * (t - text[i] * h) + text[i + m]) % q`. This formula allows us to calculate the new hash value efficiently by removing the contribution of the first character of the previous window and adding the contribution of the next character in the new window.
6. We repeat steps 4 and 5 until we have checked all possible windows of the text string.
7. Finally, we return the `matches` list containing the starting indices of all occurrences of the pattern string in the text string.

The Rabin-Karp algorithm has an average-case time complexity of O(n+m), which is better than the brute force algorithm's time complexity of O((n-m+1)*m). However, in the worst case, when all characters in the text string are the same, the Rabin-Karp algorithm degenerates to the brute force algorithm, with a time complexity of O((n-m+1)*m).