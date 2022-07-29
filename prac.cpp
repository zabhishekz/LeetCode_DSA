#include<deque>
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void func(){
    int cursum = 0;
    int maxsum = 0;
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    for(int i = 0; i < arr.size(); i++){
        cursum += arr[i];
        if(cursum <= 0){
            cursum = 0;
        }
        maxsum = max(maxsum, cursum);
    }
    cout<<maxsum;
}

int main(){
    func();
    return 0;
}