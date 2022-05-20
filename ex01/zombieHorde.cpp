/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:33:41 by mypark            #+#    #+#             */
/*   Updated: 2022/05/20 09:32:47 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie* zombie::zombieHorde(int number, std::string name) {
  Zombie* zs;
  std::string personal_name;

  zs = new Zombie[number];
  for (int i = 0; i < number; ++i) {
    personal_name = name;
    personal_name.append(std::to_string(i));
    zs[i].SetName(personal_name);
  }
  return (zs);
}
