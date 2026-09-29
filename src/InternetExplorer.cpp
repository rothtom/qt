#include "InternetExplorer.hpp"
#include <thread>
#include <chrono>
#include <iostream>


internetExplorer::internetExplorer()
{

}

void internetExplorer::request_browse(const std::string& phrase) {
    timer.start();
    while (timer.elapsed() < 10000) {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }

    emit browse_requested(phrase);
}

void internetExplorer::browse(const std::string& phrase) {
    std::cout << "Exploring the internet for " << phrase << std::endl;
}