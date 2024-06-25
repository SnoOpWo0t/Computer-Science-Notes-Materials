# CSS (Cascading Style Sheets)

- CSS a language that is used to describe The ***Style*** of a document/ HTML. first we write HTML and to style it we use css

[**CSS can be added to HTML documents in 3 ways:**](CSS%20(Cascading%20Style%20Sheets)%2031cef1e9f45d47b583e33e4231f3812c/CSS%20can%20be%20added%20to%20HTML%20documents%20in%203%20ways%20fa88ae4aaa9f49c688d0a12d1bcd8032.md)

[**Selectors and combinators**](CSS%20(Cascading%20Style%20Sheets)%2031cef1e9f45d47b583e33e4231f3812c/Selectors%20and%20combinators%2003295ba495214446a32d00993b9a92e1.md)

[Display CSS  inline / block / inline-block / none](CSS%20(Cascading%20Style%20Sheets)%2031cef1e9f45d47b583e33e4231f3812c/Display%20CSS%20inline%20block%20inline-block%20none%202aa31da8a5024a7bb0241321c5cc8e6e.md)

[**Font-Styling-Color-Text** ](CSS%20(Cascading%20Style%20Sheets)%2031cef1e9f45d47b583e33e4231f3812c/Font-Styling-Color-Text%20930ef27555a2449e9376c1e90a475b47.md)

[Box Model ](CSS%20(Cascading%20Style%20Sheets)%2031cef1e9f45d47b583e33e4231f3812c/Box%20Model%205ed92567d62d407e8b670f4fa4253a9e.md)

[FlexBox](CSS%20(Cascading%20Style%20Sheets)%2031cef1e9f45d47b583e33e4231f3812c/FlexBox%202b5489003e784841b90b1ebf71667c81.md)

---

- to **MERGE** **css in HTM**L we will use:  :
    
    > **<link rel =”stylesheet” type =”text/css” href=”file_path/ CSS_file_name.extention”>** tag in our html file **under HEAD TAG**
    > 

> **CSS BELIVES IN LASt IN FIRST PRIORITY**
> 
> 
> ---
> 

- **Write comment in css  →    /*   * /**
- CSS, **text-align** is a property used to set the horizontal alignment of text within an element. It determines how inline content like text, images, and other inline elements are aligned within their container. The `text-align` property can take several values, each affecting the alignment differently:

---

### Syntax For CSS → **selector{property : value;}**

- **Selector {
      property : Value ;    
}**
- here **selector** selects that specific part / block of code where we’ll apply specific *Styling*

### Units in CSS

- Relative
1. % → often used to define a size as a relative to an elements parent object
2. em → 
3. rem (root em)→  Font size of the root element

***Others :***

vh  —> relative to 1% viewport width

vw —> relative to 1% viewport width

- **Z- Index**
    
    it decides the stack level of elements 
    
    Overlapping elements with a larger z-index cover those With Smaller One
    
    - the more higher the Z index value the higher its stays

### **Inline / block**

Every HTML element has a default display value, depending on what type of element it is.

There are two display values: block and inline. 

---

### Block-level Elements

**A block-level element always starts on a new line,** and the browsers automatically add some space (a margin) before and after the element.

 always takes up the full width available (stretches out to the left and right as far as it can).

Two commonly used block elements are: `<p>` and `<div>`.

The `<p>` element defines a paragraph in an HTML document.

The `<div>` element defines a division or a section in an HTML document

### Inline Elements

**An inline element does not start on a new line.**

**An inline element only takes up as much width as necessary.**

This is a <span> element inside a paragraph.

- **we can turn Block level elements into inline elements by typing display : inline;**
1. max-width helps to resize

---

### Position Property

> **it sets how an element is positioned in a documnet(loverlap and other)**
> 
- position : **static / relative / absolute / fixed**
- **for left right  up down change us PADDING / MARGIN (whatever is appropriatee) → BOXMODEL**

![Untitled](CSS%20(Cascading%20Style%20Sheets)%2031cef1e9f45d47b583e33e4231f3812c/Untitled.png)

### Media QUERIES

- Helps To create a **Responsive** Wevsite

### media_queries SYNTAX

1. **@media( width : 60px ) {
div {  background-color : red ;}
}**
2. **@media( min-width : 600px ) {
div {  background-color : red ;}
}**
    1. when screen size is 600px background color will change to red
3. **@media( min-width : 600px ) and (min-width : 300px){
div {  background-color : red ;}
}**

---

### Add images in background and resizing

1. if the photos is saved in same file with the html and css then :
- **background- images : url ( image_name  )**
1. if the photos is NOT  saved in same file with the html and css then :
    - **background- images : url ( image_path_location  )**

### Background RESIZE :

- **background-size : cover / contain / Auto**

1. create a div
2. resize div according to image for perfect fitting
3. add image using backgrond image
4. resize image according to fit

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

---

### ANIMATIONS

- better vertion of transforms
- keyframe is also known as Template / Blueprint. its necessary to write to apply aniation
- **SYNTAX :**
    
    
    - **@keyframe myname {
     from { font - size : 20px ; } →initial frame
    to { font - size : 40px ; } → Ending frame
    }**
    
    ![Untitled](CSS%20(Cascading%20Style%20Sheets)%2031cef1e9f45d47b583e33e4231f3812c/Untitled%201.png)
    
    - ***SHORTHAND*** → **animation : my_name duration timing-function delay itration_count direction**
    
    ## Animation Properties :   →
    
    - somepoints are similar to transition
    1. animation-name
    2. animation-duration
    3. animation-timing-function
    4. animation-delay
    5. animation-interation-count
    6. animation-direction : normal / reverse / alternate / alternate-reverse

### Transitons Property

transitions enables you to define the transition between two states of asn element

- **transition-property** : property you want to transition(font-size,width)
- **transition-duration :** 2s / 4ms
- **transition-timing-function :** ease-in / ease-out / linear / stepss..
- **transition-delay :** 2s /4ms
- **ShortHand** → **transition**: **property_name duration timing-function delay**
    - **transition :** **all**

<aside>
💡 we Use Pseudo class to define different States

</aside>

### **Pseudo class and Pseudo element**

- s**yntax :
selector: pseudo-class { property: value;  }**

**A pseudo-class is used to define a special state of an element.**

it can be used to:

- **Style an element when a user mouses over it**
- **Style visited and unvisited links differently**
- **Style an element when it gets focus**

**Note:** `a:hover` MUST come after `a:link` and `a:visited` in the CSS definition in order to be effective! **`a:active`** MUST come after `a:hover` in the CSS definition in order to be effective! Pseudo-class names are not case-sensitive.

**nth child**

A CSS p**seudo-element** is used to style specified parts of an element.

For example, it can be used to:

- Style the first letter, or line, of an element
- Insert content before, or after, the content of an element

syntax :  **selector::pseudo-element { property: value; }**

exmp:

**img:hover {color : red;}**

### CSS Transform

- Uswed to apply 2D & 3D traansformations to an element
- Transfrom not only works on outer Box it also works on inside of the HTML element
    - **rotate**
    - **transform : rotate (45deg)**
        - **rotate : X ,Y,Z (45deg)**
    
    ![Untitled](CSS%20(Cascading%20Style%20Sheets)%2031cef1e9f45d47b583e33e4231f3812c/Untitled%202.png)
    
    use transform with hover : 
    
    ![Untitled](CSS%20(Cascading%20Style%20Sheets)%2031cef1e9f45d47b583e33e4231f3812c/Untitled%203.png)
    

### Scale

![Untitled](CSS%20(Cascading%20Style%20Sheets)%2031cef1e9f45d47b583e33e4231f3812c/Untitled%204.png)

### Translate

> we use this to **move** the **ELEMENT**
> 
- **transform :** translate(20px)
- transform : translate(20px , 50px)
- transform : translate**X**(20px)
- transform : translate**Y**(20px)
- **SKEW : is a mixture of different effect** 
transform : **skew**(20deg)

---

---

### T**o add Emoji / ICON  in a web page**

just copy the entity code of the symbol from websites and apply in code

- to show exactly what i write on display we use **Pre tag**
    
    **`<pre>`**
    
    **`what i want to write`**
    
    **`</Pre>`**
    
    [cdnjs - The #1 free and open source CDN built to make life easier for developers](https://cdnjs.com/)
    
    - **What is CDN? (content Deliverying Network)**
        
        A Content Delivery Network (CDN) is a system of distributed servers that deliver web content and digital assets to users based on their geographic location. Key aspects include:
        
        1. **Geographical Distribution**: Servers (PoPs) located worldwide to reduce data travel distance and improve delivery speed.
        2. **Caching**: Local servers store copies of static content, reducing load on the origin server and speeding up response times.
        3. **Load Balancing**: Distributes traffic across multiple servers to prevent overload and ensure better performance.
        4. **Improved Performance**: Reduces latency and load times, enhancing user experience.
        5. **Reliability and Redundancy**: Multiple servers ensure content availability even if one server fails.
        6. **Security**: Features like DDoS protection, firewalls, and SSL encryption enhance security.
        7. **Scalability**: Handles high traffic volumes efficiently.
        
        ### Examples of CDN Providers
        
        - **Akamai**
        - **Cloudflare**
        - **Amazon CloudFront**
        - **Google Cloud CDN**
        - **Fastly**
        
        ### How CDNs Work
        
        1. User requests content.
        2. Request is routed to the nearest CDN server.
        3. Server checks for cached content.
        4. Delivers cached content (cache hit) or fetches from origin server and caches it (cache miss).
        
        CDNs improve the performance, reliability, and security of web services by efficiently delivering content to users globally.
        
    
    eee
    

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

- Border-Box
    
    
    n CSS, the `box-sizing` property determines how the total width and height of an element are calculated. The `border-box` value for `box-sizing` is particularly useful because it includes the padding and border in the element's total width and height.
    

- **Font style in webpage :
`<h1 *style* =" text-align :center ; color :red">hello</h1>`**
    
    **<h2 *style* = "text-align :center">Registration form</h2>
    `<*font* *color* ="red" *size* = "47px" *face* ="fantasy" > I LOve Bangladesh</*font*>`
    `<p *style* = "color: blueviolet; background-color: lightgoldenrodyellow;font-size: 50px; font-family: fantasy">i love bangladesh</p>`**