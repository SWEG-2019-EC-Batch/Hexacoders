
# C++ Assignment Flowcharts

This document contains the flowcharts for the three C++ programming assignments.

---

# 1. Electricity Bill Calculator

This flowchart illustrates the process of calculating an electricity bill based on the number of units consumed.

```mermaid
flowchart TD
    A([Start]) --> B[/Input electricUnit/]
    B --> C{electricUnit > 50?}

    C -- Yes --> D[additionalUnit = electricUnit - 50]
    C -- No --> E[additionalUnit = 0]

    D --> F{additionalUnit != 0?}
    E --> F

    F -- Yes --> G["energyCharge = (50 × 1.5) + (additionalUnit × 2)"]
    F -- No --> H["energyCharge = electricUnit × 1.5"]

    G --> I["total = energyCharge + 10"]
    H --> I

    I --> J[Set output precision to 2 decimal places]
    J --> K[/Display energy charge/]
    K --> L[/Display service charge/]
    L --> M[/Display total bill/]
    M --> N([End])
```

---

# 2. Student Course Total Calculator

This flowchart illustrates how the program calculates a student's weighted course total and determines whether the student passes or fails.

```mermaid
flowchart TD
    A([Start]) --> B[/Input assignment mark/]
    B --> C[/Input midterm mark/]
    C --> D[/Input final exam mark/]

    D --> E["total = (assignment × 0.2) + (midterm × 0.3) + (final × 0.5)"]

    E --> F{total >= 50?}

    F -- Yes --> G["result = Pass"]
    F -- No --> H["result = Fail"]

    G --> I[Set output precision to 1 decimal place]
    H --> I

    I --> J[/Display course total/]
    J --> K[/Display result/]
    K --> L([End])
```

---

# 3. Trip Speed and Fuel Cost Calculator

This flowchart illustrates how the program calculates average speed, fuel consumption, and total fuel cost based on the trip information entered by the user.

```mermaid
flowchart TD
    A([Start]) --> B[/Input distance/]
    B --> C[/Input travel hours and minutes/]
    C --> D[/Input fuel consumption per 100 km/]
    D --> E[/Input fuel price per liter/]

    E --> F["totalTime = timeHr + (timeMin / 60)"]

    F --> G["avgSpeed = distance / totalTime"]

    G --> H["fuelUsed = (fuelConsumption × distance) / 100"]

    H --> I["fuelCost = fuelUsed × fuelPrice"]

    I --> J[Set output precision to 2 decimal places]

    J --> K[/Display average speed/]
    K --> L[/Display fuel used/]
    L --> M[/Display fuel cost/]

    M --> N([End])
```
