#include <iostream>

using namespace std;

int minBitFlips(int start, int goal) 
{

        int m=start^goal;
        int count=0;
        while (m>0)
                {
                   if((m&1)==1)count++;     
                        m=m>>1;
                }
        return count;
        
};
int main()
{
int start=10;
int goal=7;

cout<<minBitFlips(10,7);
}
