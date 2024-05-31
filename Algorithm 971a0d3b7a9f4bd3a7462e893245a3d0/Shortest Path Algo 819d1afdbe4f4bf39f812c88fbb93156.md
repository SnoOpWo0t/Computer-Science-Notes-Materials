# Shortest Path Algo

---

[Dijkstra’s algorithm (Non-negative weights) SSP](Shortest%20Path%20Algo%20819d1afdbe4f4bf39f812c88fbb93156/Dijkstra%E2%80%99s%20algorithm%20(Non-negative%20weights)%20SSP%2038c426185e464e68b8116149b105e45f.md)

[Bellman-Ford (No negative-Cycle)](Shortest%20Path%20Algo%20819d1afdbe4f4bf39f812c88fbb93156/Bellman-Ford%20(No%20negative-Cycle)%2021cf2b6cd0e94eada9d8bb08c6e868ef.md)

---

- Dijkstra's shortest path algorithm  ✔

![Untitled](Shortest%20Path%20Algo%20819d1afdbe4f4bf39f812c88fbb93156/Untitled.png)

- There are **3 Shortest path Variants**
    - **Single Source Shortest Path (SsSP)**  **:** from one vertex to every other
    • Dijkstra's Algorithm
    • Bellman-Ford Algorithm
    *exmple* **:** dhaka theke puro bangladesh er jekono sohorer shortest path
    - **Source-Sink shortest path:** From one vertex to another
    - **All pairs shortest path**: between all pairs of vertices/nodes
       • Floyd-Warshall Algorith
    
         
    

---

 ✔ Naïve Solution : 

- **Naïve Solution : i**nvolves using basic algorithms that may not be optimal for all types of graphs.
    
    The **Single Source Shortest Path (SSSP)** problem aims to find the shortest path from a single source node to all other nodes in a given graph. In other words, it calculates the minimum distance from the source node to every other node in the graph.
    
    Here are some **naïve** approaches for solving the SSSP problem:
    
    1. **Depth-First Search (DFS)**:
        - DFS recursively explores adjacent nodes until it reaches a depth where no more valid recursive calls are possible.
        - For DFS to be used as a shortest path algorithm, the graph needs to be **acyclic** (i.e., a tree). It won’t work for cyclic graphs because due to cycles, the destination node can have multiple paths from the source node, and DFS won’t be able to choose the best path.
        - If there does not exist a path between the source node and the destination node, we can store **1** as the shortest path between those nodes.
        - Algorithm:
            - Initialize the distance of the source node to itself as **0**.
            - Start DFS from the source node.
            - [As we visit neighboring nodes, set their distance from the source node as the sum of the edge weight and the distance of the parent node1](https://www.geeksforgeeks.org/shortest-path-algorithms-a-complete-guide/).
    2. **Breadth-First Search (BFS)**:
        - BFS explores nodes level by level, starting from the source node.
        - It works well for unweighted graphs.
        - The distance of each node from the source node is calculated.
        - BFS guarantees that the first time we visit a node, it is via the shortest path.
        - Algorithm:
            - Initialize the distance of the source node to itself as **0**.
            - Enqueue the source node.
            - While the queue is not empty:
                - Dequeue a node.
                - For each neighboring node:
                    - If its distance is not set (i.e., it hasn’t been visited yet), set its distance as the distance of the current node plus one.
                    - Enqueue the neighboring node.
            - [Repeat until all nodes are visited1](https://www.geeksforgeeks.org/shortest-path-algorithms-a-complete-guide/).
    3. **Multi-Source BFS**:
        - Similar to BFS, but with multiple source nodes.
        - Useful when there are multiple starting points or sources.
        - [The algorithm computes the shortest path from each source node to all other nodes in the graph1](https://www.geeksforgeeks.org/shortest-path-algorithms-a-complete-guide/).
    
    These naïve approaches have limitations and may not be optimal for all types of graphs. [More sophisticated algorithms like **Dijkstra’s algorithm** and **Bellman-Ford algorithm** provide better solutions for the SSSP problem in various scenarios1](https://www.geeksforgeeks.org/shortest-path-algorithms-a-complete-guide/).
    
    The **Naïve Solution** for the **Single Source Shortest Path (SSSP)** problem involves using basic algorithms that may not be optimal for all types of graphs. Let’s explore one such approach:
    
    1. **Depth-First Search (DFS)**:**Python**
        - DFS recursively explores adjacent nodes until it reaches a depth where no more valid recursive calls are possible.
        - For unweighted graphs, DFS can find the shortest path, but it won’t work well for weighted graphs with different edge costs.
        - If edges have different costs, BFS generalizes to **uniform-cost search**.
        - A variant of uniform-cost search is **Dijkstra’s algorithm**, which efficiently finds the shortest paths from a single source node to all other nodes in a graph.
        - Dijkstra’s Algorithm is based on the principle of **relaxation**, gradually replacing overestimated distances with more accurate values until the shortest distance is reached.
        - It uses a **priority queue** to greedily select the closest vertex that has not yet been processed and performs relaxation on its outgoing edges.
        - Here’s the pseudocode for Dijkstra’s Algorithm:
        
        `function Dijkstra(Graph, source):
            dist[source] = 0  # Initialization
            create vertex set Q
            for each vertex v in Graph:
                if v != source:
                    dist[v] = INFINITY  # Unknown distance from source to v
                    prev[v] = UNDEFINED  # Predecessor of v
                Q.add_with_priority(v, dist[v])
            while Q is not empty:
                u = Q.extract_min()  # Remove minimum
                for each neighbor v of u that is still in Q:
                    alt = dist[u] + length(u, v)
                    if alt < dist[v]:
                        dist[v] = alt
                        prev[v] = u
                        Q.decrease_priority(v, alt)
            return dist, prev`
        
        AI-generated code. Review and use carefully. [More info on FAQ](https://www.bing.com/new#faq).
        
        - [In this algorithm, **`dist`** represents the minimum distance from the source node to each vertex, and **`prev`** keeps track of the predecessors in the shortest path1](https://www.techiedelight.com/single-source-shortest-paths-dijkstras-algorithm/).
    
    Remember that Dijkstra’s Algorithm is more efficient than naïve approaches like DFS or BFS for finding shortest paths in weighted graphs with varying edge costs. It guarantees the shortest path and works well even when edge weights differ.