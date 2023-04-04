/*亲爱的上帝，我求你给我力量来赢得这场战斗。*/
#include <bits/stdc++.h>
 
#define rep(i,n) for(int i=0;i<n;++i)
#define repn(i,n) for(int i=1;i<=n;++i)
#define rng(i, a, b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vl vector<long long>
#define pi pair<int, int> 
#define all(x) (x).begin(), (x).end()
#define sz(x) (x).size()
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mpr make_pair
 
using namespace std;
 
int t, n;

struct MinHeap {

	char data;
	int freq;

	MinHeap* left; MinHeap* right;

	MinHeap(char data, int freq) {
		left = right = nullptr;
		this->data = data;
		this->freq = freq;
	}
};

struct comparator {
	bool operator()(MinHeap* l, MinHeap* r) {
		return (l-> freq > r->freq);
	}
};

void printHuff(struct MinHeap* root, string str) {
	if(!root) return;

	if(root-> data != '#') {
		cout << root -> data << ": " << str << '\n';
	}

	printHuff(root->left, str + "0");
	printHuff(root->right, str + "1");


}


void HUFF(char a[], int fq[], int n) {
	struct MinHeap* left, *right, *top;
	priority_queue<MinHeap*, vector<MinHeap*>, comparator> pq;

	rep(i, n) {
		pq.push(new MinHeap(a[i], fq[i]));
	}

	while(pq.size() != 1) {

		left = pq.top();
		pq.pop();

		right = pq.top();
		pq.pop();

		top = new MinHeap('#', left->freq + right-> freq);
		top->left = left;
		top->right = right;
		pq.push(top);


	}

	printHuff(pq.top(), "");

}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    	int freq[] = {5, 9, 12, 13, 16, 45};
 
    	int size = sizeof(arr) / sizeof(arr[0]);
 
    	HUFF(arr, freq, size);

	return 0;

}
