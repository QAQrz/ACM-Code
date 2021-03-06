#include <cstdio>
using namespace std;
int d[7][25] = {
	{0, 1, 2, 3,
	 4, 5, 6, 7,
	 8, 9, 10, 11,
	 12, 13, 14, 15,
	 16, 17, 18, 19,
	 20, 21, 22, 23},
	{4, 1, 6, 3,
	 8, 5, 10, 7,
	 12, 9, 14, 11,
	 0, 13, 2, 15,
	 17, 19, 16, 18,
	 20, 21, 22, 23},
	{12, 1, 14, 3,
	 0, 5, 2, 7,
	 4, 9, 6, 11,
	 8, 13, 10, 15,
	 18, 16, 19, 17,
	 20, 21, 22, 23},
	{20, 21, 2, 3,
	 4, 5, 6, 7,
	 8, 9, 17, 16,
	 14, 12, 15, 13,
	 0, 1, 18, 19,
	 11, 10, 22, 23},
	{16, 17, 2, 3,
	 4, 5, 6, 7,
	 8, 9, 21, 20,
	 13, 15, 12, 14,
	 11, 10, 18, 19,
	 0, 1, 22, 23},
	{1, 3, 0, 2,
	 17, 19, 6, 7,
	 8, 9, 10, 11,
	 12, 13, 20, 22,
	 16, 15, 18, 14,
	 5, 21, 4, 23},
	{2, 0, 3, 1,
	 22, 20, 6, 7,
	 8, 9, 10, 11,
	 12, 13, 19, 17,
	 16, 4, 18, 5,
	 14, 21, 15, 23},
};
int t, a[25], b[25];
void Move(int type) {
	for(int i=0; i<24; ++i) {
		b[i] = a[d[type][i]];
	}
}
bool Check() {
	for(int i=0; i<6; ++i) {
		for(int j=0; j<4; ++j) {
			if(b[i*4+j] != b[i*4])
				return false;
		}
	}
	return true;
}
int main(int argc, char const *argv[]) {
	scanf("%d", &t);
	while(t--) {
		for(int i=0; i<24; ++i) {
			scanf("%d", &a[i]);
		}
		bool ok = false;
		for(int i=0; i<7 && !ok; ++i) {
			Move(i);
			if(Check()) ok = true;
		}
		if(ok) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}