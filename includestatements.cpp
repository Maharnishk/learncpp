#include <iostream>
int Mul(int a,int b){
    int result = a * b;
    return result;
}
/* #include - it copy paste the file in to out file where we added our include statement 
endbrace example
we can add end flower bracket in a saperate file and give it name as endbrace 
with out entering the end brakcet in our main file we can simply type #include endbarce */

#define TORTOISE int
/*this define keyword will help us on replace any of our words in another word 
example: here we replaced tortoise as int so we can write our code like 
TORTOISE main(){
Mul(num1,num2)
return 0;
}
this will be the same 
*/

/*
#if 1 this will include the statemnts between if and endif 
TORTOISE main(){
Mul(num1,num2)
return 0;
}
#endif
---------------------------------------------
#if 0 -this will not  include the statemnts between if and endif 
TORTOISE main(){
Mul(num1,num2)
return 0;
}
#endif 
*/