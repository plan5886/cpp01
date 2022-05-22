/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:13:11 by mypark            #+#    #+#             */
/*   Updated: 2022/05/22 09:29:12 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
#define Harl_HPP
#include <iomanip>
#include <iostream>

class Harl {
 private:
  void none(void);
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
  void (Harl::*PrintMsg[5])();

 public:
  Harl();
  ~Harl();
  void complain(std::string level);
};

enum ProblemLevel { NONE, DEBUG, INFO, WARNING, ERROR };

#endif  // Harl_HPP
