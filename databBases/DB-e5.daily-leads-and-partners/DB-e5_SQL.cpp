# Write your MySQL query statement below

SELECT date_id, make_name,
Count(DISTINCT lead_id) as unique_leads,
Count(DISTINCT partner_id) as unique_partners
from DailySales GROUP BY date_id,make_name