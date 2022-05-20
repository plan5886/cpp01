#ifndef HumanA_HPP
#define HumanA_HPP
#include <iostream>

#include "Weapon.hpp"

class HumanA {
 private:
  std::string name_;
  Weapon&     Weapon_;

 public:
  HumanA(std::string name, Weapon& weapon);
  ~HumanA();
  void Attack();
};

#endif  // HumanA_HPP
