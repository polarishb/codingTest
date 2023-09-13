-- 코드를 입력하세요
SELECT FLAVOR
FROM FIRST_HALF
NATURAL JOIN ICECREAM_INFO
WHERE TOTAL_ORDER > 3000 AND INGREDIENT_TYPE = 'fruit_based'
ORDER BY TOTAL_ORDER DESC;