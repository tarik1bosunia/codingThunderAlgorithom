#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> a { 1,2,5,2,3};
    vector<int> result;
    int target = 2;
    sort(a.begin(), a.end());
    auto  lower = lower_bound(a.begin(), a.end(), target);
    for(auto it = lower; it != a.end() ; it++){
        if(*it == target){
            result.push_back(it - a.begin());
        }else{
            break;
        }
    }

    for(auto &it : result){
        cout << it << " ";
    }
    
    
    return 0;
}

