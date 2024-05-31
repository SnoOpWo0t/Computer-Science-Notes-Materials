# Recursion

- **Recursion | recursive call | base case (We Strop the recursion through this case)**
    - Base case a oi value thakbe jar pore recursion theme jabe
    
    ```cpp
    
    int fact(int n)
    {
         if(n==1)
         return 1;
         else 
         return n*fact(n-1);
    }
    int main ()
    {
         int factorial = fact(4);
         cout <<factorial ;
       
         getch ();
         return 0;
    }
    ```
    
    [C++ Bangla Tutorials 61 : Recursion | recursive call | base case](https://youtu.be/DWEvTfsTsH4)
    

### cause of infinite Recursion

- infinite recursion :
1. problem not getting smaller(bad decomposition)

![Untitled](Recursion%206fff4d067da64c23bc14ccf191a927df/Untitled.png)

![Untitled](Recursion%206fff4d067da64c23bc14ccf191a927df/Untitled%201.png)

1. FiobonaCCI

```
public static int fibonacci(int n)
    {
        int fib;
        if(n>2)
        fib = fibonacci(n-1)+ fibonacci(n-2);
        else if (n==2)
        fib = 1;
        else
        fib = 0;
        return fib;
    }
```