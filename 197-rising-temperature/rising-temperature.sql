# Write your MySQL query statement below
select w.id
from Weather w 
left join weather e on w.recorddate = e.recordDate + interval 1 day
where w.temperature > e.temperature ; 