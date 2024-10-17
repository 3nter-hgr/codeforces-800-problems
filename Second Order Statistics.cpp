#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000];
int main() {
    int n ;
    std::cin>>n;
    for(int i=0 ;i<n ;i++){
        std::cin>>arr[i];
    }
    sort(arr , arr+n);
    int second = -1;
    int first =arr[0];
    for(int i=1 ;i<n ;i++){
        if(arr[i] > first){
            second = arr[i];
            break;
            
        }
        
    }
    if(second==-1){
        std::cout<<"NO";
    }
    else{
        std::cout<<second;
    }

    return 0;
}
