#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
int main(){
    using namespace std:: string_literals;
    std ::u16string name0 =u"string"s + u"hello";

    //R=roll
    const char* example = R"(line1
    line2
    line3
    line4
    )";

    //there is an extra charcter in an character array that is called null character
    //"\0"-nul termination or array termination

    const char* name = u8"ma\0hi";//(1 byte per charcter)
   // const key word wont let u modify teh variable again in the code
   const wchar_t* name2 = L"mahi";//(2byte per charcter)
   const char16_t* name3 = u"mahi";//(2byte per charcter)
   const char32_t* name4 = U"mahi";//(4byte per charcter)
    std::cout << strlen(name)<<std :: endl;

}
