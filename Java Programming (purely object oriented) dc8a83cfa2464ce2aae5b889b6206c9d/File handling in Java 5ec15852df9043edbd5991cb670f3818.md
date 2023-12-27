# File handling in Java

- import java.io.*;
- file read always catch er moddhe and Catch er moddhe (IoException e)
- (line *=* br.readLine())  // to read every line
- splits the string into an array of substrings based on that regular expression. In this case, the regular expression is a space (" "). So, the **`line`** is split into an array wherever there is a space.

```java
import java.io.*;
public class SecA {
    public static void main(String[] args) {
        try {
           **BufferedReader br = new BufferedReader(new** FileReader("F:\\JAva Final\\ct 5"));
				**BuffereWriter bw = new BufferedWriter(new** FileWriter("F:\\JAva Final\\ct 5"));
            String line; // a variable to read every line inside txt file
            while ((line = br.readLine()) != null) { //(line = br.readLine()) read every line
                String [] token= line.split(" "); // ekta blank space paile proti word split korbo

                // Your code inside the loop goes here
            }
            br.close();
bw.close(); // Don't forget to close the BufferedReader when done//  eita  na korle resourse link/ error dekhai
        } catch (IOException e) {
            e.printStackTrace(); // Print the exception details for debugging
        }
    }
}
```

## Write in File

l