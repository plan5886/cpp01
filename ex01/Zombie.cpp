/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:00:48 by mypark            #+#    #+#             */
/*   Updated: 2022/05/20 09:36:18 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <limits.h>

int Zombie::counts_;

Zombie::Zombie() {
  std::string name;

  name = "Zombie";
  name_ = name.append(std::to_string(counts_));
  counts_++;
  std::cout << name_ << ": "
            << "Kwaaaaaaaaaaaaa!!!" << std::endl;
}

Zombie::Zombie(std::string name) : name_(name) {
  counts_++;
  std::cout << name_ << ": "
            << "Kwaaaaaaaaaaaaa!!!" << std::endl;
}

Zombie::~Zombie() {
  std::cout << name_ << ": "
            << "I'm die" << std::endl;
  counts_--;
}

void Zombie::Announce() {
  std::cout << name_ << ": "
            << "BraiiiiiiinnnzzzZ.." << std::endl;
}

void Zombie::SetName(std::string name) { name_ = name; }
