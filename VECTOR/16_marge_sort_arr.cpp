#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&v1,vector<int>&v2){
    int n = v1.size();
    int m = v2.size();
    vector<int> v(m+n);
}

int main(){
    vector<int>v1(4);
    vector<int>v2(6);
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);

    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(10);
    v1.push_back(12);

    vector<int> v= merge(v1,v2);
}