# Selectors and combinators

> **CSS BELIVES IN LASt IN FIRST PRIORITY**
> 
- Selectors also works with comma. example : 
***h1 , h2 , h2 {
    color : red
  }***

<aside>
💡 **There are some properties that if we make any changes to parent  it’ll also by default make changes to its childre**n

</aside>

![Untitled](Selectors%20and%20combinators%2003295ba495214446a32d00993b9a92e1/Untitled.png)

## **Universal Selector**

- USE UNIVERSAL SELECtor  we use ***( astrick ){ } 
   ** { }***
    
    **universal selector**
    
    - first tag,2nd tag {   }
    - h1,p {  }

---

### ID selector for single element 1 unique id

D selector is used to select and apply styles to a single HTML element with a specific `id` attribute. The `id` attribute should be unique within an HTML document, meaning no two elements should have the same `id` value.

- ID start with **# (HASH**
- hash can be use for only one tim
    1. The syntax an ID selector 
        
          **#id {**
             **property: value;
             }**
        
        ![Untitled](Selectors%20and%20combinators%2003295ba495214446a32d00993b9a92e1/Untitled%201.png)
        

![Untitled](Selectors%20and%20combinators%2003295ba495214446a32d00993b9a92e1/Untitled%202.png)

### Class Selector

written inside head

- class will start with   **.(DOT)**
- class are reusable
- to use **multiple style in one tag**

![Untitled](Selectors%20and%20combinators%2003295ba495214446a32d00993b9a92e1/Untitled%203.png)

---

### Class &ID

written inside head

- class will start with   **.(DOT)**
- class are reusable

```
<style type ="text/css">
            **.classNAMWE**
       {     color :red;   font-size : 700%;     }
            **#STYLEname**
            {     color : blue;        }
        </style>
    </head>
    <body>
       <h1 **class ="classNAME">** this is afrin sultana Akhi</h1>
       <h1 **id ="STYLEname">** i'm from jessore</h1>
    </body>
```

- ID start with **# (HASH**
- hash can be use for only one time

---

to use **multiple style in one tag**

```html
<style ="text/class">
            **.idname**
            {      background-color:aquamarine;     }
            **.idname2** p{
                 color :rgb(199, 130, 45);
                 font-size: 100px; }
        </style>
    </head>
    <body>
 ********<div class ="idname idname2"> *********
            <h1>first portion</h1>
            <p> bottom portion</p>
```

```html
<style ="text/class">
            #idnamee
            {      background-color:aquamarine;     }
            #idnamee p{
                 color :rgb(199, 130, 45);
                 font-size: 600%;
            }
        </style>
    </head>
    <body>
        <div id ="idnamee">
            <h1>first portion</h1>
            <p> bottom portion</p>
```

---

### **descendent selector :**

1. **The descendant selector matches all elements that are descendants of a specified element.
        The following example selects all <p> elements inside <div> elements:** 
    1.  **Example
            div p {**
                 background-color: yellow;
            **}  
        </body>**

### child selector **:**

1. **The child selector selects all elements that are the children of a specified element.
  The following example selects all <p> elements that are children of a <div> element:**   
    
    
      **Example
            div > p {**
              **background-color: yellow;
            }**
    

### ***adjacent sibling :***

1. The adjacent sibling selector is used to select an element that is directly after another specific element.
Sibling elements must have the same parent element, and "adjacent" means "immediately following".
The following example selects the first <p> element that are placed immediately after <div> elements
    
    Example
    **div + p {**
      background-color: yellow;
    }
    

### **general sibling :**

The general sibling selector selects all elements that are next siblings of a specified element.
        The following example selects all <p> elements that are next siblings of <div> elements:  

1.   Example
        **div ~ p { }**

[css full course bangla tutorial 7 :  selectors and combinators](https://www.youtube.com/watch?v=tzsteHDBb9g&ab_channel=AnisulIslam)