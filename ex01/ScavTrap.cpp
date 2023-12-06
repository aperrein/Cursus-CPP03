/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:21:01 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/11 11:21:03 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
    std::cout << "Default constructor of scav called for " << this->_name << std::endl;
    this->_hp = 100;
    this->_ep = 50;
    this->_ad = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "Default constructor of scav with name parameter called for " << this->_name << std::endl;
    this->_hp = 100;
    this->_ep = 50;
    this->_ad = 20;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor of scav called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy)
{
	std::cout << "Copy constructor of scav called for " << copy._name << std::endl;
	*this = copy;
}

ScavTrap &         ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Copy assignation operator of scav called for " << rhs._name << std::endl;
	this->_name = rhs._name;
    this->_hp = rhs._hp;
    this->_ep = rhs._ep;
    this->_ad = rhs._ad;
	return (*this);
}

void                 ScavTrap::attack(const std::string& target)
{
    if (this->_ep && this->_hp)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing ";
        std::cout << this->_ad << " points of damage!\n";
        this->_ep--;
    }
    else if (this->_hp > 0)
        std::cout << "ScavTrap " << this->_name << " can't attack because he has no Energy left!\n";
    else
        std::cout << "ScavTrap " << this->_name << " is dead and can't attack!\n";
}

void                ScavTrap::guardgate(void)
{
    if (this->_hp)
        std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
    else
        std::cout << "ScavTrap " << this->_name << " is dead and can't do shit." << std::endl;
}