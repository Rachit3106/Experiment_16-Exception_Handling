/*
Name:- Rachit Deshpande
PRN:- 24070123035
Batch:- A2
*/
#include <iostream>
using namespace std;

int main(){
    float n1, n2, ans;
    cout << "Enter value of 2 numbers:" <<endl;
    cin >> n1 >> n2;
    try{
        if(n2==0){
            throw n2;
        }
        else{
            ans=n1/n2;
            cout << "Answer is " << ans;
        }
    }
    catch(float n){
        cout << "ERROR !!!----> Division by " << n << endl;
    }
}
/*
Output:-
1)Enter value of 2 numbers:
2 4
Answer is 0.5
2)Enter value of 2 numbers:
5 0
ERROR !!!----> Division by 0
*/