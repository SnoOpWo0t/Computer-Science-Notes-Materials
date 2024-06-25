# Font-Styling-Color-Text

### Color Foreground / background / Alpha Channel

if font name is more than one word then it’llbe written under **“”(double quatation)**

Used to set color of FOREGROUND and background

- SYNTAX →  **COLOR :** **color_name ;**
- button { color : red; }

### Alpha Channel

> It decides OPACITY
> 
- **opacity (0 to 1)**
- RGBA

### Color System :

1.  **1. Rgb system  (red, green , yellow)**
    
    ***example :***    
    COLOR : rgb(255 , 0 , 0) → red
    COLOR : rgb(0 , 255 , 0) → green
    
2. **Hex System : written in HEXADECIMAl**
    
    COLOR : #ff0000 → red
    COLOR : #00ff00 → green
    

- to use Hexa Decimal color code we use **# before color code number**

---

## TEXT - Properties

> ***Align :*** left , right , center , Start ==left  , End == right
**it doent work according to document. IT works according to PARENT**
> 

> **Text-Decoration :** underline, overline, linethrough 
best usage is in anchor tag to identify links
> 
> - **TEXT DECORATION property:**
>     1. text-transformation
>     2. text-shadow
>     3. text-uppercase 
>     4. word-spacing (can use neg value)
>     
>     | https://www.w3schools.com/cssref/css3_pr_text-decoration-line.php | Sets the kind of text decoration to use (like underline, overline, line-through) | https://www.w3schools.com/cssref/playdemo.php?filename=playcss_text-decoration-line |
>     | --- | --- | --- |
>     | https://www.w3schools.com/cssref/css3_pr_text-decoration-color.php | Sets the color of the text decoration | https://www.w3schools.com/cssref/playdemo.php?filename=playcss_text-decoration-color |
>     | https://www.w3schools.com/cssref/css3_pr_text-decoration-style.php | Sets the style of the text decoration (like solid, wavy, dotted, dashed, double) | https://www.w3schools.com/cssref/playdemo.php?filename=playcss_text-decoration-style |
>     | https://www.w3schools.com/cssref/pr_text_text-decoration-thickness.php | Sets the thickness of the decoration line |  |
>     | initial | Sets this property to its default value. https://www.w3schools.com/cssref/css_initial.phphttps://www.w3schools.com/cssref/css_initial.php |  |
>     | inherit | Inherits this property from its parent element. https://www.w3schools.com/cssref/css_inherit.phphttps://www.w3schools.com/cssref/css_inherit.php |  |

> **Font -Weight :**  Normal / Bold / Bolder / lighter
Font -Weight : 100 -900
> 

> **Font-Family :** roboto, etc…
> 
> 
> [W3Schools.com](https://www.w3schools.com/css/css_font.asp)
> 

> **Units in CSS :** Absolute . write in Pixels (px)
**96px = 1 Inch or 2.54cm
font_size = 2px;**
> 

> L**ine Heeight** : charecter height
> 

> Text-Transform : uppercase / lowercase / capitalize /  none
> 

![Untitled](Font-Styling-Color-Text%20930ef27555a2449e9376c1e90a475b47/Untitled.png)

![Untitled](Font-Styling-Color-Text%20930ef27555a2449e9376c1e90a475b47/Untitled%201.png)

![code.png](Font-Styling-Color-Text%20930ef27555a2449e9376c1e90a475b47/code.png)

![Untitled](Font-Styling-Color-Text%20930ef27555a2449e9376c1e90a475b47/Untitled%202.png)

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