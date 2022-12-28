#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a = {1, 2, 3, 4, 6, 7, 9, 26 };

    int left = 0;
    int right = a.size() - 1;
    int m1, m2;
    int key = 9;
    bool paisi = false;

    while (left <= right)
    {
        m1 = left  + (right - left)/ 3;
        m2 = right  - (right - left)/ 3;
        // cout << m1 << "  "<< m2 << endl;

        if(a[m1] == key || a[m2] == key){
            paisi = true;
            break;
        }else if(key < a[m1]){
            right = m1 -1;
        }else if(key > a[m2]){
            left = m2 + 1;
        }else{
            left = m1 + 1;
            right = m2 -1;
        }
    }
    if(paisi){
       cout << "peye gesi" << endl; 
    }else{
        cout << "pai nai" << endl;
    }


    
    return 0;
}

