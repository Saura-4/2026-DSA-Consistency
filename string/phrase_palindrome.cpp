#include <iostream>
#include<string>
using namespace std;
bool solver(string s ) 
{
    int l=0;
    int r=s.length()-1;
    while(r>l)
    {
        while (r>l && !isalnum(s[l]))l++;
        while (r>l && !isalnum(s[r]))r--;

        if (tolower(s[l]) != tolower(s[r]))return false;
        
        r--;
        l++;

    }
    return true;
};
int main ()
{
    string s="A man, a plan, a canal: Panama";
    
    cout<<solver(s);
    return 0;

}