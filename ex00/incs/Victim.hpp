/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:01:22 by mroux             #+#    #+#             */
/*   Updated: 2021/07/02 11:51:18 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include <string>


class Victim {
    public:
        Victim(std::string name);
        virtual ~Victim();
        Victim(Victim const& victim);
        Victim&     operator=(Victim const& victim);
        std::string const&	getName() const;

        virtual void getPolymorphed() const;

    protected:
        Victim();
        std::string     _name;
};

std::ostream& operator<<(std::ostream& stream, Victim const& victim);

#endif
