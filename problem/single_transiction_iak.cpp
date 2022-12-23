#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

 // for 1 transiction
int max_result = 0;

void lav(vector<int> a, vector<int> b){
}

int main(){
    
    vector<int> ar{7, 1, 5, 3, 6, 4};
    vector<int> sellingv;
    int maxProfit = 0;
    int profit = 0;

    for(auto i = ar.begin(); i != ar.end(); i++) {
       int purchasePrice = (*i);
      
       sellingv.assign(i+1, ar.end());
       sort(sellingv.begin(), sellingv.end(), greater<int> ());
       int sellingPrice = sellingv[0];
       profit = sellingPrice - purchasePrice;
       if(profit > maxProfit) maxProfit = profit;
    }
    cout << "Max profit: " << maxProfit << endl;
    
    return 0;
}

