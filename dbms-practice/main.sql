create table owner(o_no int primary key,o_name varchar(50) not null,o_addr text,o_phno int);

create table property(p_no int primary key,p_type varchar(50),desciption text,o_no int,foreign key(o_no) references owner(o_no));

insert into owner (o_no,o_name,o_addr,o_phno)
values
(1,"ram","pune",23544),
(2,"shyam","mumbai",13544),
(3,"tom","goa",23654),
(4,"jerry","hydrabad",83544);


select * from owner;


insert into property (p_no,p_type,desciption,o_no)
values
(100,"residetial","2 bhk",1),
(101,"residetial","3 bhk",1),
(103,"rural","1 rk",2),
(104,"industrial","plot",3),
(105,"agricultural","2 of land for farming",4);


select * from property;

select * from owner where o_name = "ram";

select * from property where p_type="residetial" or o_no = 1;

select * from property where p_type="rural" and o_no = 2;