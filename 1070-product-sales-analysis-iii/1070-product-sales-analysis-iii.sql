# Write your MySQL query statement below

SELECT product_id,year as first_year,quantity,price
FROM Sales
WHERE (year,product_id) IN (SELECT MIN(year) AS year,product_id
FROM Sales 
GROUP BY product_id);