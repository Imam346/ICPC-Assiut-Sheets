#include<bits/stdc++.h>
using namespace std;

vector<int> generate_row(int row)
{
    int value = 1;
    vector<int> ansRow;
    ansRow.push_back(1);

    for(int col = 1; col < row; col++)
    {
        value = value * (row - col) / col;
        ansRow.push_back(value);
    }
    return ansRow;
}

int main() {
    int num;
    cin >> num;
    vector<vector<int>> ans;

    for(int i = 1; i <= num; i++)
    {
        ans.push_back(generate_row(i));
    }

    int n = ans.size();
    for(int i = 0; i < n; i++)
    {
        int m = ans[i].size();
        for(int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//hints-> https://www.youtube.com/watch?v=bR7mQgwQ_o8