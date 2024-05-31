# DataBase

<aside>
💡 **DBMS → DataBase Management System**
DBMS **is a Software th**at enables Users to create and maintain database, we use softares like mysql

</aside>

[SQL (for relational)](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/SQL%20(for%20relational)%2071455e3aad55485abc4c8627b82df62f.md)

[E-R Model DB Design Using ](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/E-R%20Model%20DB%20Design%20Using%20e7d6ab8af632495da9d2c7490f3161f2.md)

[Schema](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Schema%20443374b5d7714f7f8de568e64a9cdcbf.md)

[Query](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Query%20ed422fed265e47e9b7b569a0b6ffc173.md)

[Normalization](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Normalization%20188ceede14864e94bbe5b113c4cadab6.md)

[Relational DataBSystem](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Relational%20DataBSystem%205bb2e2f3361d419eb104eebc5b3cf165.md)

[Non Relational](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Non%20Relational%20e439b4f011c3497db7dedf3bef5610c5.md)

[Descriptive](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Descriptive%209fea3f5227fb43c0bac16e6c2ac6a5e9.md)

**Source → DataBaseType →
 1.  *Structured*(Realational dataBase ) →table fo**rm a thake  ,
 ***2. Unstructured* way(non Realational dataBase )** → doucument base, keyvalue based , column based , group based

---

**Properties of database :**
1. Field  = Column → pura tottho paoa jaina
2. Record  = Row → tottho paoa jai
3. Value(Data)

A field can only contain similar type of data but a record can contain different type of data

- relational database system is a software that we use to maintrain , create
- queury is a language that we use to interact with relational datab

### Work & Enviroment **Components of DBMS :**

- Data
1. User data → 
2. Meta DAta → user datar corresponding data
- Software
- hardware
- User
 1. Aplication programmer/ 
2. Database administrator(DBA)
3. ENd user

### Work :

1. Create DB
2. Update DB
3. Print DB
4. BAckup and recovery DB
5. Save data
6. Retrive Data
7. Secure Data

![Untitled](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Untitled.png)

![Untitled](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Untitled%201.png)

- **Types of Schema (STRUCTURE)**
    
    The term “schrma ” refers to the organization of data as a  blueprint of how the database is constructed, 
    **Structure :** table er moddhe kon kon bishoi er data thakbe
    
    ![Untitled](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Untitled%202.png)
    

### Sorting / Indexing

![Untitled](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Untitled%203.png)

![Untitled](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Untitled%204.png)

- What is **KEY** Field?
    
    based on key field we detect , find or can create relation
    
    There are 3 Types of key :
    
    1. Primary Key  (*PARENT) → one table can only have one parent key*
    2. Composite Primary Key
    3. Foreign KEy  (Child*) → a table can have many foreign key*
    
    **Composite Primary Key :**
    composite primary key is **a primary key formed by combining one or more keys (columns) from the table**. These keys may or may not guarantee to identify of the rows of the table individually. it  has **two or more attributes that allow you to uniquely recognize a specific record**. It is possible that each column may not be unique by itself within the database. However, when combined with the other column or columns the combination of composite keys become unique   
    
    **Foreign KEy :**
    A foreign key is the one that is **used to link two tables** together via the primary key. It means o**ne tables primary key** attribute will work i**n another table as a foreign key attribute.**
    
    *primary key of one table has to be the foreign key of other table
    [a foreign key defines relationships between tables]*
    

### Data Security

**Encryption :**
Data encryption is **a way of translating data from plaintext (unencrypted) to ciphertext (encrypted)**. Users can access encrypted data with an encryption key and decrypted data with a decryption key. Protecting your data.

1. Caesar code
2. DES(Data Encrypted Standard)
3. IDEA (Onternational DAta Encryption ALgorithm)

### Asymmetric encryption:

Asymmetric encryption, also known as public key encryption, **uses a public key-private key pairing**: data encrypted with the public key can only be decrypted with the private key. TLS (or SSL), the protocol that makes HTTPS possible, relies partially on asymmetric encryption.

### Symmetric encryption:

Asymmetric and symmetric encryption are two primary techniques used to secure data. **Symmetric encryption uses the same key for both encryption and decryption, while asymmetric encryption uses a pair of keys: a public key for encryption and a private key for decryption**

---

---

---

## W**hat is DataBAse? → *Descriptive***

DataBase is an organized collection of data stored accessed electronically

**Difference Between Data & Information**

1. Data is a individual unit whiche doesnt carry any specific meaning
2. Information is a individual unit whiche does carry specific meaning

Data → Process → Information

- **Advantages and Disadvantages**  [ *File System VS DBMS* **]**
    
    
    File SYstem :
    
    1. data 
    2. file system
    3. Hard Disk
    
    bad side :
    
    1. Data redundancy
    2. Data inconsistancy
    3. Security
    4. Data searching
    5. Atomicy Problem
    
    DBMS :
    
    1. Dbms → filesystem → HArddisk
    
    ![Untitled](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Untitled%205.png)
    

- P**roperties of DataBase**
    1. represents some aspects of the real world
    2. logically coherent collection of data with some inherent meaning
    3. designed,built and populated with data for specific purpose

## Characteristics Of dataBase

1. Support of multiple views of data
2. sharing of data and multiuser Transaction Processing

![Untitled](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Untitled%206.png)

![Untitled](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Untitled%207.png)

![Untitled](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Untitled%208.png)

### **History of Database Applications**

main problem of early database systes → not flexible to develop new queries nad recognizing data was difficult

1. Heiarical Database
2. NetWork based model

---

## Where Database USed For

![Untitled](DataBase%200b6d8b349dc64ff0aed5920edcf9fac5/Untitled%209.png)