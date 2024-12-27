#include <iostream>

/*
 * THIS IS A HELPER FUNCTION. YOU AREN'T REQUIRED TO USE IT, AND YOU CAN
 * MODIFY IT IF YOU WANT, BUT I STRONGLY RECOMMEND THAT YOU USE IT AS-IS.
 * YOU MAY FIND IT VERY HELPFUL.
 * Function: is_number
 * Description: Determines whether a given string holds a valid numeric value
 * Returns: True if the given string holds a valid numeric value, or false
 * 		otherwise. If this function returns true, it's safe to use std::stod()
 * 		on the string to convert it to a number (double) afterwards. Otherwise,
 * 		the given string does not contain a valid numeric value, and attempting
 * 		to use std::stod() on the string may crash your program.
 */
bool is_number(std::string str) {
	// A valid number must contain at least one digit and at most one
	// decimal point
	int num_digits = 0;
	int num_points = 0;
	for (int i = 0; i < str.length(); i++) {
		bool is_point = str.at(i) == '.';
		// A negative sign is a dash at the beginning of the string
		bool is_negative_sign = str.at(i) == '-' && i == 0;
		bool is_number = str.at(i) >= '0' && str.at(i) <= '9';

		if (is_point) {
			// If the character is a decimal point, increment
			// the number of points found, and return false if
			// it's greater than 1
			num_points++;
			if (num_points > 1) {
				return false;
			}
		}
		if (is_number) {
			// If the character is a digit, increment the number of
			// digits found
			num_digits++;
		}

		// If the character isn't any of the three valid possibilities,
		// return false, immediately ending the function
		if (!is_point && !is_negative_sign && !is_number) {
			return false;
		}
	}

	// Return true only if at least one digit was found
	return num_digits > 0;
}


// TODO Write other functions as you see fit.


/*
 * THIS IS A REQUIRED FUNCTION. YOU MAY NOT ALTER ITS HEADER (NAME, PARAMETERS,
 * OR RETURN TYPE) IN ANY WAY.
 * Function: is_valid_expression
 * Description: Determines whether a given string holds a valid arithmetic
 * 		expression, as defined in the assignment document.
 * Parameters:
 * 		expression (std::string): A string holding the expression to be checked
 * 			for validity.
 * Returns: True if the given string holds a valid arithmetic expression, or
 * 		false otherwise.
 *
 * For example, is_valid_expression("1 + 3 * 4") should return true, but
 * is_valid_expression("1+3*4") should return false (notice the lack of spaces;
 * see the assignment document for an explanation of what constitutes a valid
 * arithmetic expression for this assignment).
 */
bool is_valid_expression(std::string expression) {
	// TODO Complete this function. You may create other functions above and have
	// this function call them, if you'd like (you probably should for the sake
	// of the course's style guidelines)
	
	// TODO Remove the below return statement. It's a placeholder just to get
	// the starter code to compile without warnings and run without undefined
	// behavior.
	return false;
}


/*
 * THIS IS A REQUIRED FUNCTION. YOU MAY NOT ALTER ITS HEADER (NAME, PARAMETERS,
 * OR RETURN TYPE) IN ANY WAY.
 * Function: compute_value
 * Description: Computes and returns the value of the given arithmetic
 * 		expression. This function should ASSUME that the given string is indeed
 * 		a valid arithmetic expression. That is, your program should check whether
 * 		a string contains a valid arithmetic expression (e.g., using your
 * 		is_valid_expression function) BEFORE passing it into this function.
 * Parameters:
 * 		expression (std::string): A string holding the arithmetic expression
 * 			to be evaluated.
 * Returns (double): The value of the given arithmetic expression, computed
 * 		according to the rules described in the assignment document
 *
 * For example: compute_value("1 + 3 * 4") should return 16, assuming you don't
 * complete the order-of-operations extra credit.
 */
double compute_value(std::string expression) {
	// TODO Complete this function. You may create other functions above and have
	// this function call them, if you'd like (you probably should for the sake
	// of the course's style guidelines)

	// TODO Remove the below return statement. It's a placeholder just to get
	// the starter code to compile without warnings and run without undefined
	// behavior.
	return 0;
}
