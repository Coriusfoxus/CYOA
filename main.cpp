#include "Config.h"
#include <iostream>


using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello world" << endl;
    std::cout << argv[0] << " Version " << Test_VERSION_MAJOR << "."
              << Test_VERSION_MINOR << std::endl;
}
