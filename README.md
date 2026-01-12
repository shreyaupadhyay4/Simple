#  C Utility Collection

A repository of practical C programs demonstrating mathematical logic and unit conversion algorithms.

##  1. Scientific Calculator (`Normal_Calculator.c`)
A feature-rich calculator that handles basic arithmetic and scientific operations.
* **Features:** Addition, Subtraction, Multiplication, Division.
* **Scientific Mode:** Sine, Cosine, Tangent, Natural Log (ln), and Log10.
* **Logic:** Uses the `math.h` library and a `do-while` loop for repeated calculations.

##  2. Time Converter (`Time converter.c`)
A precise tool to convert between different units of time.
* **Supported Units:** Hours, Minutes, and Seconds.
* **Logic:** Implements conversion factors (60.0 and 3600.0) using `if-else` branching to ensure accurate mathematical results.

##  How to Compile
Each file is independent. To run the calculator:
```bash
gcc Normal_Calculator.c -o calculator -lm
./calculator
