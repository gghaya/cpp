/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:35:39 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/17 17:10:34 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP
#include<string>
#include<iostream>
#include <stack>

int operation(int i);
int valide_parse(std::string str);
int RPN (std::string str);
#endif