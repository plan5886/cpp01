/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:33:41 by mypark            #+#    #+#             */
/*   Updated: 2022/05/23 09:28:14 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

#include "Zombie.hpp"

Zombie* zombie::zombieHorde(int number, std::string name) {
  Zombie*           zs;
  std::string       personal_name;
  std::string       num_str;
  std::stringstream ss;

  zs = new Zombie[number];
  for (int i = 0; i < number; ++i) {
    ss << i << ' ';
    ss >> num_str;
    personal_name = name + num_str;
    zs[i].SetName(personal_name);
  }
  return (zs);
}
