# Write your MySQL query statement below

#SELECT `name`,`population`,`area` from `World` WHERE `area`>= 3000000 or `population` >= 25000000;

SELECT
    name, population, area
FROM
    world
WHERE
    area >= 3000000

UNION

SELECT
    name, population, area
FROM
    world
WHERE
    population >= 25000000
;
