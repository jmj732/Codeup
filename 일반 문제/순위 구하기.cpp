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

    score_index.reserve(scores.size());
for (int i = 0; i < scores.size(); i++) {
        score_index.emplace_back(scores[i], i);
    }
    vector<pair<int,int>> rankings(scores.size());

    std::sort(score_index.begin(), score_index.end(), [](pair<int, int> &a, pair<int, int> &b) {
        return a.first > b.first;
    });

    int rank_s = 1;
    rankings[score_index[0].second].second = rank_s;
    rankings[score_index[0].second].first = score_index[0].first;
    for (int i = 0; i < score_index.size(); i++) {
        if(score_index[i].first == score_index[i - 1].first) {
            rankings[score_index[i].second].second = rank_s;
        }
        else {
            rank_s = i + 1;
            rankings[score_index[i].second].second = rank_s;
        }
        rankings[score_index[i].second].first = score_index[i].first;
    }

   for (int i = 0; i < rankings.size(); i++) {
       cout << rankings[i].first << " " << rankings[i].second << endl;
   }

    return 0;
}
