#include <iostream>
#include <string>
using namespace std;
int main() {
   string player;
   std::cin>>player;
   
   
   int count =1;
   char current =player[0];
   for(int i=1 ;i<player.size() ;i++){
       if(current == player[i]){
           count++;
           if(count >=7){
               std::cout<<"YES";
               return 0;
           }
       }
       else{
           current = player[i];
           count =1;
       }
       
   }
   std::cout<<"NO";

    return 0;
}
