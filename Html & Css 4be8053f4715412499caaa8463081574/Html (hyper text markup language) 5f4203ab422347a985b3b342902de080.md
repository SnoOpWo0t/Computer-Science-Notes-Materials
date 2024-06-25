# Html (hyper text markup language)

[Tags , Atributes](Html%20(hyper%20text%20markup%20language)%205f4203ab422347a985b3b342902de080/Tags%20,%20Atributes%208ac5408f9a174fbe81bc9d4e46ac12c1.md)

[Tables ,Form , List ](Html%20(hyper%20text%20markup%20language)%205f4203ab422347a985b3b342902de080/Tables%20,Form%20,%20List%20f98595cbb40a43c58ed094141e4b3096.md)

---

### Html Syntax

```html
<!DOCTYPE html>
<html>
    <title> akhi</title>
    <head><h3>this is head </h3></head>
    
    <body>
        <h1>
            content
        </h1>
    </body>
</html>
```

![Untitled](Html%20(hyper%20text%20markup%20language)%205f4203ab422347a985b3b342902de080/Untitled.png)

- **Html tag** is the **paren**t tag of BODY and HEAD tag
    
    **To Use Comment  < ! —  comment —>**
    
- **Block elements(TAKE FULL WIDTH)**
    
    ![Untitled](Html%20(hyper%20text%20markup%20language)%205f4203ab422347a985b3b342902de080/Untitled%201.png)
    
- **InLine elemnts (takes width as per size)**
    
    ![Untitled](Html%20(hyper%20text%20markup%20language)%205f4203ab422347a985b3b342902de080/Untitled%202.png)
    

> **Comments** in html : ***<!-- this is comment -->***
> 

### Page Layout Techniques

1. using Semantic tags for Layout → 
2. Using right tags

***IN SIDE BODY :***

A) **<header>**  </header>
B) <main>
c) **<footer>**

- **Main TAg**
    1. Section tag : for a section on page . <section>
    2. Article Tag : for article on page . <article>
    3. Aside tag : for content aside main (for ads). <aside>

<aside>
💡 I**frame = W**e use this to **attach** youtube video or **Other Website in our Website :**
                 ***< iframe src=”link”> </iframe>***

- **dividing screen of a web page : <div *id*=" div 3" *style* ="background-color: red; height :200px;width :400px"></div>**
</aside>

### Video Tag | **How to add *Audio* & Video in website**

to control video ratio we’ll use height and width attribute

```html
**<video height =" " width =" "controls >
   <source src=" video path \ video_title.extension" type =" ">
</video>**
```

```html
**<audio controls>
   <source src="audio path \audio name.audio_extension" type ="mimetype">
</audio>**
```

![Untitled](Html%20(hyper%20text%20markup%20language)%205f4203ab422347a985b3b342902de080/Untitled%203.png)

### Entity

Entity is a imaginary word for symbol. we use it for symbol like **<>, double spaces,** etc..

there are  ways to create an entity :    **& (then entity name) ;**

---

- **HTML Listing**
    
    **Unorder list :<ul>**
    
     **<li>     </li> </ul>**
    
    **order list :**
    
    ```
    <ol start="4"; type ="i"> here by  start 4 means listing will start from 4
    											and bys using type atribute it says the type of list 
        <li>   </br></li>
        <li>    </li>
    </ol>
    ```
    
- **Progress bar and svg**
    
    progress bar : **HTML <progress *min*=" " *max* =" " *value* =" "></progress>**
    
- **Web Accessiblity**
    
    ---
    
    [Complete HTML course in Bangla 2022](https://www.youtube.com/watch?v=zsYMgmb2oCM&t=1247s)
    
    [HTML Tutorial for Beginners | Complete HTML with Notes & Code](https://www.youtube.com/watch?v=HcOc7P5BMi4)
    
    ---
    

# What is HTML 5

![Untitled](Html%20(hyper%20text%20markup%20language)%205f4203ab422347a985b3b342902de080/Untitled%204.png)

HTML5 is the fifth major revision of HTML, designed to improve support for multimedia and provide better semantics for content.

### Key Features of HTML5:

1. **New Semantic Elements**:
    - `<header>`, `<footer>`, `<section>`, `<article>`, `<aside>`, `<nav>`, `<main>`
2. **Multimedia Elements**:
    - `<audio>`: Embeds sound content.
    - `<video>`: Embeds video content.
    - `<source>`: Specifies media resources for `<audio>` and `<video>`.
3. **Form Enhancements**:
    - New input types: `email`, `url`, `tel`, `number`, `range`, `date`, `color`
    - Attributes: `placeholder`, `required`, `autofocus`, `autocomplete`
    - Elements: `<datalist>`, `<keygen>`, `<output>`
4. **Graphics and Multimedia**:
    - `<canvas>`: For drawing graphics.
    - `<svg>`: For scalable vector graphics.
5. **APIs and DOM Enhancements**:
    - Geolocation API
    - Drag and Drop API
    - Web Storage API (localStorage, sessionStorage)
    - Web Workers API
    - WebSockets API
6. **Improved Accessibility**:
    - Better ways to describe content structure for assistive technologies.
7. **Backward Compatibility**:
    - Designed to work with existing HTML4 content.

Semantic tag = <P> <H1> <form>