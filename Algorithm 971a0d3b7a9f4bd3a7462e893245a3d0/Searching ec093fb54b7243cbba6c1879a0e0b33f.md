# Searching

There are 2 types of Searching :

[Linear Search](Searching%20ec093fb54b7243cbba6c1879a0e0b33f/Linear%20Search%2075f6ac520bea44c08fe347ecd6957aed.md)

[Binary](Searching%20ec093fb54b7243cbba6c1879a0e0b33f/Binary%20f9f83acea95345de86ce360bf34b2524.md)

[Interpolation Search](Searching%20ec093fb54b7243cbba6c1879a0e0b33f/Interpolation%20Search%20fc0328d735094cd4b9a462d30113a6f7.md)

[Ternary Search](Searching%20ec093fb54b7243cbba6c1879a0e0b33f/Ternary%20Search%203b493ee8ed7b4eef8897bcb3b691875e.md)

1. Binary Search

### Linear Search

- Linear Search in sorted way
- Linear Search in unsorted way
- Linear Search in Sorted Array

### why Linear Search?

1. most Basic
2. easy to impleament
3. Array doesn’t have to be  Sorted
4. All Array elements

### Algorithm :

1. Take how many inputs to take
2. take input in array in loop
3. take distinct input
4. take another variable  for index

### Linear Search Algorithm when usorted:

1. find first occurrence
2. find last “”
3. find  all “”
4. find all ocurence and replace wirh  a new value

### Algorithm when sorted:

1. While checking array  if the elements turns greater than targeted elements then its not matched
2. if the list is unsorted we have to search all numbers before we declare that the target is not present in array
3. if the list is sorted we can stop as soon as we reach a number that is greater than our target
4. 

**After Getting desired Search linear search terminate Searching**

## Interpolation Search

```c
int a[]={1,2,3,4};
    int pos , low = 0, high= sizeof(a)/sizeof(a[0]); 
    int x ;
    scanf("%d",&x);
    while(low<=high)
    {
      **pos  =low + ((x - a[low]) * (high - low) / (a[high] - a[low]));
      if(a[pos]==x)**
      {
        printf("element found");
      }
     else if(a[pos]>x)
      {
        high = pos -1;
      }
      else
      {
        low = pos +1;
      }

    }
```

### Binary Search

**All the data must stay in Sorted way**

**The time complexity of binary search is O(log n), where `n` is the length of the array.**

- to find Binary search Steps :  (log2^n)  here n = how many array index created

Binary search is a search algorithm that finds the position of a target value within a sorted array. The algorithm compares the target value to the middle element of the array. If they are not equal, the half of the array in which the target value cannot be will be eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value, and so on until either the target value is found or the entire array has been searched.

Here's how the binary search algorithm works:

1. Initialize variables:
    - **`left`** to 0, which is the index of the leftmost element in the array
    - **`right`** to **`n-1`**, which is the index of the rightmost element in the array, where **`n`** is the length of the array.
2. While **`left <= right`**, repeat the following steps:
    - Calculate **`mid`** as the floor of **`(left + right) / 2`**
    - If the element at index **`mid`** is equal to the target value, return **`mid` (element found)**
    - If the element at index **`mid`** is greater than the target value, update **`Low`** to **`mid - 1`**
    - If the element at index **`mid`** is less than the target value, update **`High`** to **`mid + 1`**
3. If the target value is not found after the loop, return **`1`**.
4. 

```
int a[] = {1,2,3,4,5};
    int mid,high =sizeof(a)/sizeof(a[0]) -1,low = 0;
    int x;
    scanf("%d",&x);
    while(low<=high)
    {
        mid = (high+low)/2;
        if(a[mid]==x)
        {
            printf("element found");
        }
        
      else  if(a[mid]>x)
        {
            high = mid - 1;
        }
        else
        {
            low = high+1;
        }
    }
   
```

![Untitled](Searching%20ec093fb54b7243cbba6c1879a0e0b33f/Untitled.png)

![Untitled](Searching%20ec093fb54b7243cbba6c1879a0e0b33f/Untitled%201.png)

## [**Greedy Algorithm**](https://www.programiz.com/dsa/greedy-algorithm#:~:text=A%20greedy%20algorithm%20is%20an,in%20a%20top%2Ddown%20approach.)

A greedy algorithm is **an approach for solving a problem by selecting the best option available at the moment**
. It doesn't worry whether the current best result will bring the overall optimal result. The algorithm never reverses the earlier decision even if the choice is wrong. It works in a top-down approach.

**A greedy algorithm can be thought of as a backtracking algorithm**
 where at each decision point "the best" option is already known and thus can be picked without having to recurse over any of the alternative options.

## [**Brute force approach**](https://www.javatpoint.com/brute-force-approach)

**Brute-force search is the most common search algorithm**
 because it does not need any domain knowledge. However, it can **take a lot of run time** and could be rather inefficient. Essentially, **in brute-force search, you have to iterate through all the candidates, checking whether they satisfy the problem's statement.**

Time Complexity : 0(n^2)

Space Complexity : 0(1)

**if a problem has a solution Brute Force will find it no matter how many time it takes**

Sequential Search, also called linear search, is the simplest of all searching algorithms. It is a brute-force approach
 to locating a single target value,

### Ternary Search

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

![Untitled](Searching%20ec093fb54b7243cbba6c1879a0e0b33f/Untitled%202.png)

![Untitled](Searching%20ec093fb54b7243cbba6c1879a0e0b33f/Untitled%203.png)

![Untitled](Searching%20ec093fb54b7243cbba6c1879a0e0b33f/Untitled%204.png)

![Untitled](Searching%20ec093fb54b7243cbba6c1879a0e0b33f/Untitled%205.png)