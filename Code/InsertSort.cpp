//
// Created by LiuYuKun on 2021/10/29.
//
#include<iostream>
using namespace std;
void Insert_Sort(int r[], int n){
    int i,j;
    for(i = 2;i < n;i++)
    {
        r[0] = r[i];
        for( j = i - 1;r[0]<r[j];j-- ){
            cout << " j("   << j << "):  "  <<  r[j] << ",  j+1: " << r[j + 1] << endl;
            r[j + 1] = r[j];
        }
        r[j + 1] = r[0];
    }
}
int main()
{
    int x[11] = {-1,2,3,5,4,9,1,11,23,16,99};
    int n = 11;
    Insert_Sort(x,n);
    for(int z = 0;z < n;z ++)
        cout << "x[" << z <<"] = " << z[x] << endl;
    return 0;
}