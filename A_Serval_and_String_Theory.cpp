#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;
    
    // Create a copy of s and its reverse
    string rev = s;
    reverse(rev.begin(), rev.end());
    
    // If s is already universal
    if (s < rev) {
        cout << "YES\n";
        return;
    }
    
    // If s is a palindrome with all identical characters
    bool all_same = true;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[0]) {
            all_same = false;
            break;
        }
    }
    
    if (s == rev && all_same) {
        cout << "NO\n";
        return;
    }
    
    // For palindromes with different characters
    if (s == rev && !all_same) {
        // Check if any swap can make it universal with k >= 1
        if (k >= 1) {
            for (int i = 0; i < n; i++) {
                for (int j = i+1; j < n; j++) {
                    if (s[i] != s[j]) {
                        // Try swapping these characters
                        string temp = s;
                        swap(temp[i], temp[j]);
                        
                        string temp_rev = temp;
                        reverse(temp_rev.begin(), temp_rev.end());
                        
                        if (temp < temp_rev) {
                            cout << "YES\n";
                            return;
                        }
                    }
                }
            }
            cout << "NO\n";
        } else {
            cout << "NO\n";
        }
        return;
    }
    
    // For non-palindromes
    int min_swaps = 0;
    for (int i = 0; i < n/2; i++) {
        if (s[i] > s[n-1-i]) {
            min_swaps++;
        } else if (s[i] < s[n-1-i]) {
            cout << "YES\n";
            return;
        }
    }
    
    cout << (min_swaps <= k ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}