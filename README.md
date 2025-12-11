# C-MathX-Engine


A simple, menu-driven scientific calculator implemented in a single C source file (`calculator.c`) using only the C standard library and `<math.h>`.


## Features
- Basic arithmetic: add, subtract, multiply, divide
- Power, hypotenuse, atan2
- Square root, absolute
- Natural log (ln), base-10 log
- Exponential (exp)
- Trigonometric functions (sin, cos, tan) and inverse forms (asin, acos, atan)
- Hyperbolic functions (sinh, cosh, tanh)
- Floor, ceil
- Degree/radian conversion


## Requirements
- C compiler (gcc recommended)


## Build
```bash
gcc -std=c11 -lm calculator.c -o calculator
