#pragma once

#include <memory>
#include <vector>
#include "AConsole.h"
#include <unordered_map>
#include <Windows.h>
#include "TypedefRepo.h"

class ConsoleManager
{
public:
    ConsoleManager(); // constructor

    typedef std::unordered_map<String, std::shared_ptr<AConsole>> ConsoleTable;

    static ConsoleManager *getInstance();
    static void initialize();
    static void destroy();

    void drawConsole() const;
    void process() const;
    void switchConsole(String consoleName);
    void returnToPreviousConsole();
    void exitApplication();

    HANDLE getConsoleHandle() const;
    bool isRunning() void setConsole(std::shared_ptr<AConsole> console);

    void setCursorPosition(int x, int y) const;

private:
    std::vector<std::shared_ptr<AConsole>> m_consoles;
};