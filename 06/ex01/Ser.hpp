/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ser.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:23:53 by mtak              #+#    #+#             */
/*   Updated: 2021/09/24 14:31:08 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SER_H
#define SER_H

#include <string>

typedef struct 	Data_s
{
	int 		pk;
	std::string firstName;
	std::string lastName;
}				Data;

uintptr_t serialize (Data* ptr)
{
	uintptr_t ret;
	ret = (reinterpret_cast<uintptr_t>(ptr));
	return 	ret;
}

Data* deserialize(uintptr_t raw)
{
	Data * ret;
	ret = reinterpret_cast<Data *>(raw);
	return ret;
}

#endif
