#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

// Structure to store team data
struct Team {
    int id;
    int solvedProblems = 0;
    int penalty = 0;
};

// Function to sort teams based on the criteria
bool compare(const Team &a, const Team &b) {
    if (a.solvedProblems != b.solvedProblems)
        return a.solvedProblems > b.solvedProblems;
    if (a.penalty != b.penalty)
        return a.penalty < b.penalty;
    return a.id < b.id;
}

int main() {
    int N, M, S;
    cin >> N >> M >> S;

    vector<Team> teams(N + 1);
    for (int i = 1; i <= N; ++i) teams[i].id = i;

    // Map to track penalty for each team's problem
    map<pair<int, int>, pair<int, int>> problemData; // {team, problem} -> {wrong attempts, accepted time}

    for (int i = 0; i < S; ++i) {
        int teamId, problemId, submissionType, submissionTime = 0;
        cin >> teamId >> problemId >> submissionType;
        if (submissionType == 1) cin >> submissionTime;

        if (problemData[{teamId, problemId}].second != 0) {
            // Problem already accepted, ignore further submissions
            continue;
        }

        if (submissionType == 1) {
            // "Accepted" submission
            int wrongAttempts = problemData[{teamId, problemId}].first;
            teams[teamId].solvedProblems++;
            teams[teamId].penalty += submissionTime + wrongAttempts * 20;
            problemData[{teamId, problemId}].second = submissionTime;
        } else {
            // "Wrong Answer" submission
            problemData[{teamId, problemId}].first++;
        }
    }

    // Sort teams based on criteria
    sort(teams.begin() + 1, teams.end(), compare);

    // Print output
    cout << "Final Standings:\n";
    for (int i = 1; i <= N; ++i) {
        cout << "Team " << teams[i].id << ": " << teams[i].solvedProblems;
        if (teams[i].solvedProblems == 1)
            cout << " Problem ";
        else
            cout << " Problems ";
        cout << teams[i].penalty << " Minutes\n";
    }

    return 0;
}