
#ifndef HumanB_HPP
#define HumanB_HPP
#include <iostream>

#include "Weapon.hpp"

class HumanB {
 private:
  std::string name_;
  Weapon*     Weapon_;

 public:
  HumanB(std::string name);
  ~HumanB();
  void Attack();
  void setWeapon(Weapon& Weapon);
};

#endif  // HumanB_HPP
