#include <bits/stdc++.h>
using namespace std;

string OTPGenerator(int size){
    srand(time(0)); // Seed the random number generator
    string numbers = "0123456789";
    string result = "";
    while(size--){
        result += numbers[rand() % 10]; // Generate a random digit
    }

    return result;
}

int main(){
    int inputData = 4;
    cout << "OTP: " << OTPGenerator(inputData) << endl;
    return 0;
}
