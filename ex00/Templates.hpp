/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:13:44 by amylle            #+#    #+#             */
/*   Updated: 2025/02/24 18:16:34 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>

template<typename T>
void	swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
T	max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}
