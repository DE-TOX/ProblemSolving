SELECT product.product_name, sales.year, sales.price
FROM product
JOIN sales ON product.product_id = sales.product_id;