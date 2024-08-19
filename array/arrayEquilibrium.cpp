#include<bits/stdc++.h>
using namespace std;

int equilib(vector<int> arr){
    int sum=0;
    for(auto it: arr)
        sum+=it;
    int rightSum = sum;
    int leftSum=0;

    for(int i=0;i<arr.size();i++){
        rightSum-=arr[i];
        if(leftSum==rightSum)
        return i;
        leftSum+=arr[i];
        
    }
    return -1;
}

int main(){
    vector<int> arr={-7,1,5,2,-4,3,0};
    cout<<equilib(arr);
    return 0;
}