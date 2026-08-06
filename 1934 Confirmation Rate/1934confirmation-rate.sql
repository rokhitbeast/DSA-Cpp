# Write your MySQL query statement below
SELECT s.user_id,ROUND(SUM(
    CASE 
    WHEN c.action="confirmed" THEN 1 ELSE 0 
    END
) / SUM(CASE
    WHEN c.action="confirmed" OR c.action="timeout" OR c.action IS NULL THEN 1 ELSE 0
    END
)
,2) AS confirmation_rate
FROM Signups s
LEFT JOIN Confirmations c ON s.user_id=c.user_id
GROUP BY s.user_id;