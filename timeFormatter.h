/*****************************************************
  
  Project       [AAIGF]
  
  FileName      [timeFun]
  
  Author        [Sina Boroumand]
  
  Affilation    [UT DSD Lab]
  
  Date          [November 03, 2016]
  
*****************************************************/

#ifndef AAIGF_TIMEFUN_H
#define AAIGF_TIMEFUN_H

#include <string>

using namespace std;

double timeGetTime();

const string currentDateTimeLog();

const string currentDateTime();

const string currentDateTimeLog(string modelName);

const string currectDateTimePath(string modelName);

#endif //AAIGF_TIMEFUN_H
