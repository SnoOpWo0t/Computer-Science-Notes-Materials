# LinkedList

- **Difference between Dot(.) and Arrow(->) operator:**
    
    **`(pointer_name)->(variable_name)`**
    
    The Dot(.) operator is used to normally access members of a structure or union.
    
    The Arrow(->) operator exists to access the members of the structure or the unions using pointers.
    
    **Dot Operator (.):**
    
    - The dot operator is used when you have a direct object of a struct or class.
    - It allows you to access the members or variables of the object directly.
    - You don't need to use a pointer to access members with the dot operator.
    
    **Arrow Operator (→):**
    
    - The arrow operator is used when you have a pointer to an object of a struct or class.
    - It allows you to access the members or variables of the object through the pointer.
    - You must use the arrow operator when working with pointers to access members.

- **How to traverse a linked list?**
    
    Step by step descriptive logic to traverse a linked list.
    
    1. Create a temporary variable for traversing. Assign reference of  node to it, say `temp = head`.
        
        head node
        
    2. Repeat below step till `temp != NULL`. /*head node ≠NULL*/ 
    3. `temp->data` contains the current node data. You can print it or can perform some calculation on it.
    4. Once done, move to next node using `temp = temp->next;`.
    5. Go back to 2nd step.
    
    ![code.png](LinkedList%2051e65813afd041fe8c5b94694fc9c3cd/code.png)
    

- **LinkedList**
    
    <aside>
    💡 we can use li**nked List both in Queue and Stack**
    
    we can use linked list to mimic  as **LIFO way** and **FIFO way**
    
    </aside>
    
    ```
    System.out.println(linkedlist.peekFirst());
           System.out.println(**linkedlist.peekLast()**);
           linkedlist.**addFirst("element ");**
           linkedlist.addLast("element ");
           String **first =Object name.removeFirst();**
    ```
    
    Each node in a linked list c**ontains two components: data a**nd a **reference to the next nod**e. The first node in the list is ***head,*** and the **last** node typically has a **reference to null** or is considered the t***ail.***
    
    There are several variations of linked lists, 
    
    - ***Singly* linked** lists: Each node contains a reference to the next node. **[data | next node address]**
    - ***Doubly* linked** lists: Each node contains references to both the next and previous nodes, allowing for traversal in both directions.  **[previous address |data | next address]**
    - ***Circular* linked** lists: The last node's reference points back to the first node, creating a circular structure.
    1. Linked lists are dynamic data structures with nodes connected by links. 
    2. They **offer efficient insertion and deletion** but use more memory than arrays but it has now/low memory waste . 
    3. Random access is slower, and extra operations are needed for link manipulation. 
    
    Despite these drawbacks, linked lists are widely used in applications, providing flexibility and efficiency for frequent insertions or deletions, especially when arrays are less suitable.
    

- Doubly LinkedList
    
    

## Singly LinkedList