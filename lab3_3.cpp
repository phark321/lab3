#include <iostream>

using namespace std;

int main(){
    int sum = 0,x = 2;
    while(x<69){
        sum += (1/x);
        x++;
    }
    cout << sum;

    
    return 0;
}