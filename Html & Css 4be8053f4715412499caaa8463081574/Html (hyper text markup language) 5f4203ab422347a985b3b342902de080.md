# Html (hyper text markup language)

## What is HTML 5

Semantic elements : NoN semantic tags /meaningless tag : div,span

```html
<details>
    <sumary> summery here</sumary> /*toggle title? /*
      <!-- summery title in toggle -->
  </details>
```

```html
<figure>
  <img src ="">
  <figcaption> text </figcaption>
</figure>
```

Semantic tag = <P> <H1> <form> 

### Tags , Atributes

1. html tags are Keyword  that has angle brackets <> in both side
2. *container/pair* tags are those tag that has both opening and closing tag <p>,<p/>
3. those that doesn’t has a closing tag is empty tag **</br>**
4. to enhance HTML tag work efficiency we use **ATtRIBiUTe tag**
5. **tag +content = element**
6. generally atribute  are written in opening tag

### what is head tag?

generally we use head tag for meta data ,title tag

The **<meta> tag defines metadata a**bout an HTML document .Meta tags are pieces of information you use to tell the search engines .They ensure that search engines know what your content is about, so they'll be able to show the website in the appropriate results.

1. **<meta *charset*="UTF-8">**  we use it for **Character encoding**
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
    

### Entity

Entity is a imaginary word for symbol. we use it for symbol like **<>, double spaces,** etc..

there are  ways to create an entity :    **& (then entity name) ;**

**To Use Comment  <!**

to show exactly what i write on display we use **Pre tag**

**`<pre>`**

**`what i want to write`**

**`</Pre>`**

- T**o add Emoji / symbol in a web page**
    
    just copy the entity code of the symbol from websites and apply in code
    
- **Image tag**
    
    image tag is a empty tag
    
    **<img src = “url”/>**
    
    to put image in center or alignment we haveto use tag of that alignment
    
    ![Screenshot_2.png](Html%20(hyper%20text%20markup%20language)%205f4203ab422347a985b3b342902de080/Screenshot_2.png)
    

<aside>
💡 I**frame =** we use this to attach youtube video or other website in our website : ***<iframe src=”link”> </iframe>***

- **dividing screen of a web page : <div *id*=" div 3" *style* ="background-color: red; height :200px;width :400px"></div>**
</aside>

- **Hyper Link**
    
    there are 2 types of hyper link : **1.** internal hyper link  2. external hyper link 
    
    A hyperlink is **an element in an HTML document that links to either another portion of the document or to another document altogether**. On webpages, hyperlinks are usually colored purple or blue and are sometimes underlined.
    
    **we create hyper Link with the help of ANCHOR TAG**
    
    **A = ANCHOR , href = hypertext reference**
    
    - **<a *href* ="next page html location"> link name </a>**
    
    **to open new page in new tab :** **<a *href* ="next page html location"** *target* ="blank"**> link name </a>**
    
    now for **external hyperlink :**
    
    **</html><a *href* ="http://www.google.com" *target* = "blank"> click here to visit google </a>**
    

### **Table (HTML)**

i) <table>  ii) <thead>  iii) <tbody>> iv) <tfoot>> v) <tr> vi) <th> vii)<td> viii) <caption>

1. **we use th instead of td in header beacuse it make  the words look Bold**
2. first table row then table data 

**Self padding and self Spacing** : Cellpadding basically defines the space present between a table cell's border and the content present in it. Cellspacing basically defines the space present between individual adjacent cells

cellpadding is used to set the whitespace between cell edge and cell content, whereas cellspacing is used to set the whitespace between two cells

- **COLSPAN ROWSPAN**
    
    
    **<th *colspan* ="2">PHONE</th>**
    
    **<th row*span* ="2">PHONE</th>**
    
    ```html
    <!DOCTYPE html>
    <html>
        <head>
            <title>
                table
            </title>
            <style>
                table
                
                {
                    width : 300px;
                    height : 200px;
                    border : 2px solid pink;
                    border-collapse : collapse;
                    /* //cell spacing 
                    border spacing :15px; */
                }
                td,th
                {
                    border :1px solid pink;
                    /* cellpadding  */
                    padding : 15px;
                }
                tr
                {
                    text-align : center;
                }
            </style>
    
        </head>
        <body>
            <table>
                <caption>STUDENT DETAILS </caption>
                <thead>
                    <tr >
                        <th rowspan ="3">students data</th>
                        <th>ID</th>
                        <th>NAME</th>
                        <th>GPA</th>
                      
                    </tr>
    
                </thead>
                <tbody>
                    <tr>
                        <td columnspan ="3"></td>
                        <td>22101095</td>
                        <td>Afrin sultana akhi</td>
                        <td>4.oo</td>
                    </tr>
                    <tr >
                        <td columnspan ="3"></td>
                        <td>22101078</td>
                        <td>rasel</td>
                        <td>3.0</td>
                    </tr>
                    <tr>
                        <td columnspan ="3"></td>
                        <td>378</td>
                        <td>jahd</td>
                        <td>2.00</td>
                    </tr>
                </tbody>
            </table>
        </body>
    </html>
    ```
    
- **Accesible Table**
    
    The scope attribute may be used **to clarify the scope of any cell used as a header**. The scope identifies whether the cell is a header for a row, column, or group of rows or column
    
    1. Col group
    2. row group

### **Form**

to create form in html we use form tag **<form> </form>**

a form has different field .   and in html it has different types of input

- radio button and check box, dropdown menu ,text area
- **<input *type* ="Type" *name* ="type" *id* ="type">**
- by giving **value** means its collected the data i gave or shows
- for better accessiblity **for a jei name use korbo ID & NAME teo same name use korbo**
- by using **selected/checked atribute it shows a  option automatically selected, user then can change his option according to him**
- text area is for multiline text ,for example : description, review etc.
- by using required attribute we can set some requirements for submitting the form ,user has to full fill this requirements to submit the form. for this we type **required** in input line
- we can also diabled any button by **disabled**
- by r**ead only we can only read the the data cant input anything**

## **Collect form data using third party API**

**<form *action*="api link" *method*="post">**

```

        <h2 style = "text-align :center">Registration form</h2>
        <form>
            <div>
                **<label for ="fullname">FullName: </label>**  
                <input type ="text" name ="fullname" id ="fullname">

            </div> </br>
            <div>
                **<label for ="email">Email :</label>** 
                <input type ="email" name ="email" id ="email" **required>**
            </div> </br>
            <div>
                **<label for=" passsword">PASSWORD :</label>**
                <input type ="password" name ="password" id ="password">
            </div> </br>
            <div>
                **<label for=" dob">Date of Birth :</label>**
                <input type ="Date" name ="date" id ="date">
            </div> </br>
            <div>
                **<label for=" photo">Choose Your photo </label>**
                <input type ="file" name ="photo" id ="photo"
            </div> </br>
            <div>
                <label type ="gender">Gender</label>
                **<input type ="radio" name ="Gender" id ="gender">Male**
                <input type ="radio" name ="Gender" id ="gender">Female
            </div>
            <div>
                <label for ="religion">religion</label>
                **<input type ="checkbox" name = "r1" id ="muslim" value ="islam">Islam**
                <input type ="checkbox" name = "r2" id ="hindu" value ="hindu" disabled >hindu
            </div> </br>
            <div>
                <label for ="department ">Department </label>
                **<select name = "department">**
                    **<option value ="cse">Cse</option>**
                    <option value = "BBA">BBA</option>
                    <option value = "EEE" **selected>**EEE</option>
                </select>
            </div> </br>
            <div>
                <label for ="message">message</label>
                **<textarea cols ="30" rows="10"></textarea>**
            </div> </br>
            <div>
                **<input type ="submit" value ="register">
                <input type ="reset" value ="clear">**
            </div>   
        </form>
```

- **How to add Audio & Video in website**
    
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
    
- **Progress bar and svg**
    
    progress bar : **HTML <progress *min*=" " *max* =" " *value* =" "></progress>**
    
- **Web Accessiblity**