#include <iostream>
#include "log.h"

void InitLog(const char* message){
 Log("Initialize Log ");
}
void Log(const char* message){
    std :: cout << message << std :: endl;
}