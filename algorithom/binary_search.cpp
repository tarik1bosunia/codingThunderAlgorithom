#include<iostream>

using namespace std;

int main(){
    int a[] = {1, 2, 3, 4, 6, 7, 9, 26 };
    int length = sizeof(a)/ sizeof(a[0]);
    int left = 0;
    int right = length -1;
    int mid;
    int key = 15;

    bool isFound = false;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if(a[mid] == key){
            isFound = true;
            break;
        }else if(a[mid] < key){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
        
    }
    if(isFound){
        cout << "found at index: " << mid << endl;
    }else{
        cout << "not found" << endl;
    }

    
    return 0;
}

