SELECT name 
FROM Employee 
WHERE id = ANY (
    SELECT managerId 
    FROM Employee 
    GROUP BY managerId 
    HAVING COUNT(*) >= 5)