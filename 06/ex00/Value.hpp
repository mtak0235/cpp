/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Value.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:51:48 by mtak              #+#    #+#             */
/*   Updated: 2021/09/22 17:23:46 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALUE_HPP
# define VALUE_HPP

#include <string>
#include <iostream>
#include <cstring>
#include <climits>
#include <cmath>
#include <cfloat>

class Value
{
	private:
	public:
		Value();
		~Value();
		static void convertAll(char *target);
		static void toChar(char *target);
		static void toInt(char *target);
		static void toFloat(char *target);
		static void toDouble(char *target);
};

#endif
