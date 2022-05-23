/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:03:33 by mypark            #+#    #+#             */
/*   Updated: 2022/05/22 12:26:00 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <fstream>
#include <iostream>
#include <sstream>

namespace ex04 {
void open_files(std::string filename, std::ifstream& ifs, std::ofstream& ofs) {
  ifs.open(filename);
  if (!ifs.is_open()) {
    std::cerr << "Error: File Open Failed" << std::endl;
    exit(1);
  }
  ofs.open(filename.append(".replace"));
  if (!ofs.is_open()) {
    std::cerr << "Error: File Open Failed" << std::endl;
    exit(1);
  }
}

void ifs_to_ss(std::ifstream& ifs, std::stringstream& ss) {
  std::string input;

  while (1) {
    std::getline(ifs, input);
    ss << input;
    if (ifs.eof())
      break;
    ss << '\n';
  }
}

void write_content(std::ofstream& ofs, std::stringstream& ss, char** argv) {
  std::string content;
  std::string front;
  std::size_t found;
  std::string target(argv[2]);
  std::string replaced(argv[3]);

  content = ss.str();
  found = content.find(target);
  while (found != std::string::npos) {
    front = content.substr(0, found);
    content = content.substr(found + target.size(), content.size());
    ofs << front << replaced;
    found = content.find(target);
  }
  ofs << content;
}

}  // namespace ex04

int main(int argc, char** argv) {
  if (argc != 4) {
    std::cerr << "Error: Bad Arguments" << std::endl;
    exit(1);
  }
  std::string target(argv[2]);
  if (target == "") {
    std::cerr << "Error: Empty Target String" << std::endl;
    exit(1);
  }

  std::ifstream     ifs;
  std::ofstream     ofs;
  std::stringstream ss;

  ex04::open_files(argv[1], ifs, ofs);
  ex04::ifs_to_ss(ifs, ss);
  ex04::write_content(ofs, ss, argv);
}
