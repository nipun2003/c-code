#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(int arr[][3],int n)
{
    int ltr = 0, rtl = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                ltr = ltr + arr[i][j];
            }
            if (i + j == 2)
            {
                rtl = rtl + arr[i][j];
            }
        }
    }
    int abdif = 0;
    if (ltr > rtl)
    {
        abdif = ltr - rtl;
    }
    else
    {
        abdif = rtl - ltr;
    }
    return abdif;
}

int main()
{
    int arr[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    int result=diagonalDifference(arr,3);
    cout<<result;

}
