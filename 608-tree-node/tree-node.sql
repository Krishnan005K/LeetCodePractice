-- # Write your MySQL query statement below
-- SELECT  id,
--     CASE 
--         WHEN p_id is null then 'Root'
--         WHEN id IN (SELECT p_id FROM Tree) THEN "Inner"
--         ELSE 'Leaf'
--         END AS type
-- FROM Tree

select a.id,
case when a.p_id is null then "Root"
when b.p_id is not null then "Inner"
when b.p_id is null then "Leaf" end as type
from Tree a
left join (select distinct p_id from Tree) b on a.id = b.p_id