#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n;

    cin.ignore();
    string word[n];

    for (int i = 0; i < n; ++i) {

        getline(cin, word[i]);
                
    }

    for(int i = 0; i < n; i++) {


        int length = word[i].length();
        if(length > 10){
            cout<< word[i][0] <<length - 2 << word[i][word[i].size() - 1]<<endl;
        }else{
            cout << word[i] << endl;
        }
        
    }




    return 0;
}