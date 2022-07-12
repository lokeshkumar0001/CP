#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int k;
    int n;

    cin >> n;
    cin >> k;

    vector<int> vec;
    int score;

    for (int i = 0; i < n; i++)
    {
        cin >> score;
        vec.push_back(score);
    }

    int kth_score = vec.at(k - 1);
    int count = 0;

    for (int i : vec)
    {
        if (i >= kth_score && i > 0)
            count++;
    }

    cout << count;
}