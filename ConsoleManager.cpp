#include "ConsoleManager.h"
#include "MainConsole.h"
#include "MarqueeConsole.h"
#include "SchedulingConsole.h"
#include "MemorySimulationConsole.h"

ConsoleManager::ConsoleManager()
{
    this->running = true;

    this->consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

    const std::shared_ptr<MainConsole> mainConsole = std::make_shared<MainConsole>();
    const std::shared_ptr<MarqueeConsole> marqueeConsole = std::make_shared<MarqueeConsole>();
    const std::shared_ptr<SchedulingConsole> schedulingConsole = std::make_shared<SchedulingConsole>();
    const std::shared_ptr<MemorySimulationConsole> memorySimulationConsole = std::make_shared<MemorySimulationConsole>();

    this->consoleTable[MAIN_CONSOLE] = mainConsole;
    this->consoleTable[MARQUEE_CONSOLE] = marqueeConsole;
    this->consoleTable[SCHEDULING_CONSOLE] = schedulingConsole;
    this->consoleTable[MEMORY_SIMULATION_CONSOLE] = memorySimulationConsole;

    this->switchConsole(MAIN_CONSOLE);
}
