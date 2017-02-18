#ifndef OUTL_HPP
#define OUTL_HPP

#include "../rte/objs/command.hpp"
#include "../rte/runtime.hpp"
#include "../rte/registers.hpp"
#include "../rte/compiler.hpp"

class Outl : public Command
{
private:
    std::regex name = std::regex("^((O|o)(U|u)(T|t)(L|l))");

    std::regex r_int = std::regex("[0-9]*");
    std::smatch match;
public:
    void runFunction(std::vector<std::string> args)
    {
        if (!Runtime.Compile)
            std::cout << Runtime.peekStack() << std::endl;

        Compiler.addLine("std::cout << stack.top() << std::endl;");
    }

    std::regex getName()
    {
        return name;
    }
};

#endif
