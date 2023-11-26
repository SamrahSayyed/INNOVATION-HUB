#include<iostream>
#include<stdlib.h>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s;
string t;
class Solution {
    
public: 
   bool isAnagram(string s, string t) 
{
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t; 
    }
    };
return 0;

};
