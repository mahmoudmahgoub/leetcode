# Write your MySQL query statement below
SELECT Warehouse.name as warehouse_name,
sum(Warehouse.units*(Products.width*Products.Length*Products.Height)) as volume
from Warehouse join Products where Warehouse.product_id = Products.product_id
group by (Warehouse.name)