/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:55:31 by mypark            #+#    #+#             */
/*   Updated: 2022/05/22 11:18:45 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon() {}

Weapon::Weapon(const std::string& type) : type_(type) {}

const std::string& Weapon::getType() { return (type_); }

void Weapon::setType(const std::string& new_type) { type_ = new_type; }
