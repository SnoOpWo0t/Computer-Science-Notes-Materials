# Job Sequencing with Deadline

### Introduction

- **Job Sequencing with Deadline** is also a problem in combinatorial optimization.
- Here you are given a set of **n** jobs, where each job **i** has a deadline **di** and a profit **pi**.
- The profit **pi** is earned if the job is completed on or before the deadline.
- Only one job can be scheduled at a time.
- The objective is to find the maximum profit that can be earned by scheduling the jobs.
- This problem can be solved using **Greedy Algorithm**.

### Time Complexity

- Best Case Time Complexity: **O(nlogn)**
    - Average Case Time Complexity: **O(nlogn)**
- Worst Case Time Complexity: **O(nlogn)**
- Space Complexity: **O(n)**

---

### **Greedy approach & ALgorithm JSC**

![Untitled](Job%20Sequencing%20with%20Deadline%208a031a00bdbb47e5a22da28536bebf2e/Untitled.png)

- The Optimal Solution is to schedule the jobs in the following order: **5, 1, 3**.
- The output will be **142**.
- First, we will sort the jobs in Descending order of their profits.
- Then we have to initialize an ***empty schedule*** and an array to keep track of the slots.
- We will iterate through the jobs and for each job, we will find the latest slot available before the deadline and assign the job to that slot. We have to do the following:
    - Assign the job to the latest slot available before the deadline.(NEAREST TO DEADLINE)
    - If the slot is available, we will assign the job to that slot and mark the slot as occupied.
    - If the slot is not available, we will move to th*e **previous slot** a*nd repeat the process until we find an available slot.
    - **If no slot is available, we will skip the job.**
- Finally, we will calculate the total profit earned by scheduling the jobs.
- The output will be the total profit earned.
- Ghant chart/ schedule

![Untitled](Job%20Sequencing%20with%20Deadline%208a031a00bdbb47e5a22da28536bebf2e/Untitled%201.png)

![PLACEHOLDER_image1.gif](Job%20Sequencing%20with%20Deadline%208a031a00bdbb47e5a22da28536bebf2e/PLACEHOLDER_image1.gif)

### Algorithm

1. sort profit into decreasing order 
2. intialize an empty schedule where e’ll assign the jobs
3. iterate through the list of sorted jobs 
4.  assign each job to the last available tiime slot taht satisfied deadline

5. if the sort is already occupied move to the previous  slot ubtil a suitable slot found
6. if no slot is found ignore the job

- The **JobSequencing** function sorts the jobs in descending order of their profits and initializes an empty schedule and an array to keep track of the slots.
    - Then it iterates through the jobs and for each job, it finds the latest slot available before the deadline and assigns the job to that slot.
- Finally, it calculates the total profit earned by scheduling the jobs and returns the total profit earned.

- **Pseudocode**

---

### **Job Sequencing Algorithm with Deadlines|**

[Job Sequence with Deadlines-Greedy Algorithm | Bangla](https://youtu.be/_fFljp7z9Y4?si=7omvXqDoTqIgR_Lr)

![Untitled](Untitled%204.png)

[L-4.5: Job Sequencing Algorithm with Example | Greedy Techniques](https://youtu.be/Tpp7o0jQ-8w?si=I3iP5ckD8vQO2qZm)

[3.2 Job Sequencing with Deadlines - Greedy Method](https://www.youtube.com/watch?v=zPtI8q9gvX8)

[Job Sequencing Algorithm with Deadlines| Greedy Method| Data structure & Algorithm | Bangla Tutorial](https://youtu.be/qdEK7vyHS6c?si=ZbFtIvubnVNREfbs)

---