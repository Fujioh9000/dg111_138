```mermaid
flowchart TD
Start([Start]) --> Input[/รับคะแนน score/]
Input --> D1{score >= 80?}
D1 -->|Yes| A[เกรด = A]
D1 -->|No| D2{Score >= 70?}
D2 -->|Yes| B[เกรด = B]
D2 -->|No| D3{Score >= 60?}
D3 -->|Yes| C[เกรด = C]
D3 -->|No| D4{Score >= 50?}
D4 -->|Yes| D[เกรด = D]
D4 -->|No| F[เกรด = F]
A & B & C & D & F --> Output[/แสดงเกรด/]
Output --> End([End])
```

---



```mermaid
flowchart TD
Start([Start]) --> Input[/รับ a และ b/]
Input --> Di{a > b?}
Di --> |Yes| a[/แสดง a/]
Di --> |No| b[/แสดง b/]
a & b --> End([End])
```

---

```mermaid
flowchart TD
Strat([Start]) --> Input[/รับ N/]
Input --> I[i = 1]
I --> Di{i <= N?}
Di --> |Yes| P[/พิมพ์ i/]
Di --> |No| End([End])
P --> 1[i = i + 1]
1 --> Di{i <= N?}
```

---
