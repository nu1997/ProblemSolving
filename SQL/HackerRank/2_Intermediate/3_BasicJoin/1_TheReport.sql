SELECT 
CASE WHEN G.GRADE < 8 THEN NULL
ELSE S.NAME
END
, G.GRADE, S.MARKS
FROM STUDENTS S
LEFT OUTER JOIN GRADES G
ON S.MARKS <= G.MAX_MARK AND S.MARKS >= G.MIN_MARK
ORDER BY G.GRADE DESC, S.NAME ASC;