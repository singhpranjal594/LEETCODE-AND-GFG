# Write your MySQL query statement below
select firstname, lastname, city,state from person left join Address
on Person.personId=Address.personId;