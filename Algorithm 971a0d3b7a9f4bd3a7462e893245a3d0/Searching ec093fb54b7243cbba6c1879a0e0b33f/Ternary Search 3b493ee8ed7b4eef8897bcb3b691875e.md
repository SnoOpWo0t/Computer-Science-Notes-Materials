# Ternary Search

- **Ternary Search** is a **search algorithm** that finds the position of a target value within a **sorted array**.
- It compares the target value to the two **midpoints** of the array.
- If they are not equal, the two-thirds in which the target cannot lie are eliminated and the search continues on the remaining third, again taking the two midpoints to compare to the target value, and repeating this until the target value is found.
- The **ternary search** algorithm is a **logarithmic** algorithm, which means that the time complexity grows logarithmically with the size of the input data.
- The **ternary search** algorithm is a **divide and conquer** algorithm.
- The **ternary search** algorithm is an **improvement** over the **binary search** algorithm.

---

**Divide & Conquer in Ternary Search**

- **Divide**: Divide the array into three thirds.
- **Conquer**: Recursively search the target value in the three thirds.
- **Combine**: No need to combine the results.

---

**Algorithm**

1. If Right element is greater than or equal to Left element,
2. Calculate the two middle elements.
3. If the first middle element is equal to the target element, return the first middle element.
4. If the second middle element is equal to the target element, return the second middle element.
5. If the first middle element is greater than the target element, recursively search the left third of the array.
6. If the second middle element is less than the target element, recursively search the right third of the array.
7. If the first middle element is less than the target element and the second middle element is greater than the target element, recursively search the middle third of the array.
8. If the target element is not found, return -1.

![Untitled](Untitled%202.png)

![Untitled](Untitled%203.png)

![Untitled](Untitled%204.png)