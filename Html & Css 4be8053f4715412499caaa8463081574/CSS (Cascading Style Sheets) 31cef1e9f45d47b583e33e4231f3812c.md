# CSS (Cascading Style Sheets)

- syntax :   **selector{property : value;}**
- to **MERGE** **css in HTM**L we will use: **<link rel =”stylesheet” type =”text/css” href=”file_path/ CSS_file_name.extention”>** tag in our html file **under HEAD TAG**
- **Font style in webpage :
`<h1 *style* =" text-align :center ; color :red">hello</h1>`**

**<h2 *style* = "text-align :center">Registration form</h2>
`<*font* *color* ="red" *size* = "47px" *face* ="fantasy" > I LOve Bangladesh</*font*>`
`<p *style* = "color: blueviolet; background-color: lightgoldenrodyellow;font-size: 50px; font-family: fantasy">i love bangladesh</p>`**

---

### **CSS can be added to HTML documents in 3 ways:**

- Inline - by using the **style attribute** inside HTML elements.(not reccomended)
- Internal - by using a <style> element in the <head> section.
- External - by using a <link> element to link to an external CSS file.

### Inline & Internal :

- **<h1 style =” color:  ___; font-size : __ px “>** (inline style)
- **internal style** is written **inside head**

```html
****<style type ="text/css">**
    h1 **{** color:green; **}**
    p **{** color:pink; **}**
    **</style>**
    </head>
    <body>**

    **<h1>This is a heading</h1>
    <p>This is a paragraph.</p>**
```

<p>Notice that if some properties have been defined for the same selector (element) in different style sheets, t**he value from the last read style sheet will be used!**</p>

### **External CSS (recommended)**

**Written inside head** 

External CSS is **a form of CSS which is used to add styling to multiple HTML pages at a time.** The external CSS is always saved with the **. css extension**

and in .css file we’ll write what we write in html under style tag

- to **merge Css in HTM**L we will use: **<link rel =”stylesheet” type =”text/css” href=”file_path/ CSS_file_name.extention”>** tag in our html file **under HEAD TAG**

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

### **selectors and combinators**

**Universal Selector** 

- USE UNIVERSAL SELECtor  we use *(astrick){ }

**universal selector**

- first tag,2nd tag {   }
- h1,p {  }

descendent selector **:**

```html
**The descendant selector matches all elements that are descendants of a specified element.
        The following example selects all <p> elements inside <div> elements: 
        Example
        div p {**
             background-color: yellow;
        **}  
    </body>**
```

child selector **:**

```html
**The child selector selects all elements that are the children of a specified element.
  The following example selects all <p> elements that are children of a <div> element:       
  Example
        div > p {**
          background-color: yellow;
        **}**
```

adjacent sibling **:**

```html
The adjacent sibling selector is used to select an element that is directly after another specific element.
Sibling elements must have the same parent element, and "adjacent" means "immediately following".
The following example selects the first <p> element that are placed immediately after <div> elements:
Example
**div + p {**
  background-color: yellow;
}
```

generaal sibling **:**

```html
The general sibling selector selects all elements that are next siblings of a specified element.
        The following example selects all <p> elements that are next siblings of <div> elements:       
        Example
        **div ~ p {**
```

[css full course bangla tutorial 7 :  selectors and combinators](https://www.youtube.com/watch?v=tzsteHDBb9g&ab_channel=AnisulIslam)

### **Font styling & color,text in web page**

if font name is more than one word then it’llbe written under **“”(double quatation)**

- to use Hexa Decimal color code we use **# before color code number**

```
<style>
            **.stylee**
            {
       **font-family : "Times new roman",times,serif;**
                font-weight : bold;   text-align: center;     }
    body{    background-color: #0061B1;  }
            h1 { color: red; }
        </style>
    </head>
    <body>
        <h1 **class ="stylee"**> This is a paragraph</h1>
        </body>
```

**TEXT DECORATION property:**

| https://www.w3schools.com/cssref/css3_pr_text-decoration-line.php | Sets the kind of text decoration to use (like underline, overline, line-through) | https://www.w3schools.com/cssref/playdemo.php?filename=playcss_text-decoration-line |
| --- | --- | --- |
| https://www.w3schools.com/cssref/css3_pr_text-decoration-color.php | Sets the color of the text decoration | https://www.w3schools.com/cssref/playdemo.php?filename=playcss_text-decoration-color |
| https://www.w3schools.com/cssref/css3_pr_text-decoration-style.php | Sets the style of the text decoration (like solid, wavy, dotted, dashed, double) | https://www.w3schools.com/cssref/playdemo.php?filename=playcss_text-decoration-style |
| https://www.w3schools.com/cssref/pr_text_text-decoration-thickness.php | Sets the thickness of the decoration line |  |
| initial | Sets this property to its default value. https://www.w3schools.com/cssref/css_initial.phphttps://www.w3schools.com/cssref/css_initial.php |  |
| inherit | Inherits this property from its parent element. https://www.w3schools.com/cssref/css_inherit.phphttps://www.w3schools.com/cssref/css_inherit.php |  |
1. text-transformation
2. text-shadow
3. text-uppercase 
4. word-spacing (can use neg value)

### Margin ,Padding, Border,Content

# Margin - Individual Sides

CSS has properties for specifying the margin for each side of an element:

- `margin-top`
- `margin-right`
- `margin-bottom`
- `margin-left`

All the margin properties can have the following values:

- auto - the browser calculates the margin
- *length* - specifies a margin in px, pt, cm, etc.
- *%* - specifies a margin in % of the width of the containing element
- inherit - specifies that the margin should be inherited from the parent element

**Tip:** Negative values are allowed.

If the `margin` property has three values:

- **margin: 25px 50px 75px;**
    - top margin is 25px
    - right and left margins are 50px
    - bottom margin is 75px

If the `margin` property has two values:

- **margin: 25px 50px;**
    - top and bottom margins are 25px
    - right and left margins are 50px

If the `margin` property has one value:

- **margin: 25px;**
    - all four margins are 25px
    
- **Padding :** is used to create space around an element's content, inside of any defined borders. (**SIMILAR TO MARGIN)_**

![Screenshot_1.png](CSS%20(Cascading%20Style%20Sheets)%2031cef1e9f45d47b583e33e4231f3812c/Screenshot_1.png)

**The `border-style` property specifies what kind of border to display.**

The following values are allowed :

![Screenshot_2.png](CSS%20(Cascading%20Style%20Sheets)%2031cef1e9f45d47b583e33e4231f3812c/Screenshot_2.png)

- `double` - Defines a double border
- `groove` - Defines a 3D grooved border. The effect depends on the border-color value
- `ridge` - Defines a 3D ridged border. The effect depends on the border-color value
- `inset` - Defines a 3D inset border. The effect depends on the border-color value
- `outset` - Defines a 3D outset border. The effect depends on the border-color value
- `none` - Defines no border
- `hidden` - Defines a hidden border
- border radious

The `border-style` property can have from one to four values (for the top border, right border, bottom border, and the left border).

### **Inline / block, max-width / width**

Every HTML element has a default display value, depending on what type of element it is.

There are two display values: block and inline. 

---

### Block-level Elements

A block-level element always starts on a new line, and the browsers automatically add some space (a margin) before and after the element.

 always takes up the full width available (stretches out to the left and right as far as it can).

Two commonly used block elements are: `<p>` and `<div>`.

The `<p>` element defines a paragraph in an HTML document.

The `<div>` element defines a division or a section in an HTML document

### Inline Elements

An inline element does not start on a new line.

An inline element only takes up as much width as necessary.

This is a <span> element inside a paragraph.

- **we can turn Block level elements into inline elements by typing display : inline;**
1. max-width helps to resize

### **Pseudo class and Pseudo element**

syntax : **selector: pseudo-class { property: value;  }**

A pseudo-class is used to define a special state of an element.

it can be used to:

- Style an element when a user mouses over it
- Style visited and unvisited links differently
- Style an element when it gets focus

**Note:** `a:hover` MUST come after `a:link` and `a:visited` in the CSS definition in order to be effective! `a:active` MUST come after `a:hover` in the CSS definition in order to be effective! Pseudo-class names are not case-sensitive.

**nth child**

A CSS pseudo-element is used to style specified parts of an element.

For example, it can be used to:

- Style the first letter, or line, of an element
- Insert content before, or after, the content of an element

syntax :  **selector::pseudo-element { property: value; }**

exmp:

**img:hover {color : red;}**

### **CSS Specificity**

**to check  higher priority :** 

**1. last updated> before update**

  **2. higher specificity score**

**a** = number of id

**b** = number classes and attributes ,pseudo-classes

**c** = number of elements , psuedo-elements

```css
h1{
    background-color: brown;
}
/* a =0 b = 0 c= 1 == 001 */
```

### Background-Image, **Gradient - Linear, radial**

```css
                    **/* to add backgrokund image : */**
**Selector{
 background-image : url("filename.extension")
	background-repeat : no-repeat; repeat-y; repeat-x;
	background-position : right-top;
background-attachment : fixed;
}
/* for shortcut we can also use*/
background : color url("filename.extention") no-repeat right top;**

```

---

### Float, Navigation menu

[css full course bangla tutorial 24 : How to create navigation menu](https://youtu.be/KS8EW01JE_I)

| Property | Description |  |
| --- | --- | --- |
| https://www.w3schools.com/cssref/css3_pr_box-sizing.asp | Defines how the width and height of an element are calculated: should they include padding and borders, or not |  |
| https://www.w3schools.com/cssref/pr_class_clear.asp | Specifies what should happen with the element that is next to a floating element |  |
| https://www.w3schools.com/cssref/pr_class_float.asp | Specifies whether an element should float to the left, right, or not at all |  |
| https://www.w3schools.com/cssref/pr_pos_overflow.asp | Specifies what happens if content overflows an element's box |  |
| https://www.w3schools.com/cssref/css3_pr_overflow-x.asp | Specifies what to do with the left/right edges of the content if it overflows the element's content area |  |
| https://www.w3schools.com/cssref/css3_pr_overflow-y.asp | Specifies what to do with the top/bottom edges of the content if it overflows the element's content area |  |