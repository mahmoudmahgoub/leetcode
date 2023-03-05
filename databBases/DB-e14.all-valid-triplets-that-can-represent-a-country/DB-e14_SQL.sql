# Write your MySQL query statement below
Select SchoolA.student_name as member_A, SchoolB.student_name as member_B,
SchoolC.student_name as member_C
from SchoolA join SchoolB join SchoolC
WHERE SchoolA.student_name != SchoolB.student_name 
AND SchoolA.student_name != SchoolC.student_name
AND SchoolB.student_name != SchoolC.student_name
AND SchoolA.student_id != SchoolC.student_id
AND SchoolB.student_id != SchoolC.student_id
AND SchoolA.student_id != SchoolB.student_id