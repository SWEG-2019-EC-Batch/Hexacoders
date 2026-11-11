I Input/Output

    1. Input

        Electricity units consumed (kWh).

    2. Output

        Energy charge.

        Service charge.

        Total electricity bill.

II Process (Operations)

    1. Declare variables to hold the electricity units, additional units, energy charge and total bill.

    2. Define the fixed values (first-unit rate, additional-unit rate and service charge) as constants.

    3. Display a prompt and read the electricity units consumed.

    4. Calculate the additional units by subtracting 50 from the total units if consumption exceeds 50; otherwise, assign 0.

    5. Calculate the energy charge using the conditional operator:
        - If additional units exist, calculate the cost of the first 50 units at 1.50 birr each and the additional units at 2.00 birr each.
        - Otherwise, calculate the cost of all consumed units at 1.50 birr each.
    6. Calculate the total bill by adding the energy charge and service charge.

    7. Display the energy charge, service charge and total bill, including the birr unit, to two decimal places.
