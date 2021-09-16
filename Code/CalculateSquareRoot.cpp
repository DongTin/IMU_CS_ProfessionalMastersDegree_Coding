//
// Created by LiuYuKun on 2021/9/16.
//
#include <iostream>
using namespace std;
int main()
{
    double x1,x2;
    double a;
    printf("Input num:");
    cin >> a;
    x2 = 1.0;
    for(;;)
    {
        x1 = x2;
        x2 = (x1 + a/x1)/2.0;
        if(abs(x1 - x2) < 0.00001)
        {
            printf("Result is : %.3f",x2);
            break;
        }
    }
    return 0;
}
