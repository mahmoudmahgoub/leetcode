# Write your MySQL query statement below

SELECT Students.id, Students.name From Students left join Departments on Departments.id = Students.department_id where Departments.name IS NULL

#SELECT id, name from Students where department_id not in (SELECT id from Departments)