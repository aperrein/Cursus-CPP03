/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:59:42 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/13 18:27:10 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("Default_clap_name"), ScavTrap("Default_clap_name"), _name("Default")
{
    std::cout << "Default constructor of Diamond called for " << this->_name << std::endl;
    this->_ep = ScavTrap::_scav_ep;
    //std::cout << this->_hp << std::endl;
    //std::cout << this->_ep << std::endl;
    //std::cout << this->_ad << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), _name(name)
{
    std::cout << "Default constructor of Diamond with name parameter called for " << this->_name << std::endl;
    this->_ep = ScavTrap::_scav_ep;
    //std::cout << this->_hp << std::endl;
    //std::cout << this->_ep << std::endl;
    //std::cout << this->_ad << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "Destructor of Diamond called for " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy)
{
	std::cout << "Copy constructor of Diamond called for " << copy._name << std::endl;
	*this = copy;
}

DiamondTrap &         DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "Copy assignation operator of Diamond called for " << rhs._name << std::endl;
	this->_name = rhs._name;
    this->_hp = rhs._hp;
    this->_ep = rhs._ep;
    this->_ad = rhs._ad;
	return (*this);
}

void                 DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void                DiamondTrap::whoAmI(void)
{
    std::cout << "My name is " << this->_name;
    std::cout << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
