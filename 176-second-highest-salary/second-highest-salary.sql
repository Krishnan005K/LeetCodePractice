# Write your MySQL query statement below
# SELECT SALARY AS SECONDHIGHESTSALARY 
# FROM EMPLOYEE 
# ORDER BY SALARY DESC
# LIMIT 1 OFFSET 1;

SELECT MAX(salary) SecondHighestSalary FROM Employee 
WHERE salary < (SELECT MAX(salary) FROM Employee);