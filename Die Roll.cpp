#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   int x ,y ;
   std::cin>>x>>y ;
   int mx =max(x,y);
   int success = 6- mx +1;
   
   
   
   auto gcd = [](int a ,int b){
       while(b!=0){
           int temp =b;
           b = a % b;
           a = temp;
           
       }
       return a;
   };
   
   
   
   
   int numerator = success ;
   int denominator = 6 ;
   
   int common_devisor  = gcd(numerator , denominator);
   numerator/=common_devisor;
   denominator/=common_devisor;
   
   
   std::cout<<numerator <<"/"<<denominator;
   
   

    return 0;
}
