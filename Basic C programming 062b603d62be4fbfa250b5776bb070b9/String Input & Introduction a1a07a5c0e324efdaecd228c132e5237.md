# String Input & Introduction

**We cant use string without loop**

“**%.ns**” is used to print a part of string where **n** is the number of characters to be displayed on screen.

- to **reverse** a string = **reverse(variable.begin(), variable .end(), );**
- Variable =  tolower(ch); ——-for lowercase | variable = toupper (ch); ——- for uppercase (**only works with characters not string**)
- 1. **`string::npos`** represents the position where the substring is not found.
- **printf("%s\n", s.*c_str()*); // to skip**
- **variable**.**substr**(**start pos,number of characters in a substring**)
substring in C++ is ***substr()**.* This function contains two parameters: pos and len. The pos parameter specifies the start position of the substring and len denotes the number of characters in a substring **newline
***
- 

- Upper and lower case string
    
    ```
    transform(s.begin(), s.end(), s.begin(), ::tolower);;
    ```
    

```
string s ;
cin>>s;
**transform(s.begin(), s.end(), s.begin(), ::tolower);**

```

[https://youtu.be/FPcYqhx4FO8](https://youtu.be/FPcYqhx4FO8)

### S**tring library function**

String/library functions are :

1. **V.strlen()**  = size of the integer
2. v.**.strsize()**
3. **strcpy(first string ,2nd string) =**  **strcpy(destination , source)**
to copy string value one string to another  (dan to bam). **It copies with null value \0**
      **a. I**n the call strcpy(st1,st2) there is no way the strcpyy will check whether the string pointed by str2 
      will fit in str1
      **b. I**f the length of the string pointed by str2 is greater than the length of the character array str1then 
       it’ll be an    
         undefined behavior  **to avoid this problem we use strncpy**
4. **StrNcpy(1string,2string,N) =  strncpy(destination , source,  size of(destination))**
    copy n characters of string 2nd string into another string. if 2nd string doesn't have n characters 1string fills with null character
str2[sizeof(str2)-1] = ‘\0’;

1. **strcat(s,t) =**  to attached 2(concatenation) append string t into the right side of string. 
2. **Strncat(s,t,n) =** append n characters of the string t onto the right side of the string s. Always add NuLl characters at the end. 
3. **strlwr()  =** lower cassing value
4. **strupr() =** uppercasing value
5. **strcmp(s,t) = c**omparing 2 stri**ng . Compare alphabetic order of** two string's  S and t. 
6. **Strlnrev()** = reverse the word
7.  ****Variable =  **tolower(v)**; ——-for lowercase 
variable = **toupper (v)**; ——- for uppercase

1. **size_t**  → The size_t is chosen so that it can store the maximum size of a theoretically possible array or an object

```cpp
***S.substr(index)***: This part of the code calls the **substr** function on the string **s**.  is used to extract a substring from a given starting index. In this case, it starts from the index **index** (the position of the first occurrence of 'char') and extracts the substring from that position to the end of the string **s**
```

1. 

### String concatenation

in c++ there is a STRIING function itself

concatenation is adding 2 two string together.
we can you both .append  & + sign but .append is more faster

and to use this function we obviously need to a header file name #include<cstring>

[String Functions in C Programming | strcat(), strcpy(), strcmp(), strstr(), strlen(), strchr() etc.](https://www.youtube.com/watch?v=E7T2cnSjO3M&ab_channel=GateSmashers)

[C++ Bangla Tutorials 78 : string library function](https://youtu.be/7dCXFzPGzKI)

### **String i/o :**

1.  in C++ to take String type variable we use a function called **getline(cin,variable)**  [String type data type has to be mentioned]
2. for using cin>> it **not detecting words after space** we are using a function from C
as we are using it from C, we also have to declare it by typing #include<stdio.h>    gets()
Note : that in C++, we can use the **`string`**
 data type to store strings of characters, and the **`getline()`**
 function to read input strings with spaces
3. **int length = a.length();**    // Use a.length() to get the length of the string 'a’
4. **Fgets(variable name,size,stdin);**
5. both scanf and gets() function can cause **buffer overflow**
6. and to define string size we can use both .**length()** .size() function
7. In c++ it is not allowed to use + operator with two different data type

**%s → use for string :**

We don**t use (&) while getting input in string** 

**while taking scanf in string there is no need to put & in front of variable (`scanf(”%s”,a)`)**

to print String : **Scanf(”%s",s);**

We don't have to add null as input it’s automatically placed

**There are 2 type of spaces :  The ascii value of space is 32**

1.   White **space are 3 type,**    a) space   b) /n     c) /t

Opposite of **gets()** is **puts()**

1. Puts() only print string, we can use puts instead of printf.
2. puts() function automatically writes a newline character after writing the string to the output screen

**in scanf() by using %ns it can limit the number of charactars in array so its safer than gets() function**

### String class

[https://youtu.be/_IN8uXf3pug](https://youtu.be/_IN8uXf3pug)

---

### String Variables :

*Allocate an array of size large enough to hold the string **(plus 1 extra value for the delimiter )***

**Note ; each variable is considered a constant in that the space it is connected and cannot be changed** 

Str1=str2; /* not allowed but we can copy the contents of str to str1 (more later)*/

Char S[] = “hello".                  Int t, s;

CharT[] =”hi".                         T=5; s=6;

S=T ❌.                                T=s ✅

**Changing content of string variable :**

Can change puts of string variable char str[b]=”hello" 

Str[0]=”y"

### String Literals {we cant modify a string literals}

String literal values are represented by sequences of characters between double quotes ) or can say stored as an array of characters

**‘\0’ character must not be confused with ‘0’ because both have different ascii code ‘/0’ has the code 0 while ‘0 ’ has the code 48**

- **"H"** versus **'H'**
1.  'H' is a single character value (stored in 1 byte) as the ASCII value for H (72)
2.  **"H"** is an array w**ith two characters,** the **first is H,** the **second is the character value \0**
3. Without /0 it’llbe a no ending string
4. Type character H = ‘H’
5. Type String H = “H”

### What is String ?

A string is a Sequence of Characters. every thing unde **“ ”** is string

in C programming ***Character type data is called STRING***

There are *****2 ways of string representation in C++*

1. The C style Character String
2. String Class

[C++ Bangla Tutorials 77 : introduction to string](https://youtu.be/M4Ff7VeLJfg)

- **• Representing strings in C :**
    
    A string is a sequence of characters treated as a group.
    
    No explicit type, instead strings are maintained as arrays of characters
    **• Representing strings in C :**
    1.  stored in arrays of characters
    2. array can be of any length
    3. end of string is indicated by a delimiter, the zero character   '\0'
    4. always make the array **1 character longer than the string for null (\0)** otherwise it may show unpredictable result when progrmme is run