#ifndef LOGGER_H
#define LOGGER_H
#include <ostream>
class logger
{
public:
   static const int error = 0;
   static const int warning = 1;
   static const int info = 2;

    int logLevel;
public:
    logger(int level = info);
    ~logger();
    std::ostream* logError();
    std::istream* logWarning();
    std::istream* logInfo();


};

#endif // LOGGER_H
