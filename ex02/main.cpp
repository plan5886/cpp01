/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:09:25 by mypark            #+#    #+#             */
/*   Updated: 2022/05/20 10:08:06 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
  std::string  string = "HI THIS IS BRAIN";
  std::string* stringPTR = &string;
  std::string& stringREF = string;

  std::cout << "Address of String Variable       : " << &string << std::endl;
  std::cout << "Address held by String Pointer   : " << stringPTR << std::endl;
  std::cout << "Address held by String Reference : " << &stringREF << std::endl;

  std::cout << "Value of String Variable             : " << string << std::endl;
  std::cout << "Value pointed to by String Pointer   : " << *stringPTR << std::endl;
  std::cout << "Value pointed to by String Reference : " << stringREF << std::endl;
}
