--website to try on it: https://www.db-fiddle.com/

CREATE TABLE `new_schema`.`new_table` (
  `id` INT NOT NULL COMMENT 'This is a primary index',
  PRIMARY KEY (`id`)
);

SHOW FULL COLUMNS FROM `new_schema`.`new_table`;

select * from `new_schema`.`new_table`;

DROP TABLE `new_schema`.`new_table`; --delete

TRUNCATE `new_schema`.`new_table`; --clean

SELECT `id`, `name` FROM `new_schema`.`users`;

SELECT * FROM `new_schema`.`users` WHERE `id` = 2;

SELECT * FROM `new_schema`.`users` WHERE height IS NULL;--for NULL is it is special //oppsite use IS NOT

SELECT * FROM `new_schema`.`users` WHERE age < 40 AND height > 160; -- OR 

SELECT * FROM `new_schema`.`users` WHERE `id` IN (1, 3); --NOT IN

SELECT * FROM `new_schema`.`users` WHERE height BETWEEN 160 AND 190;

SELECT * FROM `new_schema`.`users` WHERE name LIKE '%a%'; --Notice the percent sign (%) is a wildcard; it will match zero, one, or multiple characters. To match exactly one character, we could use an underscore (_).

SELECT * FROM `new_schema`.`users` ORDER BY age;SELECT * FROM `new_schema`.`users` LIMIT 3 OFFSET 0;SELECT DISTINCT age FROM `new_schema`.`users`;SELECT COUNT(*), `age` FROM `new_schema`.`users` GROUP BY age;

INSERT INTO `new_schema`.`users` (`id`, `name`, `age`) VALUES (1, 'John', 50);

INSERT INTO `new_schema`.`users` (`id`, `name`, `age`) VALUES (4, 'Harry', 33), (5, 'Tom', 30);

UPDATE `new_schema`.`users` SET `name` = 'Andy', `age` = 100 WHERE `id` = 2;

DELETE FROM `new_schema`.`users` WHERE `id` = 1;

SELECT pets.name AS pet_name, owners.name AS owner
  FROM pets
  LEFT JOIN owners
  ON pets.owner_id = owners.id;

/*A HAVING clause is like a WHERE clause, but applies only to groups as a whole (that is, to the rows in the result set representing groups), whereas the WHERE clause applies to individual rows. A query can contain both a WHERE clause and a HAVING clause
In that case:
The WHERE clause is applied first to the individual rows in the tables or table-valued objects in the Diagram pane. Only the rows that meet the conditions in the WHERE clause are grouped.
The HAVING clause is then applied to the rows in the result set. Only the groups that meet the HAVING conditions appear in the query output. You can apply a HAVING clause only to columns that also appear in the GROUP BY clause or in an aggregate function.
For example, imagine that you're joining the titles and publishers tables to create a query showing the average book price for a set of publishers. You want to see the average price for only a specific set of publishers - perhaps only the publishers
in the state of California. And even then, you want to see the average price only if it is over $10.00.

You can establish the first condition by including a WHERE clause, which discards any publishers that are not in California, before calculating average prices. 
The second condition requires a HAVING clause, because the condition is based on the results of grouping and summarizing the data. The resulting SQL statement might look like this:
SELECT titles.pub_id, AVG(titles.price)  
FROM titles INNER JOIN publishers  
   ON titles.pub_id = publishers.pub_id  
WHERE publishers.state = 'CA'  
GROUP BY titles.pub_id  
HAVING AVG(price) > 10;
*/

