#include <iostream>
#include <string>
#include <stdexcept>
#include "Executive.h"

int main(int argc, char** argv)
{
    if (argc > 1)
    {
        std:: string userFilename;
        userFilename = argv[1];
        try
        {
            Executive exec(userFilename);
            exec.run();
        }
        catch(std::runtime_error& rte)
        {
            std:: cout << rte.what() << std:: endl;
        }

    }
    else
    {
        std:: string userFilename;
        std:: cout << "file: ";
        std:: cin >> userFilename;
        try
        {
            Executive exec(userFilename);
            exec.run();
        }
        catch(std::runtime_error& rte)
        {
            std:: cout << rte.what() << std:: endl;
        }
    }
}