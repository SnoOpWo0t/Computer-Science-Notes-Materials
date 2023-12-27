# Basic C programming

[C ,C++LOOPS](Basic%20C%20programming%20062b603d62be4fbfa250b5776bb070b9/C%20,C++LOOPS%20a43a81a9f00a47d094b0e3fbc81920ff.md)

[****Structures, Unions & Enums****](Basic%20C%20programming%20062b603d62be4fbfa250b5776bb070b9/Structures,%20Unions%20&%20Enums%20920e20ea11824905a195abac4ff552cb.md)

[Function Intro](Basic%20C%20programming%20062b603d62be4fbfa250b5776bb070b9/Function%20Intro%20eac9fdd4bd8544e185548c3d6973225d.md)

[ARRAY INTRODUCTION](Basic%20C%20programming%20062b603d62be4fbfa250b5776bb070b9/ARRAY%20INTRODUCTION%204468a7b89d3047a4a9b1a7b96395115b.md)

[String Input & Introduction ](Basic%20C%20programming%20062b603d62be4fbfa250b5776bb070b9/String%20Input%20&%20Introduction%20a1a07a5c0e324efdaecd228c132e5237.md)

---

---

### Why you should use bits/stdc++.h

we  ****use bits/stdc++.h**** because it include 4 or couple of header files like. 

but as its contains so many header file it’ll take longer Execution  time to run

1. #include<algorithm>
2. #include<sort>
3. #include<set>
4. #include<iostream>
5. #include<iomanip>
- **Formatting Output :**
    
    to show **“Show point”**      
    cout<<showpoint ;
    
    not showing show point
    cout<<noshowpoint ;
    doshomik er porer number count er jonne **fixed precision**
    cout<<fixed;
    **set pecision** 
    
    cout<<setprecison(10);
    **to fix the width of text
    cout<<setw(value)<< other text**
    
    ![318982832_619560716639323_2131812744604238043_n.jpg](Basic%20C%20programming%20062b603d62be4fbfa250b5776bb070b9/318982832_619560716639323_2131812744604238043_n.jpg)
    
    [setprecision Stream Manipulator | C++ Tutorial](https://youtu.be/lWSoZMggqco)
    

- **Reverse Any digit :**
    
    1.first take a input
    
    1. a variable = 0
    2. a loop and the condition input >0
    3. inside loop con 
    4. 1 rem = input%10      // **any number % 10 = last digit of that number**
    2 rev = rev*10+rem
    3 n=n/10
    
    [Reverse number program using for loop | C++ Tutorial for Beginners in Hindi 30](https://www.youtube.com/watch?v=dHO8EYe_pFI&ab_channel=CSEngineeringGyan)
    
- **Vowel & consonant :**Variable =  tolower(ch); ——-for lowercase | variable = toupper (ch); ——- for uppercase (**only works with characters not string**)
    
    
    [https://www.youtube.com/watch?v=GQzoDZIs1RI&ab_channel=AnisulIslam](https://www.youtube.com/watch?v=GQzoDZIs1RI&ab_channel=AnisulIslam)
    
- **Branching :**
    
    Nested if is - And logic 
    
    1. If else ladder is - OR logic 
    2. If, else if has 2 type of streach :  1. vertical 2. horizontal.
    
    In if else the condition must be in boolean expression
     *each function, while, do, else, elseif… **statement is a “branch”**
    . Each “branch” can have another statement in it,*
    
- **what is error stray 302 in c program?**
    
    It means you have a weird character (302 is its representation) in your code. Search for Shift+space for example which is a spacenolinebreak character you might have gotten in your program by copying and pasting from the webpage or fat finger when you typed in your code.
    
- **Break and Continue**
    
    To stop any condition/loop we use BREAK, The **`continue`** statement is used to skip the current iteration of the loop and move on to the next iteration. When the **`continue`** statement is encountered within the loop, the program will immediately jump to the next iteration, ignoring the remaining code in the loop for the current iteration.
    
- To generate **Random number** we use r**and**( function)
    
    ```cpp
    #include<cstdlib>
         randomnumber = rand ();
    ```
    
- **Classes and Constructor in C++**
    1.  in c++ **Structure is Class**
    2. By default access to members of a C++ class is **Private**
    
    ### **[How To Append an Integer (with an Integer)](https://stackoverflow.com/questions/12239015/how-to-append-an-integer-with-an-integer-in-c) :**
    
    Multiply first by ten to the power of digit number of second and add the other .
    
    Example: 63 and 5
    
    ```cpp
    63*10=630
    630+5 =635
    ```
    
- **Macros and Constant**
    
    **MACROS are efficient than the const statements** as they are not given any memory, being more Readable and Faster in execution!
    
    - ***Macros*** = **#define variable valueinInt  (Written outside main function) 
          and we don’t use ; in #define**
    
    **const Variable ;**
    

- 1. We Can’t use break without Loop
- n = 1989 : eikhane shob theke bam er digit nite n/1000
         left 2nd digit nite (n/100) % 10  → 100 diye vag dile 19 r 10 diye mod dile 9
          left 3rd digit nite (n/10) % 10  → 100 diye vag dile 198 r 10 diye mod dile 9
for last digit n%10 = 9
- **last digit of that number =** number **%** 10
- **Square Root :**  to use square  root we use mathmatics function  **#include<math.h> 
*sqrt(      );***
- **Ternary operator :** Variable = (condition) ? If(true) er value : else(false) er value
- **Capital letter Ascii (65≤90) and Smaller letter Ascii(98≤122)**
- **to remove last digit = number / 10**
- **sortin**g in string : **sort(s.begin(),s.end());**
- **character to Digit** = **char - ‘0’**
- **Cin strores NewLine , to ignore this newLine we use cin.ignore();
cin.ignore(characters num, ‘ ’ );**
- ****count total number of characters in a string :**** 
string str= “whatever";
char c = str[3];

- **`while (scanf("%d %d", &v, &t) == 2)`** //the program enters a **`while`** loop that continues to execute as long as the **`scanf`** function successfully reads two integer  , or 
`while (cin >> v >> t)`  This **`while`** loop continues to execute as long as the input operation **`cin >> v >> t`** is successful. It reads two integers

---

- **SWITCH Case**
    1. A great replacement of long If-Else construct
    2. Switch case only works with **Absolute value || No floating point.**
    3. Case_Label Has to be in constant/inteager value
    4. variable expression are not allowed as Case_Label however Marcros are allowed
    5. break
    
    Structure :
    switch(variable) 
    { 
    
    **case (number ) :**
    
    } 
    
    If the first  condition is true itll print all the cases even if they arent desired so to stop this incidient we use break
    
    and if none of the condition is matched  then **default :** will execute
    **problem 1 :**
    scanf("%d" , &a);
    
    1. The scanf statement has an extra space after **`%d`**, which will cause the program to wait for additional input. Removing the space will fix the issue.
    
    [https://www.youtube.com/watch?v=Uh8m8tcMe0s&ab_channel=AnisulIslam](https://www.youtube.com/watch?v=Uh8m8tcMe0s&ab_channel=AnisulIslam)
    
    ```
    
     char a ;
        cout<<"Enter the alphabet : ";
        cin>>a ;
        switch (a)
        {
        case 'a':
            cout<< "vowel";
            break ;
        case 'e':
            cout<<"vowel";
            break ;
             case 'i':
            cout<< "vowel";
            break ;
        case 'o':
            cout<<"vowel";
            break ;
             case 'u':
            cout<< "vowel";
            break ;
        case 'A':
            cout<<"vowel";
            break;
             case 'E':
            cout<< "vowel";
            break ;
        case 'I':
            cout<<"vowel";
            break ;
             case 'O':
            cout<< "vowel";
            break ;
        case 'U':
            cout<<"vowel";
            break ;
        default:
            cout<<"consonant";
        }
        return 0 ;
    }
    ANOTHER VERSION ==
    ```
    
    ```
    
    #include<iostream>
    using namespace std ;
    int main ()
    {char ch ;
    cin>>ch;
    ch = tolower(ch);
    switch (ch)
    {
        case ('a'):
        case ('e'):
        case ('i'):
        case ('o'):
        case('u'):
            cout<<"vowel";
            break;
        default :
      {
        cout<<"consonant"<<endl;   }
    }
    return 0;
    ```
    
    1. ****: break and continue keyword****
    
    [https://youtu.be/7qcuZAvtt0k](https://youtu.be/7qcuZAvtt0k)
    
- **Delay, Sound, NoSound  Functions :**
    
    We can use the delay() function to make our programs wait for a few seconds in C++. The delay() function, sound() function and nosound() function in c++ is **defined in the 'dos.h' library**
    . Therefore, it is mandatory to include this header file to use the delay,sound() & nosound function() in our program.
    
    The delay function is used to suspend execution of a program for a particular time. Declaration: v**oid delay(unsigned int);..**.
    
    sound function cerates sounds in frequency,
    
    Here unsigned int is the number of milliseconds (remember 1 second = 1000 milliseconds). To use delay function in your program you should include the "dos.h" header file which is **not** a part of standard C library.
    
    **First way:**
    
    1. #include <time. h>
    2. void delay(int delay)
    3. {
    4. int now=time(NULL);
    5. int later=now+delay;
    6. while(now<=later)now=time(NULL);
    7. }
    
- **Factor related problems  : >**
    
    **To check Factor** = given number (n) % i(loop) == 0
    
    **to Show how many factors :**
    To check just take a counter
    
    **Show smallest factor of N other than 1 :**
    
    For(i=0 ; i≤n; i++) {if (n%i == 0)
    
    Printf(i)
    
    Break}
    
    **Perfect Number check :**
    
    If the summation of the factors of a number is the  number itself then its a perfect number. 
    
    **Show Biggest factor of N other than n :**
    
    Largest factor = N/2
    
    For(i=0 ; i≤n; i++) {
    
    if (n%i == 0)
    Printf(”%d",n/i );
    Break}
    
    **Greatest common divisor/factor or GCD/f :**
    
    First calculate Common factors of two or more number then find the greatest number/factor. 
    
    - **Praimality check :**
        
        All prime number has only 2 factor first one is 1 and 2nd is itself. If the counter number is 2 its a prime number otherwise not. 
        
        **0 and 1 is not a prime number**
        
        to check n primility we have to start a loop from 2 to n-1 and do modulus if  its  ≠ 0 then its a prime number
        
        ```cpp
        bool isprime(int n)
        {
            if(n<2) return false;
            for(int i =2 ; i<n ; i++)
            {
                if(n% i == 0 ) {return false  }
                else {return true ; }
            }
        }
        ```
        
- **What is bool and  flags?**
    
    bool stands for boolean, boolean is a value that can be only 1 of 2 states true or false, or on or off, or 1 or 0 these all represent the same thing, a flag is a variable that is used in a conditional.
    
    Flag variable is used as a signal in programming **to let the program know that a certain condition has met**
    . It usually acts as a bolean variable indicating a condition to be either true or false.
    
    **A boolean is 4 bytes, unless it's in an array, in which case each boolean is only 1 byte**
    
    Why is bool 1 byte and not 1 bit?
    
    **Because the CPU can't address anything smaller than a byte**.
    

### Classroom Slide contents :

- **Type Convertion**
    
    there are **Three** type :
    
    1. **ceil** 
    2.  **floor**(ignores number after decimal point)
    
    3. **round**(nearest number possible)
    
    smaller number divided by larger number is 0
    
- **Types of error :**
    
    **The three common types of errors in C programming are:**
    
    1. **Syntax Error**
    
    : Errors that occur when you write a C program are known as syntax errors. This error indicates something that must be fixed before the code can be compiled. All these errors are detected by the compiler and thus are known as compile-time errors.
    
    1. **Runtime Error**
    
    : Errors that occur during program execution(run-time) after successful compilation is called run-time errors. One of the most common run-time errors is division by zero also known as Division error.
    
    1. **Logical Error**  : On compilation and execution of a program, the desired output is not obtained when certain input values are given. These types of errors that provide incorrect output but appear to be error-free are called logical errors. These errors solely depend on the logical thinking of the programmer.

- **C /C++Operators**
    - **Arithmetic :**  +, -, *, /, %
    - **Relational :**
    ==, !=, <, <=, >, >=
        
        Relational operators are operators used in programming to compare two values or expressions and determine the relationship between them. These operators evaluate to a Boolean value, which is either true or false, depending on whether the relationship between the two values is true or false.
        
        The most common relational operators are:
        
        - Equal to (==): This operator compares two values to see if they are equal.
        - Not equal to (!=): This operator compares two values to see if they are not equal.
        - Greater than (>):  compares two values to see if the left-hand value is greater than the right-hand value.
        - Less than (<):  compares two values to see if the left-hand value is less than the right-hand value.
        - Greater than or equal to (>=): compares two values to see if the left-hand value is greater than or equal to the right-hand value.
        - Less than or equal to (<=): compares two values to see if the left-hand value is less than or equal to the right-hand value.
        
        Relational operators are commonly used in decision-making statements, such as if statements, where the condition that is being evaluated determines the flow of the program.
        
    - **Logical :**    !, &&, ||
        
         used in programming to combine or manipulate Boolean values. These operators evaluate to a Boolean value, which is either true or false, depending on the values being compared and the operator being used.
        
        The most common logical operators are:
        
        - AND (&&): This operator returns true if both of the operands are true, and false otherwise.
        - OR (||): This operator returns true if either one of the operands is true, and false if both are false.
        - NOT (!): This operator negates the value of the operand, so if the operand is true, the NOT operator returns false, and if the operand is false, the NOT operator returns true.
        
        Logical operators are used in decision-making statements to combine conditions and determine the flow of the program. They are also used to perform complex logical operations, such as testing multiple conditions simultaneously.
        
    - **Bitwise :**
    &, |, ~, ^, <<, >>
        1. Bitwise Operator can **only work with binary digit,** and **a & b** means product of the binary digits of these two variables value
        2. BitWise | (or) means the binary sum of two variables value **a | b**
        3. 
        
        [Java Bangla Tutorials 35 : Bitwise operator](https://youtu.be/TllHVJGEY5A)
        
    
    **Assignments :**
    =, +=, -=, *=, /=
    **Special :**
    ++, --, ?, &, *, [], ., ->
    
    - **Unary Operator**
        
        [https://youtu.be/0QACr5AkCBU](https://youtu.be/0QACr5AkCBU)
        
- **Arithmatic operators :** you can't deliver reminder in float data type (a%2 =0) it’ll show error
**Modulus of minus number :** (-n% m = (n % m +m)%m)
    
    
    ***Increment and decrement operator :***
    
    x++ 
    
    Uses current value of variable, then increments i
    ++x
    Increments variable first, then uses new value
    x--
    Uses current value of variable, then decrements it
    --x
    Decrements variable first, then uses new value
    
    Calculations are done “one-by-one” using
    precedence, left to right within same
    precedence.
    
    P**recedence of operator :**
    
    Accoding to rule of precedence if there are several arithmatic operator math will start from left to right
    
    ***BODMAS**:* 
    
    B – Brackets, O – Order of powers or roots,
    D – Division, M – Multiplication A – Addition, and S –
    Subtraction.
    Example: Find the average of three variables a, b and c
    Do not use: a + b + c / 3
    Use: (a + b + c ) / 3
    

## Files

`To write in console we use printf but to write in file we use fprintf /  **f I**nfront of every library function.`

reading file is : some data will stay stored at file that user wants to read it from console

```c
FILE *file;
   file = fopen("File_name.txt","mode");
if(file==NULL)
{printf("error")}
else {"successfull"};
```

**To write something in file :**

1. fputc()
2. fputw()
3. fputs()
4. fprintf()
5. fwrite()

**To read something in file :**

1. fgetc()
2. fgetw()
3. fgets()
4. fscanf()
5. fread()

**There are many modes for opening a file:**

1. r - open a file in read mode.

- if file exists the marker is positioned at beginning
- if file doesnt exixst ,error returned

2. w - opens or create a text file in write mode.

- if file exists ,it willbe erased
- if doesn;t exist ,i’s created

3. a - opens a file in append mode.
4. r+ - opens a file in both read and write mode.
5. a+ - opens a file in both read and write mode.

6. w+ - opens a file in both read and write mode.

- if file exists the marker is positioned at end
- if doesn;t exist ,i’s created

### writing name using file :

```c
 main ()
{FILE *file;
    char name[20] = "afrin sultana akhi";
    int length = strlen(name);
    int i;  
   file = fopen("File_name.txt","w");
   if(file==NULL)
   {
    printf("file does not exists\n");
   }
   else
   {
    printf("File is opened\n");
    for(i=0; i<length ;i++)
    {
        fputc(name[i],file);
    }
    printf("file is written succesfully\n");
    fclose(file);
```

t**ake name puts function input :**

```c
main ()
{
    FILE *akhi ;
    char user [50];
    akhi = fopen("text.txt","w");
    if(akhi == NULL )
    {
        printf("error\n"); }
    else
    {
        printf("succesful\n");
        printf("Enter your full name :\n");
        gets(user);
        fputs(user,akhi);
				printf("succesfully entered\n");
        fclose(akhi);
```

**`fprintf(filepointer,format_specifier,variable);`**

**`fprintf(file,"%s %d\n",name,age);`**

```c
 main ()
{
    FILE *file ;
    char name [90] ;
    int age ;
    file = fopen("pakhi.txt","a");
    int i ;
    int length = strlen(file);
    if(file == NULL)
    {  printf("error");
    }
    else
    {  printf("file is open\n");
        printf("enter university name : \n");
        gets(name);
          printf("enter age : \n");
          scanf("%d",&age);
          fprintf(file,"name = %s age = %d\n",name,age);
          printf("file is written succesfullly");

```

```c
 main ()
{
    FILE *file;
    char ch;
    file = fopen("text.txt","r");
    if(file == NULL)
    {
        printf("error\n");
    }
    else
    {   printf("file opened succesfully\n");
while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }
        fclose(file);
```

- **Reserved Words and identifiers :**
    
    **Reserve Words** :
    Word that has a specific
    meaning in C
    Known as keyword
    Ex: int, retrun, main
    
    **Identifiers :**
    Word used to name and refer to
    a data element
    Ex: functions, variables
    
- **Variables and constants**
    
    Variables :
    Is a memory location where a value
    can be stored
    Value can change during program
    execution
    Ex: int a = 3;
    
    Constants :
    A value that can not be altered
    throughout the program
    Ex: 1, 2, 3
    #define PI 3.1416
    
- *T**ype* *casting***
    
    converting a data type to another data type is t**ype casting**
    we took an inteager variable then convert it to float.because if we divide 2 inteager we’ll get int answer & and that won;t be accurate
    **double** div = (f**loat)** num1 / num 2 ;
    
    [https://youtu.be/M9aJrSkOMYg](https://youtu.be/M9aJrSkOMYg)
    
- **Format Specifier For C ONLY**
    
    SPECIFIER USED FOR
    **%c**  -a single character
    %s  -a string
    %hi  -short (signed)
    %hu  -short (unsigned)
    **%Lf** - long double
    %n      -prints nothing
    %d - a decimal integer
    **%i** - a decimal integer
    (detects the base
    automatically)
    %o - an octal (base 8)
    integer
    %x -a hexadecimal
    (base 16) integer
    %p - an address (or
    pointer)
    **%f** - a floating point
    number for float
    %u -  int unsigned
    decimal
    **%e** - a floating point
    number in
    scientific notation
    %E - a floating point
    number in
    scientific notation
    **%% the % symbol**
    

- **Valid Identifiers :**
    1. Consists of letters, digits, or underscores only
    myName_123
    2.  Begins with a letter or underscore symbol
    3. Cannot be a C reserved words
    4. At least one letter or underscore, should not be empty

### **LEAP YEAR ALGORITHM +**

![Screenshot_2.png](Basic%20C%20programming%20062b603d62be4fbfa250b5776bb070b9/Screenshot_2.png)

> if(a%4 == 0 && a%100!=0 )
{
cout<<"leap year"<<endl;
}
else if ( a%400==0)
{
cout<<"leap year";
}
else
{
cout<<"not leap year"<<endl ;
}
getch ();
return 0 ;
}
>