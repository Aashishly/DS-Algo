#include <iostream>
using namespace std;

// Approach Number 1
int countDigits_1(long long int digit){
    int count = 0;

    if(digit == 0)
    return 1;

    while(digit != 0){
        digit = digit/10;
        ++count;
    }

    return count;

}

// Approach Number 2
int countDigits_2(long long int digit){
    if(digit/10 == 0)
    return 1;
    return 1 + countDigits_2(digit/10);
}

int main(void){

    long long int numb = 345;

    cout << "Number of digits : " << countDigits_1(numb) << endl;
    cout << "Number of digits : " << countDigits_2(numb) << endl;

    return 0;

}
