#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int optimalKnapSack(vector<int> weight, vector<int> value, int W, int n, vector<vector<int>> &p) {
    for (int i=0; i< W+1; i++) {
        p[0][i] = 0;
    }
    for (int j=0; j< n+1; j++) {
        p[j][0] = 0;
    }
    for (int i=1; i<n+1; i++) {
        for (int j=1; j<W+1; j++) {
            if (weight[i-1] <= j) {
                p[i][j] = max(value[i-1]+p[i-1][j-weight[i-1]], p[i-1][j]);
            }
            else {
                p[i][j] = p[i-1][j];
            }
        }
    }
    for (vector<int> i: p) {
        for (int j: i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return p[n][W];
}

int main() {
    vector<int> value{ 1, 3, 4, 5 };
    vector<int> weight{ 1, 4, 5, 7 };
    int W = 7;
    vector<vector<int>> p(4+1, vector<int>(W+1, INT_MAX));
    
    cout<<optimalKnapSack(weight, value, W, 4, p)<<endl;
    return 0;
}
