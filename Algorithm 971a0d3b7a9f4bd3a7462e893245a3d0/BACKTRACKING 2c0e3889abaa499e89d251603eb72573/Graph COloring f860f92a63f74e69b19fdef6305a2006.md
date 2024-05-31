# Graph COloring

Graph coloring is a process of assigining color to the vertex of a graph, it ensures that no two adjacent vetices of the graph are colored with same color
***Application examples***: scheduling, register allocation in a
microprocessor, frequency assignment in mobile radios, and pattern
matching.

### **Chromatic number:**

***Minimum number* of colors needed to c olor the graph.**
**K-Colorable:** A graph that can be assigned a (proper) k-coloring is
k-colorable, and it is k-chromatic if its chromatic number is exactly k.

**Planar Graph:** A graph that be drawn in a plane without edge-crossings.
**The Four Color Theorem:** the chromatic number of a planar graph is no greater than(≤) 4.

### Note

- chromatic number of Null graph is 1
- chromatic nukber of complete graph k , nvertices is n
- if graph is n vertices
    - if  **n** is even , its 2 chromtic number
    - if n is ODD its 3 chromatic

[Graph Theory | Graph Coloring & Chromatic Number of Graph | Discrete Mathematics by GP Sir](https://youtu.be/HKRFK8W5JlE?si=-ErYrj6Dd5KmRdlS)

### Vertex Coloring Backtracking – Time Complexity

Time complexity → O(mv)

m: number of colors

v: number of vertices

For small graphs the backtracking approach is ok.

Graph coloring problem is known as the NP-Hard problem.

We’ll learn NP-Hard later in week 14.

---

[CSE 207 - Online Makeup Class (Lecture 6) - 03/04/24](https://www.youtube.com/watch?v=fcGtiLMPJuY)

---

### **Graph Coloring Problem Backtracking algorithm**

here the goal is to assign colors to the vertices of a graph such that no two adjacent vertices have the same color. The Backtracking algorithm is a common approach to solve this problem.

Here's a step-by-step explanation of the Backtracking algorithm for solving the Graph Coloring Problem:

1. **Initialize**: Start with an empty coloring assignment, where no vertex has been assigned a color yet.
2. **Choose a Vertex**: Select an uncolored vertex to assign a color to.
3. **Try a Color**: Attempt to assign the first available color to the selected vertex.
4. **Check Constraints**: Verify that the chosen color does not conflict with the colors of the vertex's adjacent/neighbors. If the color assignment is valid, proceed to the next step. ***Otherwise, go back to step 3 and try a different color.***
5. **Recursively Solve**: Recursively call the algorithm to assign colors to the remaining uncolored vertices.
6. **Backtrack**: If the algorithm reaches a point where no valid color can be found for a vertex, backtrack to the previous vertex and try a different color assignment.
7. **Solution Found**: If the algorithm successfully assigns colors to all vertices without any conflicts, a valid solution has been found.

---

![Untitled](Graph%20COloring%20f860f92a63f74e69b19fdef6305a2006/Untitled.png)