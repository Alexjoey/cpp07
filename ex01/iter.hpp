/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:21:58 by amylle            #+#    #+#             */
/*   Updated: 2025/06/05 23:32:36 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>

template<typename T, typename Func>
void	iter(T array[], unsigned int len, Func func)
{
	for (unsigned int i = 0; i < len; i++)
		func(array[i]);
}
