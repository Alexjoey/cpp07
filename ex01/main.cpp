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

template<typename T>
void print(T& x)
{
	std::cout << x << " ";
}

void incrementInt(int& n) { n++; }
void squareDouble(double& d) { d *= d; }
void toUpperCase(char& c) { c = std::toupper(c); }
void appendExclamation(std::string& s) { s += "!"; }

// **Main Function to Run Tests**
int main()
{
	// **Test 1: Integer Array**
	int intArr[] = {1, 2, 3, 4, 5};
	unsigned int intLen = 5;
	std::cout << "Original int array: ";
	iter(intArr, intLen, print<int>);
	std::cout << "\nAfter incrementing: ";
	iter(intArr, intLen, incrementInt);
	iter(intArr, intLen, print<int>);
	std::cout << "\n\n";

	// **Test 2: Double Array**
	double doubleArr[] = {1.1, 2.2, 3.3};
	unsigned int doubleLen = 3;
	std::cout << "Original double array: ";
	iter(doubleArr, doubleLen, print<double>);
	std::cout << "\nAfter squaring: ";
	iter(doubleArr, doubleLen, squareDouble);
	iter(doubleArr, doubleLen, print<double>);
	std::cout << "\n\n";

	// **Test 3: Character Array**
	char charArr[] = {'a', 'b', 'c', 'd'};
	unsigned int charLen = 4;
	std::cout << "Original char array: ";
	iter(charArr, charLen, print<char>);
	std::cout << "\nAfter uppercase conversion: ";
	iter(charArr, charLen, toUpperCase);
	iter(charArr, charLen, print<char>);
	std::cout << "\n\n";

	// **Test 4: String Array**
	std::string strArr[] = {"Hello", "World", "C++"};
	unsigned int strLen = 3;
	std::cout << "Original string array: ";
	iter(strArr, strLen, print<std::string>);
	std::cout << "\nAfter appending '!': ";
	iter(strArr, strLen, appendExclamation);
	iter(strArr, strLen, print<std::string>);
	std::cout << "\n\n";

	// **Test 5: const reference
	int array[3] = {1, 2, 3};

	std::cout << "const reference test: ";
	iter(array, 3, print<const int>);
	std::cout << "\n\n";
	return 0;
}
