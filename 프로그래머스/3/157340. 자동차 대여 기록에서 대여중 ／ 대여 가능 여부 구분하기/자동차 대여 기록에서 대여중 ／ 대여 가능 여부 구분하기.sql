-- 코드를 입력하세요
WITH TEMP AS
(
SELECT CAR_ID, '대여중' AVAILABILITY
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY
WHERE '2022-10-16' BETWEEN START_DATE AND END_DATE
)
SELECT DISTINCT CAR_ID, COALESCE(AVAILABILITY, '대여 가능') AVAILABILITY
FROM TEMP RIGHT JOIN CAR_RENTAL_COMPANY_RENTAL_HISTORY USING (CAR_ID)
ORDER BY CAR_ID DESC