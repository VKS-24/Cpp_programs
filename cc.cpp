#include <iostream>
#include <set>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;
        set<pair<int, int>> vis;
        vis.insert({0, 0});

        if (S[0] == '1')
        { // left
            for (int x = -1; x >= -10; --x)
            {
                vis.insert({x, 0});
            }
        }
        if (S[1] == '1')
        { // right
            for (int x = 1; x <= 10; ++x)
            {
                vis.insert({x, 0});
            }
        }
        if (S[2] == '1')
        { // up
            for (int y = 1; y <= 10; ++y)
            {
                vis.insert({0, y});
            }
        }
        if (S[3] == '1')
        { // down
            for (int y = -1; y >= -10; --y)
            {
                vis.insert({0, y});
            }
        }
        if (S[3] == '1' && S[0] == '1')
        { // down-left
            for (int y = -1; y >= -10; --y)
            {
                for (int x = -1; x >= -10; --x)
                {
                    vis.insert({x, y});
                }
            }
        }
        if (S[3] == '1' && S[1] == '1')
        { // down-right
            for (int y = -1; y >= -10; --y)
            {
                for (int x = 1; x <= 10; ++x)
                {
                    vis.insert({x, y});
                }
            }
        }
        if (S[2] == '1' && S[0] == '1')
        { // up-left
            for (int y = 1; y <= 10; ++y)
            {
                for (int x = -1; x >= -10; --x)
                {
                    vis.insert({x, y});
                }
            }
        }
        if (S[2] == '1' && S[1] == '1')
        { // up-right
            for (int y = 1; y <= 10; ++y)
            {
                for (int x = 1; x <= 10; ++x)
                {
                    vis.insert({x, y});
                }
            }
        }

        cout << vis.size() << endl;
    }
    return 0;
}