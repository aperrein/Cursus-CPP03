/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:42:55 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/11 09:42:57 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Default"), _hp(10), _ep(10), _ad(0)
{
    std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _ep(10), _ad(0)
{
    std::cout << "Default constructor with name parameter called\n";
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called\n";
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

ClapTrap &         ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Copy assignation operator called\n";
	this->_name = rhs._name;
    this->_hp = rhs._hp;
    this->_ep = rhs._ep;
    this->_ad = rhs._ad;
	return (*this);
}

void                 ClapTrap::attack(const std::string& target)
{
    if (this->_ep && this->_hp)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing ";
        std::cout << this->_ad << " points of damage!\n";
        this->_ep--;
    }
    else if (this->_hp > 0)
        std::cout << "ClapTrap " << this->_name << " can't attack because he has no Energy left!\n";
    else
        std::cout << "ClapTrap " << this->_name << " is dead and can't attack!\n";
}

void                 ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hp)
        std::cout << "ClapTrap " << this->_name << " has taken " << amount << " damage.\n";
    else
        std::cout << "ClapTrap " << this->_name << " is already dead and can't take more damage.\n";
    if (amount > this->_hp)
        this->_hp = 0;
    else
        this->_hp -= amount;
}

void                 ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hp && this->_ep)
    {
        std::cout << "ClapTrap " << this->_name << " repairs itself and gains " << amount;
        std::cout << " hit points back.\n";
        this->_hp += amount;
        this->_ep--;
    }
    else if (this->_hp > 0)
        std::cout << "ClapTrap " << this->_name << " can't repair because he has no Energy left!\n";
    else
        std::cout << "ClapTrap " << this->_name << " is dead and can't repair itself!\n";
}