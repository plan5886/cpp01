/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:55:53 by mypark            #+#    #+#             */
/*   Updated: 2022/05/22 09:35:10 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
  Harl harl;

  if (argc != 2) {
    std::cout << "Error: Bad Arguments" << std::endl;
    return (1);
  }
  harl.complain(argv[1]);
  return (0);
}
