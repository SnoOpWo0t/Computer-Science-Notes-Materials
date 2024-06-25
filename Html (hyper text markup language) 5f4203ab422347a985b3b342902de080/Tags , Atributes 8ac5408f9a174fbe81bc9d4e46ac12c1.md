# Tags , Atributes

[Tags](Tags%20,%20Atributes%208ac5408f9a174fbe81bc9d4e46ac12c1/Tags%2012e0cded33d244c89665288f63299a3a.md)

[Attributes](Tags%20,%20Atributes%208ac5408f9a174fbe81bc9d4e46ac12c1/Attributes%20d28e670b8fa140838e9967718cfa3661.md)

<aside>
💡 ATTRIBUTE SYNTAX : **< tag  attribute_name = “ attribute_value” >**

</aside>

- Attriburtes are used to add more informations in TAG
- internal link relative url
- Internet link Absolute url

> **Html tag** is the **paren**t tag of BODY and HEAD tag
inside HTML tag we define language(in which language we’re writing the code)
***Syntax :* <html *lang*="en">**
> 

## what is head tag?

**generally we use head tag for meta data ,title tag & Connect CSS with HTML**

The **<meta> tag defines metadata a**bout an HTML document .Meta tags are pieces of information you use to tell the search engines .They ensure that search engines know what your content is about, so they'll be able to show the website in the appropriate results.

1. **<meta *charset*="UTF-8">**  we use it for **Character encoding**

### **Image tag**

- image tag is a Empty tag
- **<img src = “url.img_format” alt =”**if image unavailable thentext **”/>**
- for internal Storage:
**<img src = “/url.img_format”**

![Untitled](Tags%20,%20Atributes%208ac5408f9a174fbe81bc9d4e46ac12c1/Untitled.png)

to put image in center or alignment we haveto use tag of that alignment

![Screenshot_2.png](Tags%20,%20Atributes%208ac5408f9a174fbe81bc9d4e46ac12c1/Screenshot_2.png)

- seetings → comandPallate→toggle word wrap

---

### What is meta tag in html

The `<meta>` tag in HTML is used to provide metadata about the HTML document. Metadata is information about data and is used by *browsers, search engines,SEO, and other* web services to understand the content and behavior of a webpage. The ***`<meta>`* t*ag is always placed inside the `<head>`*** section of the HTML document and ***does not have a closing tag.***

- ***Synatx :   < meta attributes  />***

### Common Uses of the `<meta>` Tag

1. **Character Set**:
Specifies the character encoding for the HTML document. : **<meta charset="UTF-8">**
2. **Viewport Settings**:
Controls the layout on mobile browsers. : <***meta name="viewport" content="width=device-width, initial-scale=1.0***">
3. **Description**:
Provides a brief description of the webpage, which search engines may display in search results. : **<meta** name="description" content="This is a description of the webpage.">
4. **Keywords**:
Specifies keywords relevant to the content of the webpage for search engines. **: <meta** name="keywords" content="HTML, CSS, JavaScript, Meta Tags">

1. **Author**:
Indicates the author of the document. : <**meta name="author"** content="John Doe">
2. **Refresh**:
Sets an automatic refresh interval for the webpage. : <meta http-equiv="refresh" content="30">
3. **HTTP Equiv**:
Used to simulate an HTTP header. : <**meta http-equiv=**"X-UA-Compatible" content="IE=edge">

### **Anchor TAG || Hyper Link**

A hyperlink is **an element in an HTML document that links to either another portion of the document or to another document altogether**. On webpages, hyperlinks are usually colored purple or blue and are sometimes underlined.

there are 2 types of hyper link : 
**1.**   Internal hyper link  
2.   External hyper link 

- **<a *href* ="next page html location"> link_Displayname </a>**
- if no working limnk available :  **<a href="#">My Cart</a>**

**we create hyper Link with the help of ANCHOR TAG**

**A = ANCHOR , href = hypertext reference**

1. **To open new page in New tab (**it wont open on already opend tab rather create a new tab**) :** 
           **<a *href* ="next page html location" *target* ="_main"> link name </a>
To open clickable image(**shows image  . after clicking image redirect to website**) : 
          <a *href* ="next page html location" *target* ="_main"><img src” link name “ height =6px></a>**
2. **For External hyperlink [in browser opening other sites] :**

**</html><a *href* ="http://www.google.com" *target* = "blank"> click here to visit google </a>**

![Untitled](Tags%20,%20Atributes%208ac5408f9a174fbe81bc9d4e46ac12c1/Untitled%201.png)

![Untitled](Tags%20,%20Atributes%208ac5408f9a174fbe81bc9d4e46ac12c1/Untitled%202.png)

- **Without href it wont be clickable**

![Untitled](Tags%20,%20Atributes%208ac5408f9a174fbe81bc9d4e46ac12c1/Untitled%203.png)

---

### Tag  →

HTML (Hypertext Markup Language) is the standard language for creating web pages. HTML tags and attributes are used to structure content on a webpage.

HTML tags define elements on a webpage. They usually come in pairs: opening and closing tags.

HTML tags are the building blocks of HTML. They define elements in the HTML document and usually come in pairs: an opening tag and a closing tag. The syntax is as follows:

Common HTML Tags**:** **<element>Content</element>**

### **Tags →**

1. html tags are Keyword  that has angle brackets **< >** in both side
2. **tag +content = element**
3. ***Container/pair* tag**s : are those tag that h***as both opening and closing tag*** **<p>,<p/>**
4. **Empty Tag :** those that doesn’t has a closing tag is **</br>** → it enures new line
5. **ATtRIBiUTe tag :** we use   ****to enhance HTML tag work efficiency 
                     **< tag  attribute_name = “ attribute_value” >**
6. **Opening tag :** generally atribute  are written in opening tag

- **<b>** bold **<b/>**
- **<big>** shows Big text **</big>**
- <sub> subscript </sub>
- <sup> superscript </sup>
- **Hrorizontal ruler :**
<hr>

- <i> italic </i>
- <small> shows Small text </small>
- <pre> incluedes user spaces **</pre>**
- <u> underline <u/>

1. **Headings**: <**h1>**...**</h1**> to **<h6>**...**</h6>**  **[h1 is most significant and h6 is least Ranking of heading  effects on searching]**
    
    ```html
    <h1>Heading 1</h1> ,<h2>Heading 2</h2> ,<h3>Heading 3</h3>, <h6>Heading 6</h6>
    ```
    
2. **Paragraph**: adds paragraph in HTML <p>Text </p>
                                          **<pre>** incluedes user spaces **</pre>**
3. **Link**: <a href="URL">...</a>
4. **Image**: <img src="**image.jpg**" alt="Description">
- **Lists (order and unorder)**
    - **Ordered List**: `<ol><li>Item</li></ol>`
        
        
        1. **Unordered List**: `<ul><li>Item</li></ul>`
        - Unordered List
            
            ```html
            <ul>
              **<li>**List item **1</li>**
              **<li>**List item 2<**/li>**
            </ul>
            ```
            
            - to make subList :
                
                
                <ul>
                  **<li>**List item **1</li>
                    <ul>
                      <li>List item 1</li>
                      <li>List item 2</li>
                    </ul>**
                  **<li>**List item 2<**/li>
                      <ul>
                      <li>List item 1</li>
                      <li>List item 2</li>
                    </ul>**
                </ul>
                
        
        - Ordered List
            
            ```html
            <ol>
              **<li>**List item **1</li>**
              **<li>**List item 2<**/li>**
            </ol>
            ```
            
        
- **Table**`: <table><tr><th>Header</th></tr><tr><td>Data</td></tr></table>`
    
    ```html
    <table>
      <tr>
        <th>Header 1</th>
        <th>Header 2</th>
      </tr>
      <tr>
        <td>Data 1</td>
        <td>Data 2</td>
      </tr>
    </table>
    ```
    

### **Divisions and Spans  <div>:**

1. **<div>**This is a division block.</div>
    
    when div is empty by default its size is 0 . its a container used for HTML elements.div is **Block elements(TAKE FULL WIDTH).**  div is useful when we need to change alot of block elements together
    
2.  **<span>**This is an inline span.</span>
    
    span is also container . **InLine elemnts (Takes only necessary width)**
    
- Example HTML Document
    
    ```html
    <!DOCTYPE html>
    <html lang="en">
    <head>
      <meta charset="UTF-8">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>My HTML Document</title>
    </head>
    <body>
      <h1>Welcome to My Website</h1>
      <p>This is a paragraph with a <a href="<https://www.example.com>" target="_blank">link</a>.</p>
      <img src="image.jpg" alt="Description">
      <ul>
        <li>List item 1</li>
        <li>List item 2</li>
      </ul>
      <div id="main" class="container">
        <p style="color:blue;">This is a blue paragraph inside a div.</p>
      </div>
    </body>
    </html>
    
    ```
    

---

### HTML Attributes

### HTML Attributes

Attributes provide additional information about HTML elements. They are always included in the opening tag and come in name/value pairs like `name="value"`.

### Common HTML Attributes:

1. **href**: Specifies the URL for a link
      <a href="<https://www.example.com>">Example Link</a>
2. **src**: Specifies the source file for an image, script, etc.
       <img src="image.jpg" alt="Description of image">

3. **alt**: Provides alternative text for an image
   <img src="image.jpg" alt="Description of image">

4. **id**: Specifies a unique id for an element
  <div id="uniqueId">Content</div>

5. **Class**: Specifies one or more class names for an element (used for styling)
        <span class="className">Content</span>

6. **style**: Provides inline CSS styles : <p style="color:blue;">This is a blue paragraph.</p>

7. **title**: Specifies extra information about an element (displayed as a tooltip)
                 <p title="I'm a tooltip">Hover over this paragraph.</p>

8. **target**: Specifies where to open the linked document
              <a href="<https://www.example.com>" target="_blank">Open in new tab</a>

### HTML Attributes

Attributes provide additional information about elements, included in the opening tag as `name="value"` pairs.

### Common HTML Attributes:

1. **href**: URL for a link - `<a href="<https://www.example.com>">Link</a>`
2. **src**: Source file for an image - `<img src="image.jpg" alt="Description">`
3. **alt**: Alternative text for an image - `<img src="image.jpg" alt="Description">`
4. **id**: Unique identifier for an element - `<div id="uniqueId">...</div>`
5. **class**: Class name(s) for styling - `<span class="className">...</span>`
6. **style**: Inline CSS styles - `<p style="color:blue;">...</p>`
7. **title**: Tooltip text - `<p title="Tooltip">...</p>`
8. **target**: Where to open the linked document - `<a href="URL" target="_blank">...</a>`

---

- **IS it necessary to use Paragraph tag**
    
    It is not strictly necessary to write text inside a `<p>` (paragraph) tag, but doing so is essential for creating paragraphs of text. The `<p>` tag is specifically designed to denote blocks of text, and using it correctly helps structure content semantically and makes the HTML document more readable and maintainable.
    
    ### Reasons to Use the `<p>` Tag for Text:
    
    1. **Semantic Meaning**: The `<p>` tag indicates that the content is a paragraph, which helps browsers and assistive technologies understand the document structure better.
    2. **Styling**: Applying CSS styles to paragraphs becomes easier and more consistent.
    3. **Readability**: It enhances the readability of the HTML code by clearly separating blocks of text.
    
    ### Example:
    
    ```html
    <p>This is a paragraph of text. Using the <code>&lt;p&gt;</code> tag makes it clear that this is a distinct block of text.</p>
    ```
    
    ### Empty Paragraph Tags:
    
    While it is technically possible to have an empty `<p>` tag, it is not recommended because:
    
    1. **Unnecessary Markup**: It adds unnecessary elements to the HTML document.
    2. **Layout Issues**: It can create unwanted spaces or breaks in the layout.
    
    ### Example of an Empty Paragraph Tag:
    
    ```html
    <p></p> <!-- This creates an empty paragraph which is generally unnecessary -->
    ```
    
    ### Alternatives to Empty Paragraphs:
    
    If you need space or separation between elements, consider using CSS for styling or using other HTML elements that are semantically appropriate.
    
    ### Using CSS for Spacing:
    
    Instead of an empty paragraph, use margin or padding in CSS.
    
    ```html
    <style>
      .spacer {
        margin: 20px 0;
      }
    </style>
    <div>First block of content</div>
    <div class="spacer"></div>
    <div>Second block of content</div>
    
    ```
    
    ### Conclusion:
    
    While it is not necessary to write text inside a `<p>` tag, using the tag appropriately for paragraphs of text is crucial for semantic HTML and maintaining a clear, organized structure in your documents. Avoid using empty `<p>` tags and use CSS for layout control instead.