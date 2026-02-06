# Write your MySQL query statement below
SELECT emp.unique_id AS unique_id, e.name AS name
FROM Employees as e 
LEFT JOIN EmployeeUNI AS emp 
ON e.id = emp.id;