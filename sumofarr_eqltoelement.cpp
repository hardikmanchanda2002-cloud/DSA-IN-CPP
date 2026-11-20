#include <iostream>
using namespace std;

void sum_equal_element(int a[],int n){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(a[i]+a[j]==n){
                cout<<a[i]<<" "<<a[j]<<endl;
            
        }
    }
}
}
int main(){
    int a[]={1,3,6,2,4};
    int n=sizeof(a)/sizeof(int);
    sum_equal_element(a,n);

  
}

