/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:00:48 by mypark            #+#    #+#             */
/*   Updated: 2022/05/23 09:30:26 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <sstream>

int Zombie::counts_;

Zombie::Zombie() {
  std::string       name;
  std::string       counts_str;
  std::stringstream ss;

  name = "Zombie";
  ss << counts_ << ' ';
  ss >> counts_str;
  name_ = name + counts_str;
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
