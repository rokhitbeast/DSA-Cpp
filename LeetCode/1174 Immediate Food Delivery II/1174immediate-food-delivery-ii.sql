# Write your MySQL query statement below
WITH first_orders AS (
    SELECT
        delivery_id,order_date,customer_pref_delivery_date,
        ROW_NUMBER() OVER (
            PARTITION BY customer_id
            ORDER BY order_date
        ) AS rn
    FROM Delivery
)
SELECT ROUND((SUM(CASE WHEN order_date=customer_pref_delivery_date THEN 1 ELSE 0 END)/COUNT(*))*100,2) AS immediate_percentage
FROM first_orders
where rn=1;
