/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:57:00 by mypark            #+#    #+#             */
/*   Updated: 2022/05/20 13:50:45 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {
 private:
  std::string name_;
  static int  counts_;

 public:
  Zombie();
  Zombie(std::string name);
  ~Zombie();
  void Announce(void);
};

namespace zombie {

void    randomChump(std::string name);
Zombie *newZombie(std::string name);

}  // namespace zombie

#endif
