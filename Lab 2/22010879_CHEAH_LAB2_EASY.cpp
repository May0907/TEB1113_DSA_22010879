#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sortMatrix(vector<vector<int>>& mat) {
    vector<int> temp;
    for (auto& row : mat) {
        for (int x : row) {
            temp.push_back(x);
        }
    }
    sort(temp.begin(), temp.end());
    int k = 0;
    for (auto& row : mat) {
        for (int& x : row) {
            x = temp[k++];
        }
    }
}
int main() {
    vector<vector<int>> mat{ {5, 9, 2}, {7, 3, 8}, {1, 4, 6} };
    sortMatrix(mat);
    for (auto& row : mat) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}