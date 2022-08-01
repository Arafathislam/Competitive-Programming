#include<iostream>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 1)
        {
            cout << s << endl;
            continue;
        }
        int i;
        for ( i = 0; i < s.size() - 1; i++)
        {
            if ( s[i]> s[i + 1] )
            {
                break;
            }
        }
        s.erase(i,1);

        cout<<stoi(s)<<endl;
    }

    return 0;
}


