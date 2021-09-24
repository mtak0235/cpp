/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:24:28 by mtak              #+#    #+#             */
/*   Updated: 2021/09/23 15:24:37 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
#define CLASS_H

class Base
{
	public:
		virtual ~Base(){}	
};

class A : public Base
{
	public:
		A(){}
		virtual ~A(){}
};

class B : public Base
{
	public:
		B(){}
		virtual ~B(){}
};

class C : public Base
{
	public:
		C(){}
		virtual ~C(){}
};
#endif
