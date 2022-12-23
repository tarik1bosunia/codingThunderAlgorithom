#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;


// sort( values.begin( ), values.end( ), [ ]( const MyStruct& lhs, const MyStruct& rhs )
// {
//    return lhs.key < rhs.key;
// });
//     inline bool operator() (const MyStruct& struct1, const MyStruct& struct2)
//     {
//         return (struct1.key < struct2.key);
//     }

// bool lessthan (pair<int,int> p1, pair<int,int> p2){
        
//         return (p1.first < p2.first);
// }

int main(){
    int n;
    int a, b;
    vector<pair<int, int>> v;
    map<pair<int, int> , int> m;
    cin >> n; 
    while (n--)
    {
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end(), [](pair<int,int> p1, pair<int,int> p2){
        return (p1.first > p2.first);});

    bool flag = true;
    for(int i = 0; i < n; i++){
       for(auto it : m){
          if(it.first.first >= v[i].second ){
            flag = false;
            m.insert({v[i], it.second + 1});
            
          }
       }
       
    
        if(flag){
            m.insert({v[i], 1});
        }
        for(auto it : m){
            cout << "<" << it.first.first << " " << it.first.second << "> :" << it.second << endl;
          
       }
    }



    // int max = 0;

    // for(auto item : m){
    //     cout << item.second << endl;
    //     // if(item.second > max){
    //     //     max = item.second;
    //     // }
    // }
    // cout << max << endl;

    
    return 0;
}

