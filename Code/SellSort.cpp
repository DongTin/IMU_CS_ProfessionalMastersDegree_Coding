//
// Created by LiuYuKun on 2021/10/29.
//
#include<iostream>
using namespace std;
void Shell_Sort(int r[], int n){
    int d,i,j;
    n -= 1;
    for(d = n / 2; d >= 1;d = d / 2){
        for(i = d + 1;i <= n;i++)
        {
            r[0] = r[i];
            for( j = i - d;j > 0 && r[0] < r[j];j = j - d ){
                //  cout << " j("   << j << "):  "  <<  r[j] << ",  j+1: " << r[j + 1] << endl;
                r[j + d] = r[j];
            }
            r[j + d] = r[0];
        }
    }

}
int main()
{
    int x[11] = {111,2,3,5,4,9,1,11,23,16,99};
    int n = 11;
    Shell_Sort(x,n);
    for(int z = 1;z < n;z ++)
        cout << "x[" << z <<"] = " << z[x] << endl;
    return 0;
}
