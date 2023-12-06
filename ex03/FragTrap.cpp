/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:45:37 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/13 10:45:40 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
    std::cout << "Default constructor of Frag called for " << this->_name << std::endl;
    this->_hp = 100;
    this->_ep = 100;
    this->_ad = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "Default constructor of Frag with name parameter called for " << this->_name << std::endl;
    this->_hp = 100;
    this->_ep = 100;
    this->_ad = 30;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor of Frag called for " << this->_name << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy)
{
	std::cout << "Copy constructor of Frag called for " << copy._name << std::endl;
	*this = copy;
}

FragTrap &         FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "Copy assignation operator of Frag called for " << rhs._name << std::endl;
	this->_name = rhs._name;
    this->_hp = rhs._hp;
    this->_ep = rhs._ep;
    this->_ad = rhs._ad;
	return (*this);
}

void                 FragTrap::attack(const std::string& target)
{
    if (this->_ep && this->_hp)
    {
        std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing ";
        std::cout << this->_ad << " points of damage!\n";
        this->_ep--;
    }
    else if (this->_hp > 0)
        std::cout << "FragTrap " << this->_name << " can't attack because he has no Energy left!\n";
    else
        std::cout << "FragTrap " << this->_name << " is dead and can't attack!\n";
}

void                FragTrap::highFivesGuys(void)
{
    if (this->_hp)
        std::cout << "FragTrap " << this->_name << " wants a high fives." << std::endl;
    else
        std::cout << "FragTrap " << this->_name << " is dead and can't do shit." << std::endl;
}
