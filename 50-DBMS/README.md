# Generic DBMS Interview Questions

## 1. What are the difference between DBMS and RDBMS ?

- DBMS Provides an organized way to managing, retrieving and storing from a collection of logically related Information.

- RDBMS provides the same as DBMS but it provides with relational Integrity.
  - in RDBMS complete data is related to each other and mostly stored in the form of table.
  - RDBMS is a Kind or type of DBMS

## 2. Explain the terms database and DBMS. Also, mention the different types of DBMS.

- **Database**: Consider a database as a big container where all your data are stored in a logical manner.

- **DBMS** : DBMS is a software application which interact with database, applications, and used to capture and analyses the required data.The data stored in database can be retrieved, deleted and modified based on the client requirements.

- Types of DBMS
  1. Relational
     - in this type of DBMS data is stored in the form of table and are related to each other
  2. Hierarchical
     - In this type of DBMS data is stored in the form of tree data structure.
     - Nodes represent the records and branches represents the feeds
  3. Network
     - This type of DBMS can in Many to Many relation and multiple nodes can be used to represent the data.
  4. Object-Oriented
     - This uses small software called as object to store pieces of data and methods such that we can perform some operations on them.

## 3. Advantages of DBMS 🔥

- Data Independence : Multiple user an fetch and use the data from the same database.
- Integrity Constraints : These constrains allows the data to be stored in refined manner
- Redundancy Control
- Provide Backup and Recovery facility

## 4. Mention the different languages present in DBMS.

1. **DDL - Data Definition Language**

   - Consists of the commands that can be used to define the database schema
   - create
   - DROP
   - ALTER
   - TRUNCATE

2. **DML - Data Manipulation Language**

   - Includes commands which deal with the manipulation of data present in database.
   - INSERT
   - UPDATE
   - DELETE

3. **DCL - Data Control Language**

   - Consists of command which deals with the rights, permissions and other controls of database system.
   - GRANT
   - REVOKE

4. **TCL - Transaction Control Language**

   - Includes the command which mainly deal with the transaction of database.
   - COMMIT
   - ROLL-BACK
   - SAVE-POINT

## 5. What do ypu understand by query optimization ?

- **Query Optimization** is a phase which identifies a plan for evaluation query that has the least estimated cost.

- Query optimization comes into picture when there are a lot of algorithms and method to solve the same problem.

- The advantages of Query optimizations
  - The output is provides faster
  - A larger number of queries can be executed in less time
  - Reduces time and space complexity

## 6. Do we consider NULL values the same as that blank space or Zero ?

- A NULL value is not at all similar to zero or blank space.
- NULL value represents a value which is not available.

## 7. What do you understand by aggregation and atomicity ?

1. Aggregation : It is a feature of entity relationship model set which allows a relationship set to participate in another relationship set.
