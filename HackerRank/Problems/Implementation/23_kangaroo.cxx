#include <iostream>

using namespace std;

int main() {
	int x1, v1, x2, v2;
	cin >> x1 >> v1 >> x2 >> v2;

	if(v1 > v2 && !((x2-x1)%(v1-v2)))
		printf("YES");
	else
		printf("NO");

	return 0;
}
