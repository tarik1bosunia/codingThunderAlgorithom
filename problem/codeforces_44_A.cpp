#include<iostream>
#include<map>
#include<set>


using namespace std;

int main(){
    int n;

    set<pair<string, string>> s;
    string tree, color;
    cin >> n;

    while (n--)
    {
        cin>> tree >> color;
        s.insert(make_pair(tree, color));
    }
    cout << s.size() << endl;

    return 0;
}

