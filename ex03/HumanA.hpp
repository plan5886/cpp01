#ifndef HumanA_HPP
#define HumanA_HPP
#include <iostream>

#include "Weapon.hpp"

class HumanA {
 private:
  const std::string& name_;
  Weapon&            Weapon_;

 public:
  HumanA(const std::string& name, Weapon& weapon);
  ~HumanA();
  void Attack();
};

#endif  // HumanA_HPP
