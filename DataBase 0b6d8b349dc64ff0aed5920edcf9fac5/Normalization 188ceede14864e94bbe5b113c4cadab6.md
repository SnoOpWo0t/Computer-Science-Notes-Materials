# Normalization

**Database normalizatio : ,**or simply normalization, is the process of organize a relational database in accordance with a series of so-called normal forms **in order to reduce  or remove *data redundancy* from relation and *improve data integrity*.**  redundancy (DUPLICATE VALUES), usually redundancy are row and column wise , 
**EXAMPLLE :** if a table store information of a certain department and emplyoes . if it has redundancy (DUPLICATE VALUES), 
**to remove row wise** redundancy make a row primary( as primary key has to be UNIQUE)

**to remove column wise :** column wise cant be removed it can only be reduced

### There are 3 type of normalization

- **First normal form (1NF)**
    
    
    **Objectives :** 
    
    o free the collection of relations from undesirable insertion, update and deletion dependencies;
    
    1. To reduce the need for restructuring the collection of relations, as new types of data are introduced, and thus increase the life span of application programs;
    2. To make the relational model more informative to users;
    3. To make the collection of relations neutral to the query statistics, where these statistics are liable to change as time goes by.
    
    ### Conditions :
    
    - contains only atomic values ()
    - there are no reapeating groups
- **Second normal form (2NF)**
    
    
    ### **Conditions :**
    
    - it is in first nirmal form
    - all non-key attributes  are fully functional dependent on primary key
    
- **Third normal form (3NF)**
    
    ### Conditions :
    
    - it is in second normal form
    - theres  no transitive funxtional dependency

---

---

[Lec: 31 | Normalization | DBMS | Bangla Tutorial](https://www.youtube.com/watch?v=aZxGX65Uivc)

[CSE 211 CT2 Discussion Session (20-04-2024)](https://www.youtube.com/watch?v=JNekEPLxdbM)

---

### IF Not Normalized

When an attempt is made to modify (update, insert into, or delete from) a relation, the following undesirable side-effects may arise in relations that have not been sufficiently normalized:

### **Update anomaly**

- This anomaly occurs when data redundancy leads to inconsistencies that arise when updating information in a database.
- For instance, if you have the same information stored in multiple places and you update it in one place but forget to update it elsewhere, the database ends up with conflicting or inconsistent data.
- Update anomalies can lead to confusion and inaccuracies in the database, compromising data integrity.

### **Insertion anomaly**

- An insertion anomaly happens when you can't add certain data to the database without adding additional, unrelated information.
- For example, suppose you have a table where you store information about employees and their projects. If an employee doesn't currently have any projects assigned, you can't insert their data into the table without also inserting a NULL or default value for the project field. This creates unnecessary records in the database, which can lead to inefficiencies and confusion.

### **Deletion anomaly**

- A deletion anomaly occurs when deleting data from the database unintentionally removes other, unrelated data.
- For instance, consider a scenario where you have a table that contains information about projects and the employees assigned to them. If you delete a project from the table, you might inadvertently remove information about the employees who were only associated with that project. This results in the loss of data that you didn't intend to delete.
- Deletion anomalies can result in the loss of valuable information and can impact the integrity and reliability of the database.

---

[Easy Explanation - First Normal Form (1NF).pdf](Normalization%20188ceede14864e94bbe5b113c4cadab6/Easy_Explanation_-_First_Normal_Form_(1NF).pdf)

[Easy Explanation - Second Normal Form (2NF) (1).pdf](Normalization%20188ceede14864e94bbe5b113c4cadab6/Easy_Explanation_-_Second_Normal_Form_(2NF)_(1).pdf)

[Easy Explanation - Third Normal Form (3NF).pdf](Normalization%20188ceede14864e94bbe5b113c4cadab6/Easy_Explanation_-_Third_Normal_Form_(3NF).pdf)

---