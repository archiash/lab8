/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

#include <iostream>
using namespace std;

int main(){
    int age, height, bounty;
    bool checkHeight = false;
    cout << "Enter your age: ";
    cin >> age;
    if(age > 60){
        cout << "Your character = Brook";
        return 0;
    }
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height;
    
        if(height < 100){
            cout << "Your character = Chopper";
            return 0;
        }

        if(height < 180){
            cout << "Your character = Usopp";
            return 0;
        }
        checkHeight = true;
    }
    
    cout << "Enter your bounty: ";
    cin >> bounty;


    if(!checkHeight && bounty > 500000000){
        cout << "Your character = Jinbe";
        return 0;
    }else if(!checkHeight){
        cout << "Your character = Franky";
        return 0;
    }

    if(bounty > 1100000000){
        cout << "Your character = Zoro";
        return 0;
    }else{
        cout << "Your character = Sanji";
        return 0;
    }
}