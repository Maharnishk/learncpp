#include <iostream>

int main(){
    int x = 5;
    bool ComparisionResult= x ==5;
    
    if(ComparisionResult){
        std:: cout << "hello world "<< std :: endl;
    }

    
 const char* ptr = "hello";
 if (ptr){
    std:: cout << ptr << std :: endl;
 }
 else if (ptr == "hello"){
    std :: cout << "ptr is hello" << std :: endl;
 }
 else 
 std :: cout << "pointer is null "<< std ::endl;

}