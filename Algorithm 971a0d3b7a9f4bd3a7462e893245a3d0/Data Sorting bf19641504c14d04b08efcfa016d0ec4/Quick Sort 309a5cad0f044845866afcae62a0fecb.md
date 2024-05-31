# Quick Sort

### **Introduction**

- Quick Sort is a divide and conquer algorithm that was invented by Tony Hoare in 1959.
- Quick Sort is a sorting algorithm that sorts an array by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot.
- Quick Sort is an in-place sorting algorithm.

---

### **Divide & Conquer in Quick Sort**

- **Divide**: Select a 'pivot' element from the array.
- **Conquer**: Partition the array into two sub-arrays according to whether they are less than or greater than the pivot.
- **Combine**: Recursively sort the two sub-arrays.

---

### **Algorithm**

1. If the array has only one element, return the array.
2. Select a 'pivot' element from the array.
3. Partition the array into two sub-arrays according to whether they are less than or greater than the pivot.
4. Recursively sort the two sub-arrays.
5. Return the sorted array.
6. The base case of the recursion is when the array has only one element.
7. The pivot can be selected in different ways:
    - First element as pivot.
    - Last element as pivot.
    - Random element as pivot.
    - Median element as pivot.
- The choice of pivot can affect the running time of Quick Sort.

![Untitled](Quick%20Sort%20309a5cad0f044845866afcae62a0fecb/Untitled.png)

**Complexity Analysis**

- **Time Complexity**:
    - **Best Case**: O(n log n)
    - **Average Case**: O(n log n)
    - **Worst Case**: O(n^2)
- **Space Complexity**: O(log n)

![Untitled](Quick%20Sort%20309a5cad0f044845866afcae62a0fecb/Untitled%201.png)