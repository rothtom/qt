#include <iostream>

#include "UserInteractor.hpp"

userInteractor::userInteractor()
{

}

void userInteractor::interact() {
    std::string phrase = "";
    while (phrase == "") {
        std::cin >> phrase;
    }
    emit gotPhrase(phrase);
}