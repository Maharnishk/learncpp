#include <iostream>
class Log{
    public:
    const int Loglevelerror= 0;
    const int LoglevelWarning= 1;
    const int LoglevelInfo= 2;
    private:
    int m_Loglevel = LoglevelInfo;
    public:
    void Setlevel(int level){
        m_Loglevel = level;
    }
    void Warn(const char* message){
        if(m_Loglevel >=LoglevelWarning)
std :: cout << "Warning:" << message << std :: endl;
    }
    void Error(const char* message){
        if(m_Loglevel >=Loglevelerror)
std :: cout << "ERROR:" << message << std :: endl;
    }
    void Info(const char* message){
        if(m_Loglevel >=LoglevelInfo)
std :: cout << "INFO:" << message << std :: endl;
    }
};
int main (){
Log log;
log.Setlevel(log.LoglevelWarning);
log.Warn("hello!");
log.Info("hello!");
log.Error("hello!");

}