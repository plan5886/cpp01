/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:57:00 by mypark            #+#    #+#             */
/*   Updated: 2022/05/20 09:24:07 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {
 private:
  std::string name_;
  static int counts_;

 public:
  Zombie();
  Zombie(std::string name);
  ~Zombie();
  void Announce(void);
  void SetName(std::string name);
};

namespace zombie {

Zombie* zombieHorde(int number, std::string name);

}  // namespace zombie

#endif
