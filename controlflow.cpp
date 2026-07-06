//used to control the flow of teh statements mostly used in loops 
#include <iostream>

int main(){
   //for-loop 
    for(int i=1;i<=6;i++){
       /* if (i%2==0)
        continue;
       std :: cout << "hello world " << std :: endl;
       std :: cout << i << std :: endl;*/ 
       if (i%2==0)
        break;
       std :: cout << "hello world " << std :: endl;
       std :: cout << i << std :: endl;
       return 0;
    }
}