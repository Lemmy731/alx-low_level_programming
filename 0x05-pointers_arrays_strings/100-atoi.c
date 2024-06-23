#include <stdio.h>
#include <limits.h> // for INT_MAX and INT_MIN

int _atoi(char *s) {
    int result = 0; // This will store the converted number
    int sign = 1;   // Sign of the number
    int found_digit = 0;

    // Traverse through the string
    while (*s) {
        // Handle sign
        if (*s == '-') {
            sign *= -1;
        } else if (*s == '+') {
            // Do nothing for the '+' sign
        } else if (*s >= '0' && *s <= '9') {
            found_digit = 1; // A digit is found
            // Convert the character to the corresponding integer value
            int digit = *s - '0';

            // Check for overflow and underflow
            if (sign > 0 && result > (INT_MAX - digit) / 10) {
                return INT_MAX; // Overflow
            } else if (sign < 0 && result > (INT_MIN + digit) / -10) {
                return INT_MIN; // Underflow
            }

            result = result * 10 + digit;
        } else if (found_digit) {
            // If we have found digits and then encounter a non-digit character, break
            break;
        }

        // Move to the next character
        s++;
    }

    return result * sign;
}
