# Minimum Spanning Tree

- We need to take the minimum Weights from weigthed Graph  → to create minimum spanning Trree
- **Subset of a Graph 
V’ = V [**jei koita vertices deya thakbe subset a o  oikoita vertices thakbe]
**E’(edge** ) = number of vertex **- 1**]
- **MST Properties :**
    - **NO Cycle**
        - **NO disconnected VErtices**
        - **Can;t delete or add new Edges**
        
        ![Untitled](Minimum%20Spanning%20Tree%20c20f906cb5f544beb95f8781bb42d604/Untitled.png)
        

1. to check how many Spanning Tree :  **E**
 E = number of edge                            **C**
 **E’**  = number of vertex **- 1**]                      **E’**
2. to check how many Spanning Tree :  **E**
 E = number of edge                            **C      -  (Number Of Cycle)**
 **E’**  = number of vertex **- 1**]                      **E’**

### In Case of Complete Graph

A complete digraph is a directed ***graph in which every pair of distinct vertices is connected by a pair of unique edges*** (one in each direction

**Remove edge :>**  **E - V+1**

**No of Mst :** 

![Untitled](Minimum%20Spanning%20Tree%20c20f906cb5f544beb95f8781bb42d604/Untitled%201.png)

### **Kruskal's Algorithm for Minimum Spanning Tree (MST)  ✔**

Kruskal's algorithm is a classical algorithm in computer science and graph theory used to find the minimum spanning tree of a connected, undirected graph. The problem that Kruskal's algorithm solves is **the determination of the minimum spanning tree of a graph**

**Kruskal can have better performance if the edges can be sorted in linear time, or are already sorted**. Prim's better if the number of edges to vertices is high

- (1 )**Properties :**
    - Need to delete Loop From Graph
        - Need to delete Parallel Edge From Graph**(**and take minimum weighted edge if edges are weighted )
        - Can’t Take any Cycle in new graph

- (2) **Create a New graph USing Kruskal :**
    - Need to Sort the Edges
    - Follow MST PRoperties
    - if any edges causes Cycle Skip THat

### **Dijkstra's Algorithm**

**For Undirected :**

- **if (d(u) + c(U,V)  < d(V)** )  t**$hen,$**
**d(V) = d(U) + c(U,V)** (distance of vertice + cost for distance for vertices)

### Dijkstra ALgorithm

- cant accurately provide answers for negative numbers

### **Prim's Algorithm for  (MST) follow greedy ✔**

- (1 )**Properties similar to kruskal :**
    - Need to delete Loop From Graph
        - Need to delete Parallel Edge From Graph**(**and take minimum weighted edge if edges are weighted )
        - Can’t Take any Cycle in new graph

- (2) **Create a New graph USing Prim’S:**
    - can Start with random VErtice(v1) then take the smallest Outgoing edge(v2)
    - Then again check for the smallest outgoing  edge from Both V1 and v2
    - repeat
    - Follow MST PRoperties
    - if any edges causes Cycle Skip THat

### Bellamn - Ford Algo Single source shortest path)

- Belmman ***works with negative value***

Go on relaxing with all edges
***relaxation :***

if ( d(U) + c(U , V) < d(V)
        d(V) = d(U) + C(U,V)

**Iteration ;**

(N - 1) [N = no of vertices]