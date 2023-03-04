# Write your MySQL query statement below
#SELECT email from Person GROUP BY email HAVING count(email) >1

#another soln
select Email from
(
  select Email, count(Email) as num
  from Person
  group by Email
) as statistic
where num > 1
;