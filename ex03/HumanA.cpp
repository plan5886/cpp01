/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:11:11 by mypark            #+#    #+#             */
/*   Updated: 2022/05/22 10:50:04 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : name_(name), Weapon_(weapon) {}

HumanA::~HumanA() {}

void HumanA::Attack() {
  std::cout << name_ << " attacks with their " << Weapon_.getType() << std::endl;
}
