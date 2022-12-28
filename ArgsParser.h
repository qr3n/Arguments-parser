#ifndef COMMANDS_PARSER_H
#define COMMANDS_PARSER_H

#include <vector>
#include <string>

class ArgsParser {
private:
    std::vector<std::string> commands, flags;
    static bool elementExists(const std::string& element, std::vector<std::string>* vector);
public:
    ArgsParser(int &argc, char* argv[]);
    bool commandExists(const std::string& command);
    bool flagExists(const std::string& flag);
};


#endif //COMMANDS_PARSER_H
