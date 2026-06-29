BEGIN [Grade]

INPUT รับคะแนน Score

IF Score >= 80 THEN  A

IF Score >= 70 THEN B

IF Score >= 60 THEN C

IF Score >= 50 THEN D

IF Score < 50 THEN F

END IF

OUT PUT แสดงเกรด

END

---

BEGIN [A B]

INPUT รับ a และ b

DECISION a > b?

IF Yes THEN แสดง a

IF No THEN แสดง b

END

---

BEGIN [N]

INPUT รับ N

i = 1

DECISION i <= N?

IF Yes THEN OUTPUT พิมพ์ i

WHILE i = i + 1

END IF No

END
