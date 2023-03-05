#include<iostream>
#include<string.h>

using namespace std;

/*leet code question if you want to run on vs code then
 you need to declare element in string*/
//  // Remove occurences of a string
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos = s.find(part);
        while(pos != string::npos) {
            s.erase(pos, part.length());
            pos = s.find(part);
        }
        return s;
    }
};

int main(){



}