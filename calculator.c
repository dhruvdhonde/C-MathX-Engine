// calculator.c
// Single-file scientific calculator using math.h
// Build: gcc -std=c11 -lm calculator.c -o calculator


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>


#define BUF_SIZE 256


static void print_menu(void) {
puts("\n--- Scientific Calculator ---");
puts("Select operation:");
puts(" 1 : Addition (a + b)");
puts(" 2 : Subtraction (a - b)");
puts(" 3 : Multiplication (a * b)");
puts(" 4 : Division (a / b)");
puts(" 5 : Power (a ^ b)");
puts(" 6 : Hypotenuse (hypot(a, b))");
puts(" 7 : atan2(y, x)");
puts(" 8 : Square root (sqrt(x))");
puts(" 9 : Absolute (fabs(x))");
puts("10 : Natural logarithm (ln x)");
puts("11 : Base-10 logarithm (log10 x)");
puts("12 : Exponential (exp x)");
puts("13 : Sine (sin x) [radians]");
puts("14 : Cosine (cos x) [radians]");
puts("15 : Tangent (tan x) [radians]");
puts("16 : arcsin (asin x) [returns radians]");
puts("17 : arccos (acos x) [returns radians]");
puts("18 : arctan (atan x) [returns radians]");
puts("19 : sinh (sinh x)");
puts("20 : cosh (cosh x)");
puts("21 : tanh (tanh x)");
puts("22 : floor(x)");
puts("23 : ceil(x)");
puts("24 : Convert degrees to radians");
puts("25 : Convert radians to degrees");
puts(" 0 : Exit");
}


// Read a line and parse to double safely
static int read_double(const char *prompt, double *out) {
char buf[BUF_SIZE];
char *endptr;
if (prompt) printf("%s", prompt);
if (!fgets(buf, sizeof(buf), stdin)) return 0;
errno = 0;
*out = strtod(buf, &endptr);
if (endptr == buf) return 0; // no conversion
if (errno != 0) return 0;
return 1;
}


// Read an integer choice
static int read_int(const char *prompt, int *out) {
char buf[BUF_SIZE];
char *endptr;
if (prompt) printf("%s", prompt);
if (!fgets(buf, sizeof(buf), stdin)) return 0;
errno = 0;
long v = strtol(buf, &endptr, 10);
}
