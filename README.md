# String-to-Integers
Convert a string to a 32-bit signed integer:  * Skip leading spaces * Check sign (`+` or `-`, default is positive) * Read digits (ignore leading zeros, stop at non-digit) * If no digits, return `0` * Clamp result within `[-2³¹, 2³¹ - 1]`  Return the final integer.
