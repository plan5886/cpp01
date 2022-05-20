/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:23:49 by mypark            #+#    #+#             */
/*   Updated: 2022/05/20 13:29:44 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_(name) {}

HumanB::~HumanB() {}

void HumanB::Attack() {
  std::cout << name_ << " attacks with their " << Weapon_->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& new_weapon) { Weapon_ = &new_weapon; }
