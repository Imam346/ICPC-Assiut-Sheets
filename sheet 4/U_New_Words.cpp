#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int e_cnt = 0, g_cnt = 0, y_cnt = 0, p_cnt = 0, t_cnt = 0;

    for (char c : s)
    {
        if (c == 'E' || c == 'e')
        {
            e_cnt++;
        } else if (c == 'G' || c == 'g')
        {
            g_cnt++;
        } else if (c == 'Y' || c == 'y')
        {
            y_cnt++;
        } else if (c == 'P' || c == 'p')
        {
            p_cnt++;
        } else if (c == 'T' || c == 't')
        {
            t_cnt++;
        }
    }

    int result = min({e_cnt, g_cnt, y_cnt, p_cnt, t_cnt});
    cout << result << endl;

    return 0;
}
