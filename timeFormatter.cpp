#include <sys/time.h>
#include "timeFormatter.h"
/*****************************************************
  
  Project       [AAIGF]
  
  FileName      [time]
  
  Author        [Sina Boroumand]
  
  Affilation    [UT DSD Lab]
  
  Date          [November 03, 2016]
  
*****************************************************/

double timeGetTime() {
    struct timeval time;
    struct timezone zone;
    gettimeofday(&time, &zone);
    return time.tv_sec + time.tv_usec * 1e-6;
}

/////////////////////////////////////////////////////////////////////////////////////////////

const string currentDateTimeLog(string outputPortName, string modelName) {
    time_t now = time(0);
    struct tm tstruct;
    string tempString = "";
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S.log", &tstruct);

    tempString = modelName + "_" + outputPortName + buf;
    return tempString;

}

/////////////////////////////////////////////////////////////////////////////////////////////

const string currentDateTime() {
    time_t now = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d  %H:%M:%S", &tstruct);

    return buf;
}

/////////////////////////////////////////////////////////////////////////////////////////////

const string currentDateTimeLog(string modelName) {
    time_t now = time(0);
    struct tm tstruct;
    string tempString = "";
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S.log", &tstruct);

    tempString = modelName + "_" + buf;
    return tempString;

}

/////////////////////////////////////////////////////////////////////////////////////////////

const string currectDateTimePath(string modelName) {
    time_t now = time(0);
    struct tm tstruct;
    string tempString = "";
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%b-%Y-%d_%H-%M-%S", &tstruct);

    tempString = modelName + "_" + buf;
    return tempString;
}
