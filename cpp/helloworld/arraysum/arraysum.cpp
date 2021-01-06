#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
    int arr[10]={1, 4, 9, 34, 2, 19, 10, 22, 20, 100};
    int s = 0;
    s = accumulate(arr, arr+10, s);
    cout<<s<<endl;
}

