// code uses nested loop for making right half triangle
#include <iostream>
using namespace std;

int main() {
    int i,j,row=5;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
   
    return 0;
}
