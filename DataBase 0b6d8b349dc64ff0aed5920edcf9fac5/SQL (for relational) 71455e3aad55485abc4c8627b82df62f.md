# SQL (for relational)

<aside>
💡 Standard language that interacts with all

</aside>

- *note :*
1. not all rdbms follow sql tsandardto a T
2. concepts ar same but implementation may vary
- query language **ends with semicolon ;**
- SELECT == *

## SQL Constrain

1. **NOT NULL**
2. **Uniqueue** → doesn’t allow to insert duplicate in column
3. **PRIMARY KEY** → NOT NULL + Uniqueue
4. **DEFAULT** → if no value supplied to column then column gets default value

## SQL Commands

1. SHOW →
2. UPDATE
3. CREATE DATABASE database_name **;**
4. DROP DATABASE  database_name→ to delete database
5. RENAME TABLE old_name TO
new_name **;**
6. **SELECT**  → is used to search info from table
7. **SELECT***  → selects all
8. WHERE → Search element with condition
- **GROUP BY** →
    
    [Group By and Having Clause in SQL | SQL Tutorial in Hindi 9](https://www.youtube.com/watch?v=SvJLXj05cow)
    
- **JOIN**
    
    [Lec-40: Self Join operation with Example | Database Management System](https://www.youtube.com/watch?v=6DQpvfdj6EE)
    
1. **HAVING** 
**ORDER BY 
DESC
ASC**

### DATA TYPES

1. SMALLINT
2. INT
3. BIGINT

### Character Type

1. Char(M)
2. varchar(m) → 
3. text

1. FLOAT
2. DOUBLE(M,D) [size, digit after decimal point]
3. DECIMAL(M,D)

### Other dataType

1. blog
2. logical

## SQL

**Sql Properties :**

1. not case-sensitive, 
2. everyline is called statement
3. semicolo ; after each line

there ar**e 4 types of SQL statements:**

1. **DML** (DATA Management/ modification lang)
    
    SElect 
    insert 
    Update
    Delete
    
2. **DDL**(Data Defunation Lang)
    
    Create
    Alter
    Drop
    

1. **DCL (D**Ata Control Lang)
    
    Grant
    Revoke
    
2. **DTL**(Data Transaction Lang)
    
    COmmit
    RollBAck
    SavePoint
    

- **SubQuery**
    
    

### **AlterTable**

1. can add new colum
2. rename any colum
3. delete any column

### Syntax :

1. **ALTER TABLE table_name
ADD** *column_name* **dataType[SIZE] ;**
2. **ALTER TABLE table_name
Change oldNAme NEWcolumn_name dataType[SIZE] ;**

1. **ALTER TABLE table_name
DROP COLUMN *column_name* ;**

### SQL FUNCTION

1. **SELECT UPPER(Column Name)  , LOWER(Column nMAe)**
2. **SELECT CONCA**T(String1 , String2 …);
3. ***  GREATEST**(…..);
4. **SELECT LEAST**(…,);
5. **TRUNCAT(** , digit after decimal)
6. SELECT SUBSTR ( column_name ,, starting_idx , totalChar count from start )
7. * **C**NAME , LENGTH(CNAMe) newCname
8. *** C**NAME , INSTR(CNAMe,CHAR) newCname → Shows character first occured positons
9. ***  C**NAME , REPLACE(CNAMe, wanttoREPLACE , replaceWith  ) newCname
10. ROUNd(wants to  round **,** point after decimal)

### Aggregating FUnctions:

group of functions  operate on sets of row to give one result per group

1. AVG ,( column_name)
2. count( column_name)

1. MAX (column_name)
2. MIN ( column_name)
3. SUM(column_name)

## Syntaxs

1. ***Create table :***

**CREATE TABLE table_name 
(
 column_name datatype(SIZE) ,
column_name datatype(SIZE)
PRIMARY KEY (variable name)
);**
2. ***SeLECT :***

**SELECT** colum_list1,colum_lisr2 …
**FROM table_name ;**

    1. ***for all the colom data*** :→
    **SELECT* 
    FROM table_name ;**
3. ***Delete : →***

**DELTE table_name
SET** column1 = value, column2 = value , …
**WHERE condition** 

1. **Data Insertion :**

**INSERT INTO table_name (***coumn1,column2, coulum* **….)
VALUES 
(value1,value2,value3**….) ;

2. ***WHERE :***
**SELECT colum_list
FROM table
WHERE colum_name =Searchelement**

3. ***Update :→***
**UPDATE table_name
SET column1 = value, column2 = value , …
WHERE condition ;**

[https://www.notion.so](https://www.notion.so)

---

---

[How To Install MySQL (Server and Workbench)](https://www.youtube.com/watch?v=u96rVINbAUI)

[How to install MySQL 8.0.35 on Windows 11](https://www.youtube.com/watch?v=9cI9UgK3qZA)

[How to Fix MySQL port 3306 already in use Error / Another instance already running](https://www.youtube.com/watch?v=bsDzjy85Lpw)

[MySQL said Cannot connect invalid settings error | XAMPP phymyadmin](https://www.youtube.com/watch?v=RjYxxYlXkOs)