#include <iostream>
using namespace std;

int main() {
    string menu[] = {"fruits", "chicken", "fish", "cake"};
    try {
        int x;
        cin >> x;
        //your code goes here
        if(x>=0 and x<4){
            cout << menu[x];
        }else{
            throw 404;
        }
        
    }
    catch(...) {
        //and here
        cout<<"404 - not found";
        
    }
}
