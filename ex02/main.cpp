/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:05:37 by amylle            #+#    #+#             */
/*   Updated: 2025/02/24 21:06:46 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>
#include <string>
#include "Array.hpp"  // Include your Array class header

void testIntArray()
{
    std::cout << "\n===== Testing Array<int> =====\n";

    // Create an integer array of size 5
    Array<int> arr1(5);
    for (unsigned int i = 0; i < arr1.size(); i++)
        arr1[i] = (i + 1) * 10;

    std::cout << "arr1 contents: ";
    for (unsigned int i = 0; i < arr1.size(); i++)
        std::cout << arr1[i] << " ";
    std::cout << "\n";

    // Copy constructor test
    Array<int> arr2 = arr1;
    std::cout << "Copying arr1 to arr2...\n";
    arr2[0] = 999; // Modify arr2, arr1 should stay the same

    std::cout << "arr1 after modifying arr2: ";
    for (unsigned int i = 0; i < arr1.size(); i++)
        std::cout << arr1[i] << " ";
    std::cout << "\n";

    std::cout << "arr2 contents: ";
    for (unsigned int i = 0; i < arr2.size(); i++)
        std::cout << arr2[i] << " ";
    std::cout << "\n";
}

void testStringArray()
{
    std::cout << "\n===== Testing Array<std::string> =====\n";

    Array<std::string> strArr(3);
    strArr[0] = "Hello";
    strArr[1] = "World";
    strArr[2] = "!";

    std::cout << "strArr contents: ";
    for (unsigned int i = 0; i < strArr.size(); i++)
        std::cout << strArr[i] << " ";
    std::cout << "\n";

    // Assignment operator test
    Array<std::string> strArr2;
    strArr2 = strArr; // Assigning

    strArr2[1] = "C++"; // Modify strArr2
    std::cout << "strArr contents after modifying strArr2: ";
    for (unsigned int i = 0; i < strArr.size(); i++)
        std::cout << strArr[i] << " ";
    std::cout << "\n";

    std::cout << "strArr2 contents: ";
    for (unsigned int i = 0; i < strArr2.size(); i++)
        std::cout << strArr2[i] << " ";
    std::cout << "\n";
}

void testOutOfBounds()
{
    std::cout << "\n===== Testing Out-of-Bounds Access =====\n";

    try {
        Array<int> arr(5);
        std::cout << "Trying to access arr[10]...\n";
        std::cout << arr[10] << "\n"; // Should throw an exception
    }
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << "\n";
    }
}

void testEmptyArray()
{
    std::cout << "\n===== Testing Empty Array =====\n";

    Array<int> emptyArr;
    std::cout << "Size of empty array: " << emptyArr.size() << "\n";

    try {
        std::cout << "Trying to access emptyArr[0]...\n";
        std::cout << emptyArr[0] << "\n"; // Should throw an exception
    }
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << "\n";
    }
}

void testConstArray()
{
	const Array<int> arr(5);
//	arr[0] = 10;
	std::cout << "content of const array: " << arr[0] << std::endl;
}

int main()
{
    testIntArray();
    testStringArray();
    testOutOfBounds();
    testEmptyArray();
	testConstArray();
    return 0;
}
