#include<iostream>
using namespace std;
int main() {
    int i,j,n;
    cout<<"Enter num : ";
    cin>> n;
    int a = 1; // Most imp ;
        for(i = 1; i<=n; i++){
        for(j = 1; j<=i; j++) {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }

}