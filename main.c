#include <stdio.h>

// Function prototype
float calculateBill(int units);

int main(void)
{
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Function call
    bill = calculateBill(units);

    printf("\n===== ELECTRICITY BILL =====\n");
    printf("Units Consumed : %d\n", units);
    printf("Total Bill     : KSh %.2f\n", bill);

    return 0;
}

// Function definition
float calculateBill(int units)
{
    float bill = 0.0f;

    if (units <= 100)
    {
        bill = units * 10.0f;
    }
    else if (units <= 200)
    {
        bill = (100 * 10.0f) + ((units - 100) * 15.0f);
    }
    else
    {
        bill = (100 * 10.0f) + (100 * 15.0f) + ((units - 200) * 20.0f);
    }

    return bill;
}
