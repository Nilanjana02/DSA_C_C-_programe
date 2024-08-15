#include <stdio.h>
void solve() {
    int n = 24;
    int l = 0, r = 100, ans = n;
    while(l <= r) {
        int mid = (l + r) / 2;
        //printf("Mid = %d\n",mid);
        if(mid * mid <= n) {
            ans = mid;
            //printf(" ANS : %d\n",ans);
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    printf("%d", ans);
}
int main() {
	int k = (0+3)/2;
//	printf("The = %d",k);
    solve();
	return 0;
}






