create table customer(cid int PRIMARY KEY, cname VARCHAR(40), cmobno CHAR(10))

INSERT INTO customer values(1, 'Arpudha' , 8098981248)

insert into customer values(2, 'nithish' , 7493718423)
create table products(pcode INT PRIMARY KEY , pname varchar(20) , oid varchar(10))

create table orders(Oid int primary key, Odate DATE, Quantity INT , cid int FOREIGN KEY REFERENCES CUSTOMER(cid), Pcode INT FOREIGN KEY REFERENCES PRODUCTS(pcode) )

insert into orders values(101, '2020/12/20' , 5, 3, 10)
