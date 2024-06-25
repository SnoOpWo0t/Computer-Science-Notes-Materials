# Tables ,Form , List

## **Form**

<aside>
💡 to create form in html we use form tag **<form> </form> .
A** form has different field    and in html it has different types of input **radio button  ,password** and **check box,** **dropdown** menu **,text area**

</aside>

- **<input *type* ="Type"** ” is similar to **PLACEholder**
- **to take input in form : in type we choose  checkbox,drop / text**
- **a)     <input *type* ="Type" *name* ="type" *id*="type">**
- **b)   <input *type* ="placeholder ="typesomething here" >**
- **LABEL** : used for radio buttons , , `<label>` element is used to improve form accessibility and usability by associating text labels with form controls. This helps:
    1. **Accessibility**: Screen readers can identify and read labels to users.
    2. **Usability**: Clicking a label focuses or activates the associated input.
    3. **Clarity**: Clearly associates text with form controls.
    
    **<label for = “id1>**
         **<input *type* ="Type" *name* ="type" *id*="id1">
          <input *type* ="Radio" value = “something ” *name* ="class" *id*="id1">
    </label>**
    
    - by giving **value** means its collected the data i gave or shows
    - for better accessiblity **for a jei name use korbo ID & NAME teo same name use korbo**
- By using **Selected/Checked atribute it shows   Options automatically selected, user then can change his option according to him. / Submit Button**
    
    
    ![Untitled](Tables%20,Form%20,%20List%20f98595cbb40a43c58ed094141e4b3096/Untitled.png)
    
- text area is for multiline text ,for example : description, review etc.
- by using required attribute we can set some requirements for submitting the form ,user has to full fill this requirements to submit the form. for this we type **required** in input line
- we can also diabled any button by **disabled**
- by r**ead only we can only read the the data cant input anything**

### Class & ID

- **<***div* id =”id 1” class = “group 1” **>**
***</div>***
- **<***div* id =”id 2” class = “group 2” **>**
***</div>***

## **Collect form data using third party API**

**<form *action*="api link" *method*="post">**

### Example

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

---

## **Table (HTML)**

i) <table>  

ii) <thead>  to wrap table head

iii) <tbody>> to wrap table body

iv) <tfoot>> 

v) <tr> 

vi) <th>

 vii)<td>

 viii) <caption>

1. **we use th instead of td in header beacuse it make  the words look Bold**
2. first table row then table data 
3. For table caption : <caption> caption of table </caption>

**Self padding and self Spacing** : Cellpadding basically defines the space present between a table cell's border and the content present in it. Cellspacing basically defines the space present between individual adjacent cells

**Cellpadding** is used to set the whitespace between cell edge and cell content, whereas *Cellspacing* is used to set the whitespace between two cells

![Untitled](Tables%20,Form%20,%20List%20f98595cbb40a43c58ed094141e4b3096/Untitled%201.png)

![Untitled](Tables%20,Form%20,%20List%20f98595cbb40a43c58ed094141e4b3096/Untitled%202.png)

### **COLSPAN || ROWSPAN**

- **<th *colspan* ="2">PHONE</th>**
- **<th row*span* ="2">PHONE</th>**

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