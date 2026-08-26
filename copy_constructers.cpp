#include <iostream>
#include <string>
#include <cstring>
class string{
private:
 char* m_buffer;
 unsigned int m_size;
public:

string(const char* string){
    m_size = strlen(string);
    m_buffer = new char[m_size +1]; //strcpy include the null termination 
    memcpy(m_buffer,string,m_size); // shallow copy 
} 
~string(){
 delete [] m_buffer;
}
//string(const string& other) = delete;// this is a  disabling copy copy constructer we given default
 
/*:m_buffer(other.m_buffer),m_size(other.m_size)
{
}*/
//our own copy constructer
string(const string& other)
:m_size(other.m_size){
    std:: cout << "copied constructor"<< std:: endl;
    m_buffer = new char[m_size+1];
    memcpy(m_buffer,other.m_buffer,m_size + 1); //  deep copy
}

char& operator[](unsigned int index ){
    return m_buffer[index];
}
friend std :: ostream& operator<<(std::ostream& stream , const string& string);
};

std:: ostream& operator<<(std::ostream& stream , const string& string){
    stream << string.m_buffer;
    return stream;
}
void printable( const string& string){// we are using const just because we are mking it unavailable to edit in the print function 
    std:: cout << string << std :: endl;
}
// prefer const ref - reduces the no of copy functions used in file 
// alwys pass ur projects by const reference becuase it makes faster to copy 
int main(){
    string first = "whale";
    string second = first;

    second[2] = 'k';
    
    printable(first);
    printable(second);
    std:: cin.get();
 }