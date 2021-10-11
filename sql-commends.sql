create table customer(cid int PRIMARY KEY, cname VARCHAR(40), cmobno CHAR(10))

INSERT INTO customer values(1, 'Arpudha' , 8098981248)

insert into customer values(2, 'nithish' , 7493718423)
create table products(pcode INT PRIMARY KEY , pname varchar(20) , oid varchar(10))

create table orders(Oid int primary key, Odate DATE, Quantity INT , cid int FOREIGN KEY REFERENCES CUSTOMER(cid), Pcode INT FOREIGN KEY REFERENCES PRODUCTS(pcode) )

insert into orders values(101, '2020/12/20' , 5, 3, 10)

create table customer(cid int PRIMARY KEY, cname VARCHAR(40), cmobno CHAR(10))

INSERT INTO customer values(1, 'Arpudha' , 8098981248)

insert into customer values(2, 'nithish' , 7493718423)
create table products(pcode INT PRIMARY KEY , pname varchar(20) , oid varchar(10))

create table orders(Oid int primary key, Odate DATE, Quantity INT , cid int FOREIGN KEY REFERENCES CUSTOMER(cid), Pcode INT FOREIGN KEY REFERENCES PRODUCTS(pcode) )

insert into orders values(1, '2020/12/20' , 1, 1, 1000)
insert into products values (1000 , 'eeee' , 'ARP886')

select * from customer
select * from customer
select * from products
select * from orders
select * from SalaryDetails



insert into SalaryDetails values ( 'arpudha' , 40000 , 10)
insert into SalaryDetails values ('bfje' ,60000 ,15)
create table SalaryDetails (emp_name nvarchar(40) , salary float , tax_percentage float )

select * from customer where cid > 1;

select * from SalaryDetails where salary between 4000 and 45000

select emp_name , salary , tax_percentage, tax_value = salary * tax_percentage/100 from SalaryDetails

select * from customer where cid > 1;

select * from emp_name order by SalaryDetails desc;

elect * from customer where cid = 1;

select * from SalaryDetails where salary between 4000 and 45000

select * from SalaryDetails order by emp_name ;

select * from SalaryDetails where salary like 1

select * from customer where cid like 1


select * from SalaryDetails ORDER BY emp_name OFFSET 5 ROWS FETCH NEXT 3 ROWS ONLY

select count(cid) from customer


select * from SalaryDetails ORDER BY emp_name OFFSET 5 ROWS FETCH NEXT 3 ROWS ONLY

select p.pcode , o.cid from products p right join orders o on o.cid = p.pcode

Create Table Student(StudentId int IDENTITY(100,1) PRIMARY KEY, StudentName nvarchar(255) NOT NULL , Description nvarchar(50) , StudentAge int NOT NULL, DOB datetime)

Alter Table Student ADD ProfilePic varbinary(MAX) FILESTREAM
