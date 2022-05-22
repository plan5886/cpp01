/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:43:55 by mypark            #+#    #+#             */
/*   Updated: 2022/05/22 10:54:40 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
  {
    Weapon club("crude spiked club");
    HumanA bob("bob", club);
    bob.Attack();
    club.setType("super crude spiked club");
    bob.Attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("jim");
    jim.setWeapon(club);
    jim.Attack();
    club.setType("some other type of club");
    jim.Attack();
  }
  return 0;
}
