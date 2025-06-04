/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:21:58 by amylle            #+#    #+#             */
/*   Updated: 2025/02/24 18:25:39 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>

template<typename T>
void	iter(T array[], unsigned int len, void (*func)(T& member))
{
	for (unsigned int i = 0; i < len; i++)
		func(array[i]);
}

template<typename T>
void	iter(T array[], unsigned int len, void (*func)(const T& member))
{
	for (unsigned int i = 0; i < len; i++)
		func(array[i]);
}
