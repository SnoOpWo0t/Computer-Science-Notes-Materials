# Graph Traversal

- **Two standard ways –**
    1. **Adjacency List :** The list includes only nodes that are directly connected to the starting
    node
    2. **Adjacency Matrix :**
    
    ![Untitled](Graph%20Traversal%20d43bf6dee0ad4f6d9286eb3d3db5649d/Untitled.png)
    
    ![Untitled](Graph%20Traversal%20d43bf6dee0ad4f6d9286eb3d3db5649d/Untitled%201.png)
    
    ![Untitled](Graph%20Traversal%20d43bf6dee0ad4f6d9286eb3d3db5649d/Untitled%202.png)
    
    ![Untitled](Graph%20Traversal%20d43bf6dee0ad4f6d9286eb3d3db5649d/Untitled%203.png)
    

### Trees

  **Tree:** Connected Acyclic Undirected graph
• **Forest:** If an undirected graph is acyclic but disconnected, it is a forest
**• Spanning Tree:** is a tree which includes all of the vertices of the
graph

![Untitled](Graph%20Traversal%20d43bf6dee0ad4f6d9286eb3d3db5649d/Untitled%204.png)

---

**Connected Components :**

- An undirected graph is connected if there is a path between every
pair of vertices.
• A connected component of an undirected graph is a maximal set of
nodes such that each pair of nodes is connected by a path.

---

- **Directed**
    
    **Directed: T**he edges in a directed graph have a direction, meaning if
    there is an edge from vertex u to vertex v, it does not necessarily
    imply the existence of an edge from v to u.
    
- **Undirected**
    
    **Undirected:** The edges in an undirected graph have no direction,
    meaning if there is an edge between vertex u and vertex v, there is
    also an edge between vertex v and vertex u.
    
- **Weighgted**
    
     Weighted: The edges are associated with a numerical weight or cost
    

---

---

---

### Breadth First  Search

1. **Queue is used**
2. jei vertice niye kaj korbo tar adjacent vertices queue te insert hobe
3. already visited vertices notun kore insert hobena.
4. inserted vertices reapeat hobena
5. **find the shortest graph in the unweighted graph**
6. **one vertex at a time**
7. expand frontier of explored vertices
8. pick a source vertex to be a root
9. find it’s children and then their children

![Untitled](Graph%20Traversal%20d43bf6dee0ad4f6d9286eb3d3db5649d/Untitled%205.png)

### DEPTH FIRST SEARCH

1. **Stack is used**
2. BackTracking
3. Tropological sort
4. find strongly connected components

## Edge Classification

**Tree edge :** DFS apply er opr jei node pabo

**Forward EDGE :** from ancestor to descendent
(**X appears before Y we’’ll know this by checking starting time. lesser time means appears before, and there is a path from X to Y**)

**Back Edge :**from descendent to ancestor…. (**Y appears before X we’’ll know this by checking starting time. lesser time means appears before, and there is a path from Y to X**)

**Cross edge : b**etween a tree or subtrees… Edge will be (X,Y) but there’ll **be no path**

**Self loops are considered as to be back edge.**