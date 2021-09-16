//
// Created by LiuYuKun on 2021/9/16.
//
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m,n;//m line,n row
    cout << "Input Matrix Line:";
    cin >> m;
    cout << "Input Matrix Row:";
    cin >> n;
    vector<vector<int>> a(m,vector<int>(n));
    for(int i = 0;i < m;i++)
        for(int j = 0;j < n;j++)
        {
            printf("Input a(%d,%d):",i + 1,j + 1);
            cin >> a[i][j];
        }
    int maxNum = a[0][0],tempX = 0,tempY = 0;
    for(int i = 0;i < m;i++)
        for(int j = 0;j < n;j++)
        {
            if(a[i][j] > maxNum)
            {
                maxNum = a[i][j];
                tempX = i;
                tempY = j;
            }
        }
    cout << "Matrix original: \n";
    for(int i = 0;i < m;i++ )
    {
        for(int j = 0;j < n;j ++)
        {
            printf("%4d",a[i][j]);
        }
        cout << '\n';
    }
    printf("Max num in Matrix is : %d,first appear  location is (%d,%d)",maxNum,tempX + 1,tempY + 1);
}