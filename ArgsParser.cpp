#include "ArgsParser.h"

ArgsParser::ArgsParser(int &argc, char **argv) {
    for (int i = 0; i < argc; ++i) {
        const auto &arg = std::string(argv[i]);

        if (arg[0] == '-' && arg[1] == '-')
            flags.push_back(arg);

        else commands.push_back(arg);
    }
}

bool ArgsParser::elementExists(const std::string &element, std::vector<std::string> *vector) {
    if (std::find(vector->begin(), vector->end(), element) != vector->end())
        return true;

    else return false;
}

bool ArgsParser::commandExists(const std::string& command) {
    return elementExists(command, &commands);
}

bool ArgsParser::flagExists(const std::string& flag) {
    return elementExists(flag, &flags);
}