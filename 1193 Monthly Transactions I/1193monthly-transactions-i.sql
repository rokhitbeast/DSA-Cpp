# Write your MySQL query statement below
Select 
DATE_FORMAT(t.trans_date,"%Y-%m") as month,
t.country,
COUNT(*) as trans_count,
SUM(CASE WHEN t.state="approved" THEN 1 ELSE 0 END) AS approved_count,
SUM(t.amount) AS trans_total_amount,
SUM(CASE WHEN t.state="approved" THEN t.amount ELSE 0 END) AS approved_total_amount
FROM Transactions t
GROUP BY month,t.country;