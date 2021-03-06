/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:06:10 by mroux             #+#    #+#             */
/*   Updated: 2021/07/02 11:56:11 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Other.hpp"

int main()
{
    Sorcerer    sc("Me", "King");
    Victim      v("Vic");
    Peon        p("Peon");
	Other		o("Other");

    std::cout << sc << v << p << o;
	std::cout << sc.getName() <<  " - " << sc.getTitle() << v.getName() << p.getName() << std::endl;
    sc.polymorph(v);
    sc.polymorph(p);
	sc.polymorph(o);

}
