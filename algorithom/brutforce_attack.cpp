#include<iostream>
#include<string>

using namespace std;

int main(){
    string password = "e1a";

    string charlist[] = {"a", "b", "c", "d", "e", "0" ,"1", "@"};
    int length = sizeof(charlist)/ sizeof(charlist[0]);

    for(int i = 0 ; i < length; i++ ){
         for(int j = 0 ; j < length; j++ ){
            for(int k = 0 ; k < length; k++ ){
                string possible_password = charlist[i] + charlist[j] + charlist[k];
                if(password == possible_password){
                    cout << "Peye gesi: " << endl;
                    cout << "the password is: " << possible_password << endl;
                }
            }
         }
    }

    return 0;
}

