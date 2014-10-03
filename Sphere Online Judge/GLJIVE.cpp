#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
	int a[10], i, k, diff, res, tot;
	for(i = 0; i < 10; i++) scanf("%d", &a[i]);
	for(i = 1; i < 10; i++) a[i] += a[i-1]; // a[] now has the cumulative data
	diff = 100 - a[0], res = a[0];
	for(i = 1; i < 10; i++) {
		k = abs(100 - a[i]);
		if(k < diff || (k==diff && a[i] > res)) { // diff bara nahi hai toh kya hua , I(mai) bara hoga ab
			diff = k;
			res = a[i];
		}
	}
	printf("%d\n", res);
	return 0;
}
