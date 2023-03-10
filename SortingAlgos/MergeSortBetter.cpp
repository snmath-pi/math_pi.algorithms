/*亲爱的上帝，我求你给我力量来赢得这场战斗。*/
#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    vector<int> a = {5, 4, 4, 3, 2, 1};

    for(auto x: a) cout << x << " ";
    cout << '\n';
    // good merge sort imp
    int N = (int) a.size();
    function<void(vector<int>&, const int, const int, const int)> merge = [&](vector<int> &a, const int left, const int mid, const int right) {
        auto const sz1 = mid - left + 1; // size of left subarray
        auto const sz2 = right - mid; // size of right subarray
        vector<int> b(sz1), c(sz2);
        for(int i=0; i<sz1; i++) {
            b[i] = a[i+ left]; // element starting from left till mid 
        }
        for(int i=0; i<sz2; i++) {
            c[i] = a[mid + 1 + i]; // element starting from mid + 1
        }
        int u = 0, v= 0, r = left;
        while(u < sz1 && v < sz2) {
            if(b[u] <= c[v]) {
                a[r++] = b[u++];
            } else a[r++] = c[v++];
        }
        while(u < sz1) {
            a[r++] = b[u++];
        }
        while(v < sz2) {
            a[r++] = c[v++];
        }
        b.clear(); c.clear();
    };
    function <void(vector<int>&, int, int)> mergesort = [&](vector<int>&a, int l, int r) {
        if(l < r) {
            int m = l + r >> 1;
            mergesort(a, l, m);
            mergesort(a, m+1, r);
            merge(a, l, m, r);
        }
    };
    mergesort(a, 0, N-1);
    for(auto x: a) cout << x << " ";

}
