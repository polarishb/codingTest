-- 코드를 입력하세요
SELECT CATEGORY, SUM(SALES) TOTAL_SALES
FROM BOOK JOIN BOOK_SALES USING (BOOK_ID)
WHERE YEAR(SALES_DATE) = 2022 AND MONTH(SALES_DATE) = 1
GROUP BY CATEGORY
ORDER BY CATEGORY