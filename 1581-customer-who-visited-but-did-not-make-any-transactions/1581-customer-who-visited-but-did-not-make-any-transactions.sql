# Write your MySQL query statement below
#select visits.customer_id from visits join transactions on visits.visit_id = transactions.visit_id; 
SELECT v.customer_id, COUNT(v.visit_id) AS count_no_trans 
from Visits v 
LEFT JOIN Transactions t 
ON v.visit_id = t.visit_id  
WHERE t.transaction_id IS NULL 
GROUP BY v.customer_id; 