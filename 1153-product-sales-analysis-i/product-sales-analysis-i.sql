# Write your MySQL query statement below
select product_name , year , price from Sales as t1 inner join Product as t2 on t1.product_id = t2.product_id ;