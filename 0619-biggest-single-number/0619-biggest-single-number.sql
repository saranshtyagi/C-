# Write your MySQL query statement below
SELECT 
    CASE 
        WHEN COUNT(*) = 0 THEN NULL
        ELSE MAX(num)
    END AS num
FROM MyNumbers
WHERE num IN (
    SELECT num
    FROM MyNumbers
    GROUP BY num
    HAVING COUNT(*) = 1
)
ORDER BY num DESC
LIMIT 1;