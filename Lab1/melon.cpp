#include <iostream>
using namespace std;

int main(){
    int weight;
    cin >> weight;

    if(weight < 4 || weight > 100){
       cout << "NO";
    }
    else if(weight %2 == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
