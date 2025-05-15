#include <iostream>
#include <string>
#include <cstdlib>  //system()
#include <algorithm> //transform

void printHeader() {
    std::cout << "===========================" << std::endl;
    std::cout << "   _____  _____   ____  " << std::endl;
    std::cout << "  / ____|/ ____| |  __ \\ " << std::endl;
    std::cout << " | |    | (___   | |__) |" << std::endl;
    std::cout << " | |     \\___ \\  |  ___/ " << std::endl;
    std::cout << " | |____ ____) | | |     " << std::endl;
    std::cout << "  \\_____|_____/  |_|     " << std::endl;
    std::cout << "         CSOPESY CLI     " << std::endl;
    std::cout << "===========================" << std::endl;
}

int main() {
    std::string command;
    printHeader();

    while (true) {
        std::cout << "\n> ";
        std::getline(std::cin, command);

        std::transform(command.begin(), command.end(), command.begin(), ::tolower);

        if (command == "initialize") {
            std::cout << "initialize command recognized. Doing something.\n";
        } else if (command == "screen") {
            std::cout << "screen command recognized. Doing something.\n";
        } else if (command == "scheduler-test") {
            std::cout << "scheduler-test command recognized. Doing something.\n";
        } else if (command == "scheduler-stop") {
            std::cout << "scheduler-stop command recognized. Doing something.\n";
        } else if (command == "report-util") {
            std::cout << "report-util command recognized. Doing something.\n";
        } else if (command == "clear") {
#ifdef _WIN32
            system("cls");
#else
            system("clear");
#endif
            printHeader();
        } else if (command == "exit") {
            std::cout << "Exiting CLI. Goodbye!\n";
            break;
        } else {
            std::cout << "Unknown command: " << command << "\n";
        }
    }

    return 0;
}
