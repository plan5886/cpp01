/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:55:53 by mypark            #+#    #+#             */
/*   Updated: 2022/05/21 15:00:31 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
  Harl harl;

  harl.complain("DEBUG");
  harl.complain("Debug");
  harl.complain("debug");

  harl.complain("INFO");
  harl.complain("Info");
  harl.complain("info");

  harl.complain("ERROR");
  harl.complain("Error");
  harl.complain("error");

  harl.complain("WARNING");
  harl.complain("Warning");
  harl.complain("warning");
}
