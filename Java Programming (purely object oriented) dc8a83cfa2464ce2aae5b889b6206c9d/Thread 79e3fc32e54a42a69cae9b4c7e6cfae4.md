# Thread

threads are used to execute multiple tasks concurrently. 

- We can create Thread in **2** ways
** By **impleamenting** Thread  —> Implement **Runnable interface** and pass instance as an argument to Thread()
** By E**xtending** Thread —> Create a SubClass of a THREAD
- Runnable interface has only one method that is run() . and start() method is under Thread class so , to access start method ()
- **Main** is also a Thread
- **Default priority for Main thread is always : 5**
- **Daemon thread** in Java is **a low-priority thread that performs background operations such as garbage collection, finalizer, Action Listeners, Signal dispatches, etc**. Daemon thread in Java is also a service provider thread that helps the user thread
- 

The `join()` method in Java is used to wait for a thread to complete its execution. When a thread calls  on another thread, it waits until that thread finishes before continuing its own execution. It ensures that threads synchronize and execute in a desired order, making it useful for scenarios where the order of execution matters.
 **Thread1.join() dile prothome thread 1 complete hobe tarpore onno thread chalu hobe**

- **Difference Beetween Daemon Thread and User Thread**
    
    Daemon Threads:
    
    - Daemon threads are background threads in Java.
    - They don't prevent the program from exiting.
    - JVM terminates when all user threads finish, regardless of daemon threads.
    
    User Threads:
    
    - User threads are the main threads created for specific tasks.
    - JVM waits for user threads to complete before exiting.
    - They are essential for the application's functionality.
- **T*hread Lifecycle:***
    1. **New:** When a thread is created but not yet started.(born state)
    2. **Runnable:** When a thread is ready to run, it moves to the runnable state.(Ready state)
    3. **Blocked:** When a thread is blocked, waiting for a monitor lock.(Waiting state)
    4. **Waiting:** When a thread is waiting indefinitely for another thread to perform a particular action.
    5. **Timed Waiting:** When a thread is waiting for another thread to perform a particular action within a stipulated amount of time.
    6. **Terminated:** When a thread exits.(dEAD sTATE)
    
    [Multithreading- by implementing Runnable interface in java](https://www.youtube.com/watch?v=QW1cFRXR9u8&list=PLqleLpAMfxGARB5Xa4Baa0lpRlUvZVJH8&index=4)
    
    [thread life cycle in java | Learn Coding](https://www.youtube.com/watch?v=UTUyJFvXeK4)
    

[Multithreading- by extending Thread class in java](https://www.youtube.com/watch?v=wqJocu5yPY0)

- **Thread Scheduler**
    
    Thread Schedular is the part of processor which executed multiple thread on,in  single processor randomly
    
- **Sleep()  vs  join()**
    
    **Sleep:** it is used to put a thread into temporary waiting state
    
    sleep is static method of thread class which throws checked exception i.e InterruptedException .  i[t](http://InterruptedException.it) puts thread in temporary waiting state
    
    **join() :** used to put the parent thread into temporay state till the completiotion of child thread
    
- ****multithreading problems and solutions****
    
    Multithreading is good when we want to complete our task as soon as possible . it may provide some wrong results, this situation occurs whenever  same resources is accessible by multiple thread at the same time
    
- **Synconization :**
    
    Synchonization is a technique through which we can control multiple thread on among the no of thread only one thread will enter inside the Synchonized area.
    
    the main purpose of synchonization is to overcome the multiple thred are trying 
    
    Synchonization is clasified int**o 2 c**ategories : 
    **1.** method level Synchonization **2.** block level Synchonization (best)
    
    public **synchonised  void run ( this )
    {
    }**
    
    [multithreading problems and solutions in java | synchronization in java](https://www.youtube.com/watch?v=NVMlz9rZ6cE&list=PLqleLpAMfxGARB5Xa4Baa0lpRlUvZVJH8&index=17)
    
    - Method Lvel Synchonization
        
        Every object have a lock in java and this lock can be given to only one thread at aall the time
        
    - ****static synchronization****

- Creating Threads:
    
    ### 1. **Extending the Thread class:**
    
    You can create a thread by extending the `Thread` class and overriding the `run` method.
    
    ```java
    class MyThread extends Thread {
        public void run() {
            // Code to be executed in this thread}}
    
    // Create and start the thread
    MyThread myThread = new MyThread();
    myThread.start();
    
    ```
    
    ### 2. **Implementing the Runnable interface:**
    
    You can create a thread by implementing the `Runnable` interface and passing an instance of your class to the `Thread` constructor.
    
    ```java
    class MyRunnable implements Runnable {
        public void run() {
            // Code to be executed in this thread }}
    
    // Create a Runnable object
    MyRunnable myRunnable = new MyRunnable();
    
    // Create and start the thread
    Thread thread = new Thread(myRunnable);
    thread.start();
    
    ```
    
    ### Thread Synchronization:
    
    To avoid conflicts when multiple threads access shared resources, you can use synchronization techniques like `synchronized` methods or blocks.
    
    ### Synchronized Method:
    
    ```java
    class Counter {
        private int count = 0;
    
        public synchronized void increment() {
            count++;}}
    
    ```
    
    ### Synchronized Block:
    
    ```java
    class Counter {
        private int count = 0;
    
        public void increment() {
            synchronized(this) {
                count++;}}}
    
    ```
    
    ### Thread Communication:
    
    Threads can communicate with each other using methods like `wait()`, `notify()`, and `notifyAll()`.
    
    ```java
    class SharedResource {
        private boolean flag = false;
    
        public synchronized void produce() {
            while (flag) {
                try {
                    wait();
                } catch (InterruptedException e) {
                    e.printStackTrace();}}
            // Produce the resource
            flag = true;
            notify();
        }
    
        public synchronized void consume() {
            while (!flag) {
                try {
                    wait();
                } catch (InterruptedException e) {
                    e.printStackTrace();}}
            // Consume the resource
            flag = false;
            notify();}}
    
    ```
    
    ### Thread Termination:
    
    A thread can be terminated by using the `interrupt()` method or by exiting the `run()` method.
    
    ```java
    class MyThread extends Thread {
        public void run() {
            while (!isInterrupted()) {
                // Code to be executed in this thread}}}
    // Terminate the thread
    myThread.interrupt();
    ```
    

This is a basic overview of working with threads in Java. There are more advanced topics like thread pools, Callable and Future, and Java's `java.util.concurrent` package, which provides high-level concurrency utilities. Let me know if you need more specific information or examples related to Java threads!