/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:44:33 by mypark            #+#    #+#             */
/*   Updated: 2022/05/22 11:47:29 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_HPP
#define Weapon_HPP
#include <iostream>

class Weapon {
 private:
  std::string type_;

 public:
  Weapon(const std::string& type);
  ~Weapon();
  const std::string& getType();
  void               setType(const std::string& new_type);
};

#endif  // Weapon_HPP
