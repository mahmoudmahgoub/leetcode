# Write your MySQL query statement below
SELECT t1.team_name as home_team, t2.team_name as away_team from Teams as t1 join Teams as t2 where t1.team_name != t2.team_name