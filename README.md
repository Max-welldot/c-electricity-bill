# Question 2: Electricity Bill

A small C program that uses `calculateBill()` to calculate an electricity bill from the number of units consumed.

## Unit rates

- First 100 units: KSh 10 per unit
- Next 100 units: KSh 15 per unit
- Above 200 units: KSh 20 per unit

The program uses slab calculation. For example, if 250 units are used, the first 100 are charged at KSh 10, the next 100 at KSh 15, and the remaining 50 at KSh 20.

## Run

```bash
gcc main.c -o main.exe
./main.exe
```
