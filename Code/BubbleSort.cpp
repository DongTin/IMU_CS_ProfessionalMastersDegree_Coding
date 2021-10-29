//
// Created by LiuYuKun on 2021/10/29.
//
#include<iostream>
using namespace std;
void Bubble_Sort(int r[], int n){
    n -= 1;
    int exchange = n,bound;
    while(exchange != 0){
        bound = exchange;
        exchange = 0;
        for(int j = 1;j < bound;j++){
            if(r[j] > r[j + 1]){
                int temp = r[j + 1];
                r[j + 1] = r[j];
                r[j] = temp;
                exchange = j;
            }
        }
    }

}
int main()
{
    int x[11] = {111,2,3,5,4,9,1,11,23,16,99};
    int n = 11;
    Bubble_Sort(x,n);
    for(int z = 1;z < n;z ++)
        cout << "x[" << z <<"] = " << z[x] << endl;
    return 0;
}
