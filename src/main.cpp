#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		int n;
		cin >> n;

		cout << "Pairs for " << n << ": ";

		for (int i = 1; 2 * i < n; ++i) {
			if (1 < i) {
				cout << ", ";
			}

			cout << i << ' ' << n - i;
		}
		cout << '\n';
	}

	return 0;
}