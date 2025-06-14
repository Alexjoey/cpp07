/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:16:38 by amylle            #+#    #+#             */
/*   Updated: 2025/02/24 18:17:33 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Templates.hpp"
#include <iostream>

int main( void ) {
int a = 2;
int b = 3;
std::cout << "before swap ";
std::cout << "a = " << a << ", b = " << b << std::endl;
swap( a, b );
std::cout << "after swap ";
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
std::cout << "before swap ";
std::cout << "c = " << c << ", d = " << d << std::endl;
swap(c, d);
std::cout << "after swap ";
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}
