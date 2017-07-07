#include<iostream>
#include<string>
#include<unordered_map>
#include<utility>
#include<vector>
#include<stack>
#include<queue>
#define MAX 1024

using namespace std;

int heap[MAX],hsize=0;

void downAdjust(int low, int high) {
	int j = low * 2;
	if (j <= high) {
		if (j + 1 <= high && heap[j] < heap[j + 1]) {
				j = j + 1;
		}
		if (heap[j] > heap[low])
		{
			heap[j] ^= heap[low] ^= heap[j] ^= heap[low];
			downAdjust(j, high);
		}
	}
	return;
}

void upAdjust(int low) {
	int j = low / 2 ;
	if (j >= 1) {
		if (heap[j] < heap[low])
		{
			heap[j] ^= heap[low] ^= heap[j] ^= heap[low];
			upAdjust(j);
		}
	}
	return;
}

void createHeadp() {
	int n = hsize;
	for (int i = n / 2; i >= 1; i--) {
		downAdjust(i, n);
	}

}

void insert(int item) {
	heap[++hsize] = item;
	upAdjust(hsize);
}

void del(int pos) {
	heap[pos] ^= heap[hsize] ^= heap[pos] ^= heap[hsize];
	hsize--;
	downAdjust(pos, hsize);
}



int main() {

	int n = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> heap[i];
		hsize++;
	}
	createHeadp();



	for (int i = 1; i <= hsize; i++) {
		cout << heap[i] << " ";

	}

	cout << "insert 99" << endl;
	insert(99);
	for (int i = 1; i <= hsize; i++) {
		cout << heap[i] << " ";

	}
	cout << "del position 1" << endl;
	del(1);
	for (int i = 1; i <= hsize; i++) {
		cout << heap[i] << " ";

	}

	return 0;
}
