/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:26:22 by mroux             #+#    #+#             */
/*   Updated: 2021/07/02 12:59:37 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		virtual ~Character();
		Character(std::string name);
		Character(Character const&);
		Character&			operator=(Character const&);
		std::string const&	getName() const;
		void 				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		AMateria const* 	getWeapon(int idx) const;

	protected:
		Character();
		std::string		_name;
		AMateria*		_inventory[4];
};


std::ostream&	operator<<(std::ostream& stream, Character const& cl);
#endif
