# E-R Model DB Design Using

***ER- DiAgram : S**hows the relationship among the entity sets and also helps ti visualize the logical structure of database*

- **WEak Entity theke STRONG** entity er dike TOTal participation hobe 
                         **(strong — relation  == weak)**
- jar key ache shei STRONG entity

[Lec: 22 | Types of Entity | Strong Entity | Weak Entity | DBMS | Bangla Tutorial](https://www.youtube.com/watch?v=3ia2B7W2ETY)

[Concept of Relationships in ER Diagram](https://www.youtube.com/watch?v=n3mHfQft5P8)

[Database Design Process](https://www.youtube.com/watch?v=7m6gXeMDaHc&list=PLBlnK6fEyqRi_CUQ-FXxgzKQ1dwr_ZJWZ&index=12)

[Lec: 29 | Relational Model | DBMS | Bangla Tutorial](https://www.youtube.com/watch?v=lbTiI2KZVBQ)

### **Before Implementing** in code table is ENTITY in **ER- Diagram**
a**fter implementing ENTITY becomes TABLE
TABLE - PHYSICAL MODEL 
ENTITY = LOGICAL MODEL**

- **Design alternatives**
    
    We must avoid  2 major pitfalls
    
    1. Redhndancy
    2. Incompleteness
    
    Avoiding bad designs is not enough. There may be a large number of
    good designs from which we must choose.
    

### Design phase

1. initial phase  

characterize fully the data needs of the prospective
database users.

1. Second phase : choosing a data model
2. Final phase : 
a)logical design  b) physical design

![Untitled](E-R%20Model%20DB%20Design%20Using%20e7d6ab8af632495da9d2c7490f3161f2/Untitled.png)

### **Concept/ Degree of Relationships in ER**

- Degree of Relationship : Denotes the number of entity typoes that participate ina relationship
    
    ***1. Unary :*** Exists when there’s an association with only one entity
    
    1. ***Binary :***  Exists when asasociation among two entities
    2. ***Ternary :*** association among ***3***
    3. **N -ary(n degree )** :
1. ***Cardinality***
- Relationship Constrains :

### **P*articipation Constrains :***

specifies whether existence of an entity depends on its being related to another entity
**a) Total      b) Partial**

[Lec: 28 | Participation Constraints | DBMS | Bangla Tutorial](https://www.youtube.com/watch?v=-t63uwNJNJw)

### **Types of Entity & Sets**

***ENTITY TYPE  :***  A collection of entities tha have same attributes 
exm : STUDENT TABLE

- Entity SEt : collection of partivular entity type ar a point in time
- Key Attribute : Unique attribute
- Value set of Attribute

there are **2 types of entity:**

1. **Strong Entity :** which have a PRimary Key( single rectangle)

1. **Weak Entity :** Does not have a primary key and it is d**ependent on a strong Entity** (Doble rectangle)

<aside>
💡 if **A is** an **independent table(STRON**G ENTITY) **it’s Primary key will be the FOREIGN KEY** of **B** table which is a dependent TABLE WEAK ENTITY

</aside>

---

An entity is an object that exists and is distinguishable from other objects. **Example:** specific person, company, event, plant

An entity set is a set of entities of the same type that share the same properties. **Example:** set of all persons, companies, trees, holidays

An entity is represented by a set of attributes; i.e., descriptive properties
possessed by all members of an entity set.
• Example:
instructor = (ID, name, salary )
course= (course_id, title, credits)

▪ A subset of the attributes form a primary key of the entity set; i.e.,
uniquely identifying each member of the set.

![Untitled](E-R%20Model%20DB%20Design%20Using%20e7d6ab8af632495da9d2c7490f3161f2/Untitled%201.png)

---

---

### **Entity Relationship Model**

Models an enterprise as a collection of entities and relationships

***ENTITY TYPE :***
A collection of entities tha have same attributes 
exm : STUDENT TABLE

### **Entities**:

- Represent ***objects o***r things(in real world) in the database.
- Shown as ***rectangles.***
- Examples: Student, Course, Employee.

### **Attributes** : →

- **Describe properties** or characteristics of **entities.**
- Depicted within entity rectangles.
- will be inside **ellipse**
- Examples: Student ID, Name, GPA.
- **Simple attributes** : cannot divided further, 
Example : weight,age
- **Comosite attributes :** can be divide into further parts example : first name,last name
- **Single valued :** single value for a particular entity
example : Age
- **Multi Valued :** can have a set of values for particular entity
example : phone number
- **Derived :** can be derived from other attri
exm : age → birth date , salary deya ache eikhan theke 1 year salary ber korte bosle
- **Stored :** From which the value of other attributes are derived
exm “ Birth date
- **COMPLEX :**  
has multivalues and composite components
Multivalued → represented within ***{ }*
Composite → represented within *()*
exm : *{*college degree(colege , year degree*)}***
- **NULL :** Not applicable or unknown

### ***Relationships** : →*

- Define associations between entities.
- **Represented by lines connecting entities.**
- Examples: Enroll (between Student and Course), Supervise (between Employee and Project).

### Specify cardinality (**one-to-one, one-to-many, many-to-many**).

[Lec: 24 | Types of Relationship | One to One | DBMS | Bangla Tutorial](https://www.youtube.com/watch?v=jHRfpEdNKQs)

[Lec: 25 | Types of Relationship | One to Many | Many to One | DBMS | Bangla Tutorial](https://www.youtube.com/watch?v=-f9jsqA3-IU)

1. **Purpose**:
    - Visualize database structure.
    - Identify entities and their attributes.
    - Understand relationships between entities.
    - Guide database design and implementation.
    - Communicate database schema to stakeholders.

ER diagrams are essential for designing databases effectively, ensuring they meet system requirements, and facilitating communication among development teams and stakeholders

1. 

## Explain Symbols Of ER Diagram

An Entity-Relationship (ER) diagram is a graphical representation of the entities and their relationships in a database system. It uses a set of specific symbols to depict these components. Here are the commonly used symbols in an ER diagram:

![Untitled](E-R%20Model%20DB%20Design%20Using%20e7d6ab8af632495da9d2c7490f3161f2/Untitled%202.png)

![Untitled](E-R%20Model%20DB%20Design%20Using%20e7d6ab8af632495da9d2c7490f3161f2/Untitled%203.png)

![Untitled](E-R%20Model%20DB%20Design%20Using%20e7d6ab8af632495da9d2c7490f3161f2/Untitled%204.png)

![Untitled](E-R%20Model%20DB%20Design%20Using%20e7d6ab8af632495da9d2c7490f3161f2/Untitled%205.png)

1. ***Rectangles**:* Rectangles represent entities or tables in the database. An entity is a distinct object or concept about which data is stored.
    1. **Double Rectangles**: Double rectangles represent weak entities, which are entities that cannot be uniquely identified without the associated parent entity.
2. ***Ellipses**:* Ellipses represent **attributes or columns of an entity.** Attributes are the properties or characteristics of an entity.
    1. **Double Ellipse :  jodi ekta student er multiple PHone no thake (Multi Values)**
    2. Composite attributes :
    3. **Derived Attributes :**  Dashed Oval
    4. Key Attributes :  underlined oval
3. **Underlined Attributes**: **Underlined** attributes within an entity represent the **primary key** or a combination of attributes that uniquely identifies each instance or row of that entity.
4. ***Diamonds** :* Diamonds represent **relationships** between entities. **Relationships** define how entities are associated with one another.
    1. **Double Diamond :** Weak relationship
5. ***Lines :*  Lines connect the relationship diamond** to the related entities. These lines depict the mapping or cardinality between the entities involved in the relationship.
    1. **Double Lines**: **Double lines represent identifying relationships, indicating that the child entity's existence depends on the parent entity. (TOTAL PARTICIPATION)**
6. ***Cardinality Ratios**:* Cardinality ratios are numbers or symbols placed at the ends of the relationship lines, specifying the maximum number of instances of one entity that can be associated with a single instance of the related entity. Common cardinality ratios are:
    - **One-to-One (1:1)**
    - **One-to-Many (1:N)**
    - **Many-to-Many (M:N)**
7. ***Dashed Underline**:* A dashed underline under an attribute within a weak entity represents a discriminator or a partial key that uniquely identifies instances of the weak entity for a specific instance of the parent entity.
8. **Cr*ow's Foot Notation***: Some ER diagrams use crow's foot notation instead of cardinality ratios to represent the mapping between entities. In this notation, different symbols (like a crow's foot, a line, or a circle) are used to depict one-to-one, one-to-many, and many-to-many relationships.

---

---

---

## The symbols used to represent weak entities in an Entity

In database design, a **weak entity(DOUBLE)** is an entity that cannot be uniquely identified by its own attributes alone; instead, it relies on another entity (called the owner or identifying entity) to establish its identity. The symbols used to represent weak entities in an Entity-Relationship (ER) diagram are:

1. **Double Rectangle**: A weak entity is represented by a double rectangle shape, as opposed to a single rectangle used for regular (strong) entities.
2. **Double Line**: The relationship between the weak entity and its owner entity is depicted by a double line, known as the identifying relationship. This double line indicates that the weak entity's existence depends on the owner entity.
3. **Discriminator Attribute**: Inside the double rectangle representing the weak entity, there is usually a discriminator attribute or a set of discriminator attributes. T*his discriminator, or a combination of attributes, uniquely identifies instances of the weak entity for a specific instance of the owner entity.*
4. **Partial Key Symbol**: The discriminator attribute(s) inside the weak entity's double rectangle is usually underlined with a dashed line. This dashed underline denotes a partial key, meaning that the discriminator attribute(s) only form a unique key when combined with the primary key of the owner entity.

***Here's an example:***

Suppose we have a database for a university, where we have a "Course" entity and a "Section" entity. A "Section" is a weak entity because it cannot be uniquely identified without referring to the "Course" it belongs to. In the ER diagram, "Section" would be represented by a double rectangle, and its relationship with "Course" would be depicted by a double line. Inside the "Section" double rectangle, there might be attributes like "SectionNumber" and "SemesterOffered," with "SectionNumber" being the discriminator attribute underlined by a dashed line.

This symbolism helps convey the concept of a weak entity and its identifying relationship with the owner entity, which is crucial for accurately modeling certain real-world scenarios in database design.