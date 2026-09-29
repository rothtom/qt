#include <iostream>

#include "Firefox.hpp"

Firefox::Firefox()
{}

void Firefox::browse(const std::string& phrase) {
    std::cout << "Browsing: " << phrase << std::endl;
}