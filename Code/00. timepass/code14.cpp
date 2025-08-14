#include <vector>
#include <string>
#include <queue>
#include <iostream>
using namespace std;

int solution(vector<string> &plan) {
    if (plan.empty()) return 0;
    
    int rows = plan.size();
    int cols = plan[0].size();
    
    // Create visited array to track which cells have been processed
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    
    // Directions for 4-directional movement (up, down, left, right)
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    
    int robotRuns = 0;
    
    // Find all dirty fields and count connected components
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // If we find an unvisited dirty field, start a new robot run
            if (plan[i][j] == '*' && !visited[i][j]) {
                robotRuns++;
                
                // BFS to mark all connected floor areas (both clean and dirty)
                queue<pair<int, int> > q;
                q.push(make_pair(i, j));
                visited[i][j] = true;
                
                while (!q.empty()) {
                    pair<int, int> current = q.front();
                    int x = current.first;
                    int y = current.second;
                    q.pop();
                    
                    // Check all 4 directions
                    for (int dir = 0; dir < 4; dir++) {
                        int nx = x + dx[dir];
                        int ny = y + dy[dir];
                        
                        // Check bounds
                        if (nx >= 0 && nx < rows && ny >= 0 && ny < cols) {
                            // If it's a floor area (clean or dirty) and not visited
                            if ((plan[nx][ny] == '.' || plan[nx][ny] == '*') && !visited[nx][ny]) {
                                visited[nx][ny] = true;
                                q.push(make_pair(nx, ny));
                            }
                        }
                    }
                }
            }
        }
    }
    
    return robotRuns;
}

int main() {
    // Example 1: From the image - should return 3
    cout << "Example 1:" << endl;
    vector<string> plan1 = {
        ".*#.*",
        ".*#.*",
        "#####",
        ".*#.*",
        "....#"
    };
    cout << "Expected: 3, Got: " << solution(plan1) << endl << endl;
    
    // Example 2: From the image - should return 2  
    cout << "Example 2:" << endl;
    vector<string> plan2 = {
        "*#..",
        "#.*.",
        ".#*.",
        "...*"
    };
    cout << "Expected: 2, Got: " << solution(plan2) << endl << endl;
    
    // Example 3: From the image - should return 5
    cout << "Example 3:" << endl;
    vector<string> plan3 = {
        "*#*#.",
        "#####", 
        "*###*",
        "#####",
        "*####"
    };
    
    // Let's print the grid to verify
    cout << "Grid visualization:" << endl;
    for(int i = 0; i < plan3.size(); i++) {
        cout << plan3[i] << endl;
    }
    cout << "Expected: 5, Got: " << solution(plan3) << endl << endl;
    
    // Additional test case - simple connected area
    cout << "Example 4 (Simple connected):" << endl;
    vector<string> plan4 = {
        "..*..",
        ".***.",
        ".*..."
    };
    cout << "Expected: 1, Got: " << solution(plan4) << endl << endl;
    
    // Additional test case - no dirty fields
    cout << "Example 5 (No dirty fields):" << endl;
    vector<string> plan5 = {
        ".....",
        "..#..",
        "....."
    };
    cout << "Expected: 0, Got: " << solution(plan5) << endl;
    
    return 0;
}