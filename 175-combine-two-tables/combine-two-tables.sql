/* Write your PL/SQL query statement below */
SELECT p.firstName,
       p.lastName,
       a.city,
       a.state 
from Person p left outer join Address a 
on p.personId=a.personId;