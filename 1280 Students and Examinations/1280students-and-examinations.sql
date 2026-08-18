# Write your MySQL query statement below
SELECT 
s.student_id,s.student_name,e.subject_name,COUNT(f.subject_name) AS attended_exams
FROM Students s
CROSS JOIN Subjects e
LEFT JOIN Examinations f ON f.subject_name=e.subject_name AND f.student_id=s.student_id
GROUP BY s.student_id,s.student_name,e.subject_name
ORDER BY s.student_id,e.subject_name;