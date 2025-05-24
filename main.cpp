#include <iostream>
#include <string>
#include <cstdlib>   //system()
#include <algorithm> //transform

void printHeader()
{
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    std::cout << "~   ___     ___     ___      ___    ___     ___   __   __~\n";
    std::cout << "~  / __|   / __|   / _ \\    | _ \\  | __|   / __|  \\ \\ / /~\n";
    std::cout << "~ | (__    \\__ \\  | (_) |   |  _/  | _|    \\__ \\   \\ V / ~\n";
    std::cout << "~  \\___|   |___/   \\___/   _|_|_   |___|   |___/   _|_|_ ~\n";
    std::cout << "~_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_| \"\"\" |_|\"\"\"\"\"|_|\"\"\"\"\"|_| \"\"\" |~\n";
    std::cout << "~\"`-0-0-'\"`-0-0-'\"`-0-0-'\"`-0-0-'\"`-0-0-'\"`-0-0-'\"`-0-0-'~\n";
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

int main()
{
    std::string command;
    printHeader();

    while (true)
    {
        std::cout << "\n> ";
        std::getline(std::cin, command);

        std::transform(command.begin(), command.end(), command.begin(), ::tolower);

        if (command == "initialize")
        {
            std::cout << "initialize command recognized. Doing something.\n";
        }
        else if (command == "screen")
        {
            std::cout << "screen command recognized. Doing something.\n";
        }
        else if (command == "scheduler-test")
        {
            std::cout << "scheduler-test command recognized. Doing something.\n";
        }
        else if (command == "scheduler-stop")
        {
            std::cout << "scheduler-stop command recognized. Doing something.\n";
        }
        else if (command == "report-util")
        {
            std::cout << "report-util command recognized. Doing something.\n";
        }
        else if (command == "clear")
        {
#ifdef _WIN32
            system("cls");
#else
            system("clear");
#endif
            printHeader();
        }
        else if (command == "exit")
        {
            std::cout << "Exiting CLI. Goodbye!\n";
            break;
        }
        else
        {
            std::cout << "Unknown command: " << command << "\n";
        }
    }

    return 0;
}
