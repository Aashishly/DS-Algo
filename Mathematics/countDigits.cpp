#include <iostream>
using namespace std;


int countDigits(long long int digit){
    int count = 0;

    if(digit == 0)
    return 1;

    while(digit != 0){
        digit = digit/10;
        ++count;
    }

    return count;

}

int main(void){

    long long int numb = 345;

    cout << "Number of digits : " << countDigits(numb) << endl;
  

    return 0;

}
