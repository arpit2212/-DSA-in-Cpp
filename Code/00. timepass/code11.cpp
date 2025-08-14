#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

vector<long> numberOfWays(vector<string> S_List) {
    vector<long> result;
    
    for (const string& s : S_List) {
        long ways = 0;
        int n = s.length();
        
        // Precompute unique count from left for each position
        vector<int> leftUnique(n);
        set<char> leftSet;
        for (int i = 0; i < n; i++) {
            leftSet.insert(s[i]);
            leftUnique[i] = leftSet.size();
        }
        
        // Precompute unique count from right for each position
        vector<int> rightUnique(n);
        set<char> rightSet;
        for (int i = n - 1; i >= 0; i--) {
            rightSet.insert(s[i]);
            rightUnique[i] = rightSet.size();
        }
        
        // Check all possible split positions
        for (int i = 1; i < n; i++) {
            // Left part: 0 to i-1, Right part: i to n-1
            if (leftUnique[i-1] == rightUnique[i]) {
                ways++;
            }
        }
        
        result.push_back(ways);
    }
    
    return result;
}

int main() {
    string S_List_count_temp;
    getline(cin, S_List_count_temp);

    int S_List_count = stoi(ltrim(rtrim(S_List_count_temp)));

    vector<string> S_List(S_List_count);

    for (int i = 0; i < S_List_count; i++) {
        string S_List_item;
        getline(cin, S_List_item);

        S_List[i] = S_List_item;
    }

    vector<long> result = numberOfWays(S_List);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);
    
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );
    
    return s;
}

string rtrim(const string &str) {
    string s(str);
    
    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );
    
    return s;
}