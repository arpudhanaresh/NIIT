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

Alter Table Student alter column StudentID UNIQUEIDENTIFIER ROWGUIDCOL NOT NULL UNIQUE

alter table Student ADD CourseName varchar(30)

alter table orders add TotalCost as UnitPrice * Qty PERSISTED

alter table student add constraint chkCity CHECK (city IN('Chennai' , 'Delhi' , 'bangalore'))

sp_rename STUDENT , STUDENT_DETAILS --sp_rename is predefined or userdefined functions

create view vw_student_department as selec s.name ,s.age,d.deptName from Student s JOIN DEPARTMENT d on d.id = s.deptId

select * from vw_student_department

alter view vw_student_department as selec s.name ,s.age,d.deptName from Student s JOIN DEPARTMENT d on d.id = s.deptId

sp_rename vw_student_department , vw_stddept

DROP VIEW vw_student_department

declare @Rate int SELECT @Rate =max(Rate) from Orders PRINT @Rate

declare @Rate int select @Rate = Rate From Orders where orderId =1 
IF @Rate <15 PRINT 'Rate will have 10% Tax' 
ELSE
BEGIN Print 'Rate will have 20% Tax' Print 'Rate=' Print @Rate 
END
Go



CREATE PROCEDURE sp_shippingLocatoin @ shipping_id int 
AS
BEGIN
	select sl.ShippingLineCode ,sl.shippingLineName l.locationCode , l.locationName
	FROM ShippingLines sl
	INNER JOIN Locations l
	ON l.id= sl.LocationId
	WHERE sl.id =@shipping_id
END


