# Mini_Project_MENU
Built as a mini-project to practice switch-case, loops, and basic billing logic in C.

# BUNK CAFE – Restaurant Billing System
A simple command-line cafe ordering and billing application written in C.

## Features
- Interactive menu card with 4 items and their rates
- Order multiple items in a single session (repeat selection in a loop)
- Automatically tracks quantity ordered per item
- Live cart preview shown after every item added
- Checkout screen displaying a summary of all items ordered
- Generates an itemized bill at payment
- Calculates GST (18%) and final grand total

## How it works
1. The program displays the **BUNK CAFE** menu card with 4 items and prices:
   - Coffee – 120
   - Matcha – 180
   - Pastries – 150
   - Cheese Cake – 180
2. The user selects an item number (1–4) to add it to the cart; each selection increases that item's quantity by 1.
3. After every selection, the program prints the current cart so the user can track their order.
4. The user can keep selecting items (1–4), or choose:
   - `5` – Checkout, which shows a summary of the cart and asks to proceed to payment (`1`)
   - `6` – Exit
5. Once checkout is confirmed with `1`, the program prints:
   - A breakdown of all items ordered with quantity and rate
   - Total, GST (18%), and Grand Total

## Concepts used
- `switch` statements for menu selection
- `do-while` loop for repeated ordering
- Basic billing/tax computation

## How to compile and run
```bash
gcc Harishchand_k_k.c -o bunk_cafe
./bunk_cafe
```
