#include "logger.h"
#include <iostream>
int *m_logLevel;
std::ostream *m_ErrorStream;
std::istream *m_WarningStream;
std::istream *m_InfoStream;


logger::logger(int level)
{
    m_logLevel = new int(level);
    m_ErrorStream = new std::ostream(std::cout.rdbuf());
    //std::cout.rdbuf();
}

logger::~logger()
{
    delete m_logLevel;
}

std::ostream *logger::logError()
{
    return m_ErrorStream;
}

std::istream *logger::logWarning()
{

}

std::istream *logger::logInfo()
{

}



