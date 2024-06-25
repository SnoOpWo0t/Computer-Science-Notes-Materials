# CSS can be added to HTML documents in 3 ways:

- **Inline -** by using the **style attribute** inside HTML elements.(not reccomended)  **[we use inline to show items in same row]**
- **Internal -** by using a **<style>** element in the <head> section.
- **External** - by using a <link> element to link to an external CSS file. → **works Best when you have large website**

<aside>
💡 **Inline Style** is **Prioratiz**e over other 2 Style attribute.

</aside>

---

## Inline & Internal style :

<aside>
💡 **internal style** is written **inside head**

</aside>

## Inline

- **<h1 style =” color:  ;  font-size : __ px  “>** (inline style)

  **<h1 *style* ="color : rgb(15, 15, 123)" > Hello World </h1>**

### Including | Internal

### Style tag Syntax

<aside>
💡 **Internal style** is written **inside head**

</aside>

```html
<style>
    selector1 {
        color : rgb(15, 15, 123);
    }
    selector2 {
        font : italic;
    }
</style>
```

![code.png](CSS%20can%20be%20added%20to%20HTML%20documents%20in%203%20ways%20fa88ae4aaa9f49c688d0a12d1bcd8032/code.png)

<p>Notice that if some properties have been defined for the same selector (element) in different style sheets, t**he value from the last read style sheet will be used!**</p>

---

## External StyleSheet

> **Writting CSS in a separate document** and L**inking it with HTML file**
> 

<aside>
💡 As we have created a separate page for Styling now matter what style code we write on that new separate sheet it wont chnage any effect on HTML until we connect this new styling sheet with Html page

</aside>

- **To connect CSS page with HTML :**
    - Inside HTML file HEAD block  :   **<link rel="stylesheet" href="style.css">**
        
        ```
         **<link rel="stylesheet" href="style.css">**  #This is the link to the css file 
                #if both html and css are in the same folder, you can just put the name of the css file but  
                if they are in different folders, you have to put the path to the css file
        ```
        
    - 
    
    ![Untitled](CSS%20can%20be%20added%20to%20HTML%20documents%20in%203%20ways%20fa88ae4aaa9f49c688d0a12d1bcd8032/Untitled.png)
    

### **External CSS (recommended)**

**Written inside head** 

External CSS is **a form of CSS which is used to add styling to multiple HTML pages at a time.** The external CSS is always saved with the **. css extension**

and in .css file we’ll write what we write in html under style tag

- to **merge Css in HTM**L we will use: **<link rel =”stylesheet” type =”text/css” href=”file_path/ CSS_file_name.extention”>** tag in our html file **under HEAD TAG**