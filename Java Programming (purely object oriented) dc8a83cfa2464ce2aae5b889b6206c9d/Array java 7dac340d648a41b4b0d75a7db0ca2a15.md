# Array java

[Dynamic  ARRAY Java](Array%20java%207dac340d648a41b4b0d75a7db0ca2a15/Dynamic%20ARRAY%20Java%2053d34c957e874593889ddb54f7989dbb.md)

- **int[] x = new int[array size];**
- i**nt x = {array_elements}**
- int size = **arr.length;**

- java has a  **Class named Arrays t**o access this class members we use dot operator

### ***In java declaring array is  different from C.**

java doesnt give storage space instantly, we have to **INITIALIZE IT FIRST**

- **data_type variable[ ] = new data type [initial value]**

```
**int[] x = new int[i];**
```

This line declares and initializes an integer array named **`x`** with a size of **`i`**. 

- **`int[]`**: This part specifies the data type of the variable **`x`**. In this case, **`int[]`** indicates that **`x`** is an array of integers.
- **`new int[i]`**: This part creates a new array object of integers with a size specified by **`i`**. The keyword **`new`** is used to allocate memory for the array, and **`int[i]`** specifies that it is an integer array with **`i`** elements.

By initializing the array **`x`** with **`new int[i]`**, you are creating an array with a length determined by the value of **`i`** that was read from user input. The array **`x`** will be capable of holding **`i`** integers.