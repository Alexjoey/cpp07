/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:25:42 by amylle            #+#    #+#             */
/*   Updated: 2025/02/24 18:27:00 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

// **Test Functions**
void printInt(int& n) { std::cout << n << " "; }
void incrementInt(int& n) { n++; }

void printDouble(double& d) { std::cout << d << " "; }
void squareDouble(double& d) { d *= d; }

void printChar(char& c) { std::cout << c << " "; }
void toUpperCase(char& c) { c = std::toupper(c); }

void printString(std::string& s) { std::cout << s << " "; }
void appendExclamation(std::string& s) { s += "!"; }

// **Main Function to Run Tests**
int main()
{
	// **Test 1: Integer Array**
	int intArr[] = {1, 2, 3, 4, 5};
	unsigned int intLen = 5;
	std::cout << "Original int array: ";
	iter(intArr, intLen, printInt);
	std::cout << "\nAfter incrementing: ";
	iter(intArr, intLen, incrementInt);
	iter(intArr, intLen, printInt);
	std::cout << "\n\n";

	// **Test 2: Double Array**
	double doubleArr[] = {1.1, 2.2, 3.3};
	unsigned int doubleLen = 3;
	std::cout << "Original double array: ";
	iter(doubleArr, doubleLen, printDouble);
	std::cout << "\nAfter squaring: ";
	iter(doubleArr, doubleLen, squareDouble);
	iter(doubleArr, doubleLen, printDouble);
	std::cout << "\n\n";

	// **Test 3: Character Array**
	char charArr[] = {'a', 'b', 'c', 'd'};
	unsigned int charLen = 4;
	std::cout << "Original char array: ";
	iter(charArr, charLen, printChar);
	std::cout << "\nAfter uppercase conversion: ";
	iter(charArr, charLen, toUpperCase);
	iter(charArr, charLen, printChar);
	std::cout << "\n\n";

	// **Test 4: String Array**
	std::string strArr[] = {"Hello", "World", "C++"};
	unsigned int strLen = 3;
	std::cout << "Original string array: ";
	iter(strArr, strLen, printString);
	std::cout << "\nAfter appending '!': ";
	iter(strArr, strLen, appendExclamation);
	iter(strArr, strLen, printString);
	std::cout << "\n\n";

	return 0;
}
