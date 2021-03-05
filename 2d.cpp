#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int n,q,a[3000][3000],i,j,k,l,b[3000];
    cin>>n>>q;
    for(i=0;i<n;i++){
        cin>>k;
        for(j=0;j<k;j++){
            cin>>a[i][j];
            
        }
        
    }
    for(l=0;l<q;l++){
        cin>>i>>j;
        b[l]=a[i][j];
    }  
    for(l=0;l<q;l++){
        cout<<b[l]<<endl;
    }
    return 0;
}