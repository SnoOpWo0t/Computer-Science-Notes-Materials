# Java Syntax

### Syntax

**psvm** = **public static void main**

**syso   / sout** =  **System.out.println("text!");**

1. *F**or class*** → **PascalConvention** { **Class Names should start with an Uppercase letter**.**}**

```
public class filename {
    public static void main(String[] args) 
    {
        System.out.println("hello world!");
    }
}
```

1. ***For Function* camelCaseConvention** {first letter in l**ower case}**
2. 1. The variable names **`X`** and **`y`** should be lowercase (**`x`** and **`y`**) to follow Java naming conventions.

Packages are used in Java in order **to prevent naming conflicts,** to control access, to make searching/locating and usage of classes, interfaces, enumerations and annotations easier

### **taking input →**

```java
**import java.util.Scanner;  //package**
public class filename/classname {
    public static void main(String[] args) 
    {
       **Scanner Object_name = new Scanner(System.in);.**
 dat_type **variable= Object_name.nextdatatype(); //by this we are taking the input and putting it another variable and data types first letter wouldbe in capital**
        System.out.println(another_vari_name);
    }
}
```

**Examples :                                                                                  Take input of variable i**       

```java
**import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);  //lowercase scanner in object name
        int i = scanner.nextInt();
    }
}**
```

**Stack Syntax** : Stack<data type> Object name = *new* Stack<String>();

**Queue Syntax** : Queue<data type> Object name = *new* LinkedList<String>();

**Linked List** Syntax : LinkedList<data type> Object name = *new* LinkedList<String>();

**add element** in **Linked list :** Object name .  add(index number , element);

Remove **element** in **Linked list :** Object name .  remove(index number , element); 

```java
System.out.println(**linkedlist.peekFirst());**
       System.out.println**(linkedlist.peekLast());**
       linkedlist.**addFirst("element ");**
       linkedlist.addLast("element ");
      String **first =Object name.removeFirst();**
```