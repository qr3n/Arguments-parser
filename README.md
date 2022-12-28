# Arguments-parser
Command line argument parser

## Usage

1. Include the header file in your project
```cpp
#include "ArgParser.h"
```

2. Add .cpp file to build configuration
```cmake
#CMake

add_executable(main.cpp ArgParser.cpp)
```

3. Create a class object, passing it command line options as arguments
```cpp
ArgsParser parser(argc, argv);
```

4. Look at the names of the class methods and use them as you need. They are intuitive.
```cpp
// Example
ArgsParser parser(argc, argv);

if (parser.commandExists("helloWorld")) {
    std::cout << "Hello, World!" << std::endl;
};
```
