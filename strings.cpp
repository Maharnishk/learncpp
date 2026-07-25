#include <iostream>
#include <string>
void printstring(std :: string string){// this is a copy or a duplication may lead to performance issues
    string+="h";
     std::cout << string << std:: endl;
}

int main (){
     std ::string name = "hello";
     name+= "world";
     bool contains = name.find("lo") != std :: string ::npos;
     //manual
     //char names[6] = {'h','e','l','l','o','\0'};
     std::cout << name << std:: endl;
      std::cout << contains << std:: endl;
     name[2]= 'a';
     printstring("hell");
}