#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    string n ;
    std::cin>>n;
    int lucky = 0;
    for(char digit : n){
        if(digit == '4' || digit == '7'){
            lucky++;
        }
    }
    bool islucky = true;
    if(lucky == 0){
        islucky = false;
       
    }
    else{
        int cnt = lucky;
        while(cnt >0){
            int digit = cnt%10;
            if(digit !=7 && digit != 4 ){
                islucky =false;
                break;
            }
            cnt/=10;
        }
    }
    if(islucky){
        std::cout<<"YES";
    }
    else{
        std::cout<<"NO";
    }

    return 0;
}
