CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
Declare M INT;
SET M=N-1;
  RETURN (
      # Write your MySQL query statement below.
      SELECT (select distinct salary from employee order by salary desc limit 1 offset M )
      
  );
END