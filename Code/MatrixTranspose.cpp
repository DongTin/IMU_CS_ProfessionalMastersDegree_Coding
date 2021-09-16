//
// Created by LiuYuKun on 2021/9/16.
//
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m,n;//m line,n row
    cout << "Input Matrix Line:";
    cin >> m;
    cout << "Input Matrix Row:";
    cin >> n;
    vector<vector<int>> a(m,vector<int>(n));
    vector<vector<int>> b(n,vector<int>(m));
    for(int i = 0;i < m;i++)
        for(int j = 0;j < n;j++)
        {
            printf("Input a(%d,%d):",i + 1,j + 1);
            cin >> a[i][j];
        }
    for(int i = 0;i < n;i++)
        for(int j = 0;j < m;j++)
            b[i][j] = a[j][i];
    cout << "Matrix A:\n";
    for(int i = 0;i < m;i++ )
    {
        for(int j = 0;j < n;j ++)
        {
            printf("%4d",a[i][j]);
        }
        cout << '\n';
    }
    cout << "Transposed A(T):\n";
    for(int i = 0;i < n;i++ )
    {
        for(int j = 0;j < m;j ++)
        {
            printf("%4d",b[i][j]);
        }
        cout << '\n';
    }
    return 0;
}