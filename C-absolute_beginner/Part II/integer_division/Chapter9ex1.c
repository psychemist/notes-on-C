//Example program file Chapter9ex1.c

/* Sample program that demonstrates math operators,
 * and the different types of division.
 */

 #include <stdio.h>

 int main()
 {
     // Two sets of equivalent variables, with one set
     // floating point and the other integer

     float a = 19.0;
     float b = 5.0;
     float floatAnswer;

     int x = 19;
     int y = 5;
     int intAnswer;

     // Using two float variables creates an answer of 3.8
     floatAnswer = a / b;
     printf("%.1f divided by %.1f equals %.1f\n", a, b, floatAnswer);

     // Creates an answer of 3.0
     floatAnswer = x / y;
     printf("%d divided by %d equals %.1f\n", x, y, floatAnswer);

     // Same thing but prints 3
     intAnswer = x / y;
     printf("%d divided by %d equals %d\n", x, y, intAnswer);

     // This will also be 3, as it truncates and doesn't round up
     intAnswer = a / b;
     printf("%.1f divided by %.1f equals %d\n", a, b, intAnswer);

     // This calculates the remainder (4)
     intAnswer = x % y;
     printf("%d modulus (i.e. remainder of) %d equals %d", x, y, intAnswer);

     return (0);

 }
