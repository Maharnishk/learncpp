//EMUNS=enumeration(giving a name to a value )it is just a integer
#include <iostream>
enum example:char 
{
    A,B,C
};
int a = 0;
int b = 1;
int c = 2;
int main(){
example value =B;
}
// using this in our log class---->
 #include <iostream>
class Log{
    public:
    enum Level{
        level_Error,level_Warning,level_Info
    };
 private:
Level m_Loglevel = level_Info;
    public:
    void Setlevel(Level level){
        m_Loglevel = level;
    }
    void Warn(const char* message){
        if(m_Loglevel >= level_Warning)
std :: cout << "Warning:" << message << std :: endl;
    }
    void Error(const char* message){
        if(m_Loglevel >=level_Error)
std :: cout << "ERROR:" << message << std :: endl;
    }
    void Info(const char* message){
        if(m_Loglevel >=level_Info)
std :: cout << "INFO:" << message << std :: endl;
    }
};
int main (){
Log log;
log.Setlevel(Log::level_Error);
log.Warn("hello!");
log.Info("hello!");
log.Error("hello!");

}