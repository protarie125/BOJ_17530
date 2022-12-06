#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	int s;
	cin >> s;
	for (auto i = 1; i < n; ++i) {
		int x;
		cin >> x;
		if (s < x) {
			cout << "N";
			return 0;
		}
	}

	cout << "S";

	return 0;
}