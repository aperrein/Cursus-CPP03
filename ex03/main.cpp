/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:59:58 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/13 14:00:00 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int         main(void)
{
    DiamondTrap         d1;
    DiamondTrap         d2("test d2");

    d1.whoAmI();

    d1.takeDamage(10);
    d1.attack("target");
    d1.guardgate();
    d1.highFivesGuys();

    return (0);
}
