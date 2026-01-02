#include <string>
#include <iostream>
#include <array>

using namespace std;

bool solver(string s,string t )
{
    for (char &c : s) c = tolower(c);
    for (char &c : t) c = tolower(c);

    if(s.length() != t.length())return false;
    int count[26] = {0};

    for (auto i:s)
    {
        int a=i-'a';        
        count[a]++;
    }
    for(auto i:t)
    {
        int a=i-'a';
        count[a]--;
    }
    for( int i: count)
    {
        if(i!=0)
        {
            return false;
        }
    }
    return true;
};
int main()
{
string s="anagram";
string t="nagaram";


cout << solver(s, t);
}