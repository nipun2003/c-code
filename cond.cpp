#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m],i,j,k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<m;j++)
    {
        cin>>b[j];
    }
    int min,max;
    j=0;
    min=b[j];
    max=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max;
    for(j;j<m;j++){
        if(b[j]<min)
        {
            min=b[j];
        }
    }
    if(max<=min)
    {
        int count=0;
        for(k=max;k<=min;k++)
        {
            for(i=0;i<n;i++)
            {
                if(k%a[i]==0){
                    continue;
                }
                else
                {
                    break;
                }
            }
            for(j=0;j<m;j++)
            {
                if(a[j]%k==0)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            if((i+1)==n && (j+1)==m)
            {
                count++;
            }
        }
        cout<<count;

    }
    else{
        cout<<0;
    }
    return 0;

}