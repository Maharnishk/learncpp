#include <iostream>
void addition(int a, int b){
   int result = a+b;
  std::cout << result << std :: endl;
}
void sub (int a, int b){
   int result = a-b;
   std::cout << result << std :: endl;
}
void  mul(int a, int b){
   int result = a*b;
   std::cout << result << std :: endl;
}
void division(int a, int b){
   int result = a/b;
   std::cout << result << std :: endl;
}
void Mod(int a, int b){
   int result = a%b;
   std::cout << result << std :: endl;
}
int main(){
    int option;
    int num1 , num2;
    std::cout << "what calculation u wanna perform?"<< std :: endl;
    std::cout << "option 1 = Addition"<< std :: endl;
    std::cout << "option 2 = substraction"<< std :: endl;
    std::cout << "option 3 = multiplication"<< std :: endl;
    std::cout << "option 4 = division"<< std :: endl;
    std::cout << "option 5 = modulus"<< std :: endl;

    std::cout << "ur option ->";
    std :: cin>>option;
    std::cout << "Enter ur number 1 : "<< std :: endl;
    std :: cin >> num1;
    std::cout << "Enter ur number 2 : "<< std :: endl;
    std :: cin >> num2;

    if (option == 1){
    addition(num1,num2);
    }
    else if(option==2)
    {
        sub(num1,num2);
    }
    else if(option==3)
    {
        mul(num1,num2);
    }
    else if(option==4)
    {
        division(num1,num2);
    }
     else if(option==5)
    {
        Mod(num1,num2);
    }
    else 
    {
        std :: cout << "operator not found try 1,2,3,4,5 : "<< std :: endl;
    }
   
    }

