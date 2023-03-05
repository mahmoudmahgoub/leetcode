# Write your MySQL query statement below

SELECT problem_id from Problems where likes/(likes+dislikes)<.6 order by problem_id