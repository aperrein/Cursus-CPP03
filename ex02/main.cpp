/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:21:18 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/11 11:21:20 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int         main(void)
{
    FragTrap       a;
    FragTrap       b("testb");

    b.attack("target");
    b.takeDamage(5);
    b.highFivesGuys();
    b.beRepaired(2);
    b.takeDamage(500);
    b.highFivesGuys();

    return (0);
}
