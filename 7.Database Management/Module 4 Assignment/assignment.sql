CREATE DATABASE assignment_01;
USE assignment_01;

create table Student (
	Roll int primary key auto_increment,
    Name varchar(50) not null,
    Birth_date date,
    Gender char,
    Phone int not null
);
desc Student;

insert into Student( Name, Birth_date, Gender, Phone) values ( 'karim', STR_TO_DATE('15-06-2022', '%d-%m-%Y'), 'M', 01877565659);
insert into Student( Name, Birth_date, Gender, Phone) values ( 'Rarim', STR_TO_DATE('15-06-2052', '%d-%m-%Y'), 'F', 01877565659);
insert into Student( Name, Birth_date, Gender, Phone) values ( 'Arim', STR_TO_DATE('15-06-2322', '%d-%m-%Y'), 'M', 01877565659);
insert into Student( Name, Birth_date, Gender, Phone) values ( 'Sami', STR_TO_DATE('15-06-7022', '%d-%m-%Y'), 'F', 01877565659);
select * from Student;



create table Library (
	ID int primary key,
    Title varchar(50) not null,
	ISBN int not null,
    Author varchar(30),
    Publish_date date,
    Is_available boolean
);

insert into Library (ID, Title, ISBN, Author, Publish_date, Is_available) values (101, 'Anna karenina', 1254895, 'George', '7022-06-15', true);
insert into Library (ID, Title, ISBN, Author, Publish_date, Is_available) values (102, 'On the road', 1294895, 'James', '7022-06-15', false);
insert into Library (ID, Title, ISBN, Author, Publish_date, Is_available) values (103, 'The illiad', 1279895, 'Homer', '7022-06-15', true);

select * from Library;


-- q2 

CREATE TABLE Employee (
    EmployeeID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Age INT,
    Department VARCHAR(50)
);

INSERT INTO Employee VALUES
(1, 'John', 'Doe', 28, 'Sales'),
(2, 'Jane', 'Smith', 32, 'Marketing'),
(3, 'Michael', 'Johnson', 35, 'Finance'),
(4, 'Sarah', 'Brown', 30, 'HR'),
(5, 'William', 'Davis', 25, 'Engineering'),
(6, 'Emily', 'Wilson', 28, 'Sales'),
(7, 'Robert', 'Lee', 33, 'Marketing'),
(8, 'Laura', 'White', 29, 'Finance'),
(9, 'Thomas', 'Clark', 31, 'HR'), 
(10, 'Olivia', 'Clark', 27, 'Engineering');

select * from Employee;

-- Write a query to show the distinct department names
select Department from Employee group by Department;

-- Write a query to show the LastNames of the employees sorted by descending ages
select LastName from Employee order by Age desc;

-- Write a query to show the employee LastName whose age is greater than 30 and works in Marketing department.
select LastName from Employee where Age>30 and Department='Marketing';

-- Write a query to get employees whose names includes ‘son’
select  * from Employee where FirstName like '%son%' or LastName like '%son%';

-- Write a query to get the engineers
select * from Employee where Department='Engineering';


