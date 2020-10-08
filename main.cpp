#include <iostream>
#include "logger.h"

int main()
{
    logger *log = new logger();
    *log->logError() << "sadsadad";
    return 0;
}
