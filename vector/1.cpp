#include<iostream>
#include<vector>

using namespace std;

class Student{

};

int main(){
    // vector<int> g;
    // g1.push_back(10);
    // cout << g1[0] << endl;




    // cout << "Enter the rolls:"<< endl;

    // int a;

    // for(int i = 0 ; i < 5; i++){
    //     cin >> a;
    //     g.push_back(a);
    // }
    // for(int i = 0 ; i < 5; i++){
    //     cout << g[i] << " ";
    // }


    // vector<string> studentNames;
    // cout << "Enter the Names"<< endl;

    // string name;

    // for(int i = 0 ; i < 5; i++){
    //     cin >> name;
    //     studentNames.push_back(name);
    // }

    // cout << "the student names you entered: "<< endl;
    // for(int i = 0 ; i < 5; i++){
    //     cout << studentNames[i] << " ";
    // }

    // cout << endl;
    // cout << "after pop back: "<< endl;

    // studentNames.pop_back();
    // int length = studentNames.size();
    // for(int i = 0 ; i < length; i++){
    //     cout << studentNames[i] << " ";
    // }



    vector<string> studentNames{"ela", "esha", "tarik" };

    // for(auto it = studentNames.begin(); it != studentNames.end(); it++ ){
    //     cout << *it << " ";
    // }

    // for(auto it = studentNames.rbegin(); it != studentNames.rend(); it++ ){
    //     cout << *it << " ";
    // }

    // for(string studentName : studentNames){
    //     cout << studentName << " ";

    // }
    // for(auto it = studentNames.cbegin(); it != studentNames.cend(); it++ ){
    //     cout << *it << " ";
    // }

    // for(auto it = studentNames.crbegin(); it != studentNames.crend(); it++ ){
    //     cout << *it << " ";
    // }

    // cout << "size: " << studentNames.size() << endl;
    // cout << "max size: " << studentNames.max_size() << endl;
    // cout << "capacity: " << studentNames.capacity() << endl;

    // studentNames.resize(2);
    // for(string studentName : studentNames){
    //     cout << studentName << " ";
    // }

    // cout << endl;

    // cout << studentNames.empty() << endl;

    // studentNames.pop_back();

    // for(int i = 0; i < 3; i++){
    //     cout << studentNames[i] << " ";
    // }
    // studentNames.shrink_to_fit();
    // cout << "size: " << studentNames.size() << endl;
    // cout << "capacity: " << studentNames.capacity() << endl;

    studentNames.reserve(100);
    cout << "size: " << studentNames.size() << endl;
    cout << "capacity: " << studentNames.capacity() << endl;



    




    
    return 0;
}

