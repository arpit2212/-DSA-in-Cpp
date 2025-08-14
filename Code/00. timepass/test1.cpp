#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMaximumAmount' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY quantity
 *  2. INTEGER m
 */

 long getMaximumAmount(vector<int> quantity, int m) {
    int n = quantity.size();
    
    // Create a priority queue (max heap) to efficiently find the item with maximum quantity
    priority_queue<int> pq;
    for (int q : quantity) {
        pq.push(q);
    }
    
    long totalRevenue = 0;
    
    // Process m customers
    while (m > 0 && !pq.empty()) {
        // Get the item with the highest remaining quantity
        int current = pq.top();
        pq.pop();
        
        // Add the current quantity to total revenue
        totalRevenue += current;
        
        // Decrease the quantity by 1 and push back if still available
        if (current > 1) {
            pq.push(current - 1);
        }
        
        m--;
    }
    
    return totalRevenue;
}
int main() {
    // Modified to use cout instead of writing to a file
    
    string quantity_count_temp;
    getline(cin, quantity_count_temp);
    
    int quantity_count = stoi(ltrim(rtrim(quantity_count_temp)));
    
    vector<int> quantity(quantity_count);
    
    for (int i = 0; i < quantity_count; i++) {
        string quantity_item_temp;
        getline(cin, quantity_item_temp);
        
        int quantity_item = stoi(ltrim(rtrim(quantity_item_temp)));
        
        quantity[i] = quantity_item;
    }
    
    string m_temp;
    getline(cin, m_temp);
    
    int m = stoi(ltrim(rtrim(m_temp)));
    
    long result = getMaximumAmount(quantity, m);
    
    cout << result << "\n";
    
    return 0;
}

string ltrim(const string &str) {
    string s(str);
    
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), [](int c) {
            return !isspace(c);
        })
    );
    
    return s;
}

string rtrim(const string &str) {
    string s(str);
    
    s.erase(
        find_if(s.rbegin(), s.rend(), [](int c) {
            return !isspace(c);
        }).base(),
        s.end()
    );
    
    return s;
}