/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:29:42 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/14 23:35:02 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

int main() {
    try {
     Span s = Span(50);

        // Ajout de nombres individuels
        s.addNumber(6);
        s.addNumber(12);
        s.addNumber(4);
        s.addNumber(9);
        s.addNumber(18);

        std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
        std::cout << "Longest span: " << s.longestSpan() << std::endl;

        // Ajout d'une plage de nombres
        std::vector<int> range;
        range.push_back(3);
        range.push_back(13);
        range.push_back(8);
        s.addNumber(range);

        std::cout << "Shortest span after adding range: " << s.shortestSpan() << std::endl;
        std::cout << "Longest span after adding range: " << s.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::vector<int>    l( 10000 );
        std::srand( time ( NULL ) );
        std::generate( l.begin(), l.end(), std::rand );

        Span s = Span( l.size() );

        s.addNumber( l );

        std::cout << "Longest span: " << s.longestSpan() << std::endl;
        std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
