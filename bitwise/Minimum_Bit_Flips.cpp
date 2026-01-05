#include <iostream>

using namespace std;

int minBitFlips(int start, int goal) 
{

        int number = start^goal;
        int cnt=0;
        while(number){
            number = number & (number-1);
            cnt++;
        }
        return cnt;
        
    };
int main()
{
int start=10;
int goal=7;

cout<<minBitFlips(10,7);
}