#ifndef LOGGER_H
#define LOGGER_H
#include <ostream>


class logger
{

    class writeError
    {
        writeError();
        std::ostream& operator<<(const char* t);

    };
    class writeWarning
    {
        std::ostream& operator<<(const char* t);

    };


public:
   static const int error = 0;
   static const int warning = 1;
   static const int info = 2;

   int logLevel;
   public:
   logger(int level = info);
   ~logger();
   writeError* logError();












};



#endif // LOGGER_H
