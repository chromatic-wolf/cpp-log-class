#include "logger.h"
#include <iostream>
class writeError
{
    writeError()
    {

    }
    std::ostream operator<<(const char *t)
    {
        std::cout << t << std::endl;
    }

};

class writeWarning
{
    std::ostream operator<<(const char *t)
    {

    }

};



int *m_logLevel;
writeError *errorClass;


logger::logger(int level)
{
    m_logLevel = new int(level);
    errorClass = new writeError();
    //std::cout.rdbuf();
}

logger::~logger()
{
    delete m_logLevel;
}

logger::writeError *logger::logError()
{

}



//std::ostream *logger::logError()
//{
//    //return m_errorStream;
//}

//std::istream *logger::logWarning()
//{

//}

//std::istream *logger::logInfo()
//{

//}


