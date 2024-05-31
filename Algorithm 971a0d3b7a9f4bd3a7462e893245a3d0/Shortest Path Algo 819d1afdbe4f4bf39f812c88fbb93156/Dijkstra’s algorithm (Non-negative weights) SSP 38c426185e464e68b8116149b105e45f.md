# Dijkstra’s algorithm (Non-negative weights) SSP

- ***Dijkstra :*** Also Known as MINIMIZATION ALGO . This algorithm is used for finding Shortest path (Single source ). it uses **GREEDY approach**
- in Dijkstra Algo  Values **can’t** be in **NEGATIVE**

### Relaxation

Representing the cost of a relaxed edge v mathematically,

> d[v] = min{ d[v], d[u] + c(u, v) }
> 

<aside>
💡 if,   **  d(U) + C(u,v)   <   d(v)
         d(V) = d(U) + C(U,V)
when we founded shortest path for all veritces:
 d(V) ≤ C(U,V)
timee complx exponential**

</aside>

Here :
Cost || Weight = C || W

[Edge Relaxation Property for Dijkstra’s Algorithm and Bellman Ford's Algorithm - GeeksforGeeks](https://www.geeksforgeeks.org/edge-relaxation-property-for-dijkstras-algorithm-and-bellman-fords-algorithm/)

- There are **3 Shortest path Variants**
    1. **Single source Shortest Path (SSSP):** from one vertext to every other 
    *exmple* **:** dhaka theke puro bangladesh er jekono sohorer shortest path
     1. Dijkstra ALgo
      2. BElman-Ford Algo
    2. ***Source - Sink Shortest path***  : From one vertext to anither
    *exmple* : specifically dhaka theke jessore || dhaka theke khulnar shortest path ki
    3. **All pairs Shortest path** : between all pairs of certices/nodes
     * Floyd-Warshall AlGO

---

**Greedy :**

[Dijkstra's Algorithm for Directed graph | Data Structure & Algorithm | Bangla Tutorial](https://www.youtube.com/watch?v=p0MUtpaw1ks)

[Dijkstra's Algorithm for Undirected graph | Data Structure & Algorithm | Bangla Tutorial](https://www.youtube.com/watch?v=bHolUy5sqq8)

[L-4.10: Dijkstra's Algorithm - Single Source Shortest Path - Greedy Method](https://youtu.be/Gd92jSu_cZk?si=4K30t6QmTAlWwie4)

[CSE 207 - Online Makeup Class (Greedy, Graph, SSSP) - 22/03/24](https://www.youtube.com/watch?v=CVlzmZyWPao)

---

## Dijkstra ALgorithm

To find the shortest path from a source city to all other cities in a network, we can use Dijkstra's algorithm. Dijkstra's algorithm is a greedy algorithm that finds the shortest path between a single source node and all other nodes in a weighted graph.

**Explanation:**

1. The `dijkstra` function takes a graph (represented as an adjacency dictionary) and a source node as input.
2. It initializes a dictionary `distances` to store the shortest distance from the source node to each node, initially set to infinity (except for the source node, which is set to 0).
3. A priority queue `pq` is created, initialized with the source node and a distance of 0.
4. The algorithm repeatedly extracts the node with the smallest distance from the priority queue (`current_node`).
5. For each neighbor of `current_node`, it calculates the new distance to that neighbor by adding the weight of the edge between `current_node` and the neighbor to the current distance of `current_node`.
6. If the new distance is smaller than the previously recorded distance for the neighbor, the distance is updated, and the neighbor is added to the priority queue with the new distance.
7. After processing all nodes, the `distances` dictionary contains the shortest distances from the source node to all other nodes.

In the example usage, we define a graph representing a network of cities connected by highways, with the distances between cities as weights. We then call the `dijkstra` function with the source city 'Dhaka' and print the shortest distances from Dhaka to all other cities.

The output will be:

```
Copy codeShortest distances from Dhaka:
Dhaka: 0
Chittagong: 242
Sylhet: 312
Cox's Bazar: 362
Srimangal: 421

```

This algorithm has a time complexity of O((V + E) log V), where V is the number of nodes (cities) and E is the number of edges (highways). It's efficient for reasonably sized graphs and can be used to find the shortest paths in various applications, such as transportation networks, social networks, and communication networks.

To find the shortest path from your city to all other cities in Bangladesh, you can use Dijkstra's algorithm, which is a popular algorithm for finding the shortest paths between nodes in a graph with non-negative edge weights. Here's the algorithm:

1. **Initialize:** Set the distance of the source city to 0 and all other cities' distances to infinity. Create an empty priority queue (or min-heap) to store cities ordered by their distances.
2. **Enqueue Source City:** Enqueue the source city into the priority queue with its distance as the priority.
3. **Dijkstra's Algorithm:**
    - While the priority queue is not empty:
        - Dequeue a city from the priority queue (let's call it current city).
        - For each neighboring city of the current city:
            - Calculate the tentative distance from the source city to the neighboring city through the current city.
            - If the tentative distance is less than the known distance to the neighboring city:
                - Update the distance of the neighboring city to the tentative distance.
                - Enqueue the neighboring city into the priority queue with its updated distance as the priority.
4. **Output:** After the algorithm terminates, the distances to all cities from the source city will be calculated.

This algorithm finds the shortest path from your city to all other cities in Bangladesh efficiently. You can implement it using a priority queue data structure to ensure that the city with the smallest distance is dequeued first in each iteration, optimizing the search process.

### Dijkstra's algorithm:

1. Initialize a distance array to store the shortest distance from the source city to all other cities.
2. Initialize a priority queue to store the cities to be visited based on their distances.
3. Initialize the distance of the source city to itself as 0 and all other distances as infinity.
4. Add the source city to the priority queue.
5. While the priority queue is not empty, do the following:
    - Extract the city with the minimum distance from the priority queue.
    - Update the distances of the neighboring cities based on the current city's distance and the highway distances.
    - Add the neighboring cities to the priority queue if their distances are updated.
    - Repeat the process until all cities are visited.
6. Return the distance array containing the shortest distances from the source city to all other cities.