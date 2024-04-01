#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end()); // Remove whitespace

    string words[] = {"", "", "", "the", "", "buffy", "slayer", "vampire"};

    if (s.length() == 4)
    {
        cout << "none" << endl;
    }
    else
    {
        string target = words[s.length()];
        string ans = "";

        for (size_t i = 0; i < s.length(); ++i)
        {
            int a = s[i] - 'a';
            int b = target[i] - 'a';
            ans += ((a + b) % 26) + 'a';
        }

        cout << ans << endl;
    }

    return 0;
}
