#include<cstdio>
#include<algorithm>
using namespace std;
int arr[10] = { 2,8,4,11,4,95,8,4,7,45 };
void merge(int lo, int mid, int hi) {
}

void mergeSort(int lo, int hi) {
	if (hi - lo < 2) return;
	int mid = (hi + lo) >> 1;
	mergeSort(lo, mid);
	mergeSort(mid, lo);

	sort(arr + lo, arr + hi+1);
}

int main() {
	mergeSort(0, 10);
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}