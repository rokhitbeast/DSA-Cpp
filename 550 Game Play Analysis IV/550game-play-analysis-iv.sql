# Write your MySQL query statement
WITH mindate AS(
    SELECT player_id,MIN(event_date) as first_login
    FROM Activity
    GROUP BY player_id 
)
SELECT ROUND(COUNT(DISTINCT a.player_id)/(SELECT COUNT(DISTINCT player_id) FROM Activity),2) as fraction
FROM mindate m
JOIN Activity a ON a.event_date = DATE_ADD(m.first_login, INTERVAL 1 DAY) AND a.player_id=m.player_id;