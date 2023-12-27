# Collections

### **Predefined Classes and Interfaces**

- **Collection**
•dynamic array. No size limitation
•Need explicit casting while retrieving data.
•Not type safe.
- Algorithms operate on collections and are defined as static
methods within the Collections class.
•Thus, they are available for all collections.
•Each collection class need not implement its own versions.
•The algorithms provide a standard means of manipulating collections.
- All collections **frameworks contain** the following:
•**Interfaces**
•These are abstract data types that represent collections. Interfaces
allow collections to be manipulated independently of the details of their
representation.
**•Implementations**, i.e., Classes
•These are the concrete implementations of the collection interfaces. In
essence, they are reusable data structures.
**•Algorithms**
•These are the methods that perform useful computations, such as
searching and sorting, on objects that implement collection interfaces.
•The algorithms are said to be polymorphic:
•that is, the same method can be used on many different implementations of
the appropriate collection interface.

### There are only three methods in the Iterator interface.

They are:

- •public boolean hasNext() it returns true if iterator has more elements.
•public object next() it returns the element and moves the cursor pointer to
the next element.
•public void remove() it removes the last elements returned by the iterator.
It is rarely used.

- Collection (sometimes called a container) is an object that
holds other objects that are accessed, placed, and
maintained under some set of rules.
- 

![Untitled](Collections%20d12764b00e02448badd77cb1e35151b7/Untitled.png)

### Lists

1. ArrayList
2. vector
3. stack 

### Map

- **Map are not true collections.**.
- is an object that maps keys to values
•cannot contain duplicate keys:
•Each key can map to at most one value.

### Set

1. HashSets
2. LinkedHashsets