/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:09:31 by mypark            #+#    #+#             */
/*   Updated: 2022/05/22 09:24:34 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
  PrintMsg[0] = &Harl::none;
  PrintMsg[1] = &Harl::debug;
  PrintMsg[2] = &Harl::info;
  PrintMsg[3] = &Harl::warning;
  PrintMsg[4] = &Harl::error;
}

Harl::~Harl() {}

void Harl::none() {
  std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::debug() {
  std::cout << std::setw(7) << std::left << "[DEBUG]" << std::endl
            << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup "
               "burger. I really do!"
            << std::endl;
}
void Harl::info() {
  std::cout << std::setw(7) << std::left << "INFO" << std::endl
            << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon "
               "in my burger! If you did, I wouldn't be asking for more!"
            << std::endl;
}
void Harl::warning() {
  std::cout << std::setw(7) << std::left << "WARNING" << std::endl
            << "I think I deserve to have some extra bacon for free. I've been coming foryears "
               "whereas you started working here since last month."
            << std::endl;
}

void Harl::error() {
  std::cout << std::setw(7) << std::left << "ERROR" << std::endl
            << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
  int msg;

  msg = (level == "DEBUG") * 1 + (level == "INFO") * 2 + (level == "WARNING") * 3 +
        (level == "ERROR") * 4;
  (this->*PrintMsg[msg])();
}
