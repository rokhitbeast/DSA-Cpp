# Write your MySQL query statement below
SELECT v.customer_id,COUNT(v.customer_id) as count_no_trans
from Visits v 
LEFT JOIN Transactions t ON v.visit_id=t.visit_id
where transaction_id is NULL
GROUP BY v.customer_id;
