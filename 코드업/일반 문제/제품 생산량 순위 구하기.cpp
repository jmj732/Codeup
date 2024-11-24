#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    for (int i = 0; i < n; i++)
        cin >> scores[i];

    vector<pair<int, int>> score_index;

    for (int i = 0; i < scores.size(); i++) {
        score_index.push_back({scores[i], i});
    }
    vector<int> rankings(scores.size());

    sort(score_index.begin(), score_index.end(), [](pair<int, int> &a, pair<int, int> &b) {
        return a.first > b.first;
    });
    int rank = 1;
    rankings[score_index[0].second] = rank;
    for (int i = 0; i < score_index.size(); i++) {
        if(score_index[i].first == score_index[i - 1].first) {
            rankings[score_index[i].second] = rank;
        }
        else {
            rank = i + 1;
            rankings[score_index[i].second] = rank;
        }
    }

    for (int rank : rankings) {
        cout << rank << endl;
    }

    return 0;
}
