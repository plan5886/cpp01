/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:09:25 by mypark            #+#    #+#             */
/*   Updated: 2022/05/20 08:28:12 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
  Zombie zombie0;
  Zombie *zombie1;

  zombie0.Announce();
  zombie1 = zombie::newZombie("zombie1");
  Zombie zombie2;
  zombie2.Announce();
  zombie1->Announce();
  delete zombie1;
  zombie::randomChump("zombie3");
}
