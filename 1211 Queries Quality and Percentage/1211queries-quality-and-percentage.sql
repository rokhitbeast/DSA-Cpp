# Write your MySQL query statement below
SELECT q.query_name,
ROUND(AVG(q.rating/q.position),2) AS quality,
ROUND((SUM(
    CASE WHEN q.rating<3 THEN 1 else 0 END
)/COUNT(
    q.rating
))*100,2) AS poor_query_percentage
FROM Queries q
GROUP BY q.query_name;