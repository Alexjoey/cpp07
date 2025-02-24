/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:39:32 by amylle            #+#    #+#             */
/*   Updated: 2025/02/24 21:05:23 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdlib>
#include <exception>
#include <iostream>

template<typename T>
class Array
{
public:

	Array(): _arr(NULL), _size(0) { std::cout << "Array default constructor\n"; }

	Array(unsigned int len): _arr(new T[len]()), _size(len) { std::cout << "Array length constructor\n"; }

	Array(const Array &cpy): _arr(new T[cpy._size]()), _size(cpy._size)
	{
		for (unsigned int i = 0; i < cpy._size; i++)
			this->_arr[i] = cpy._arr[i];
	}

	Array&	operator=(const Array &cpy)
	{
		if (this != &cpy)
		{
			delete [] this->_arr;
			this->_size = cpy._size;
			if (cpy._size == 0)
				this->_arr = NULL;
			else
				this->_arr = new T[cpy._size]();
			for (unsigned int i = 0; i < cpy._size; i++)
				this->_arr[i] = cpy._arr[i];
		}
		return (*this);
	}

	~Array()
	{
		delete [] this->_arr;
	}

	T&	operator[](unsigned int i)
	{
		if (i >= this->_size)
			throw OutOfBoundsException();
		return (this->_arr[i]);
	}

	class	OutOfBoundsException: public std::exception
	{
	public:
	const char*	what() const throw() { return ("trying to access out of bounds"); }
	};

	unsigned int	size() const { return (this->_size);}

private:
	T				*_arr;
	unsigned int	_size;
};
