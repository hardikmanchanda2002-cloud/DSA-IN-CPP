#include <iostream>
using namespace std;

int main() {
 int n;
    cin>>n;
    int reverse=0;
    for(;n>0;n=n/10){
        reverse=reverse*10+n%10;
        for(int i=0;i<reverse;i++){
            cout<<reverse%10;
            reverse=reverse/10;
        }
    }
    return 0;
}
