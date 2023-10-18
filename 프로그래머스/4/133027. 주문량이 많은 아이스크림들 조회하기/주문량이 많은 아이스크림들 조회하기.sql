-- 코드를 입력하세요
SELECT A.FLAVOR
FROM JULY A JOIN FIRST_HALF B ON A.FLAVOR = B.FLAVOR
GROUP BY FLAVOR
ORDER BY SUM(A.TOTAL_ORDER + B.TOTAL_ORDER) DESC
LIMIT 3