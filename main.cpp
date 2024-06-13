#include<iostream>
#include<vector>

using namespace std;

int N, M;
vector<int> vec;

void func(int cnt) {

	if (cnt == M) {
		for (auto m : vec)
			cout << m << " ";
		cout << endl;
		return;
	}
	
	for (int i = 1; i <= N; i++) {

		if (vec.empty() || (!vec.empty() && i > vec[vec.size() - 1])) {
			vec.push_back(i);
			func(++cnt);
			vec.erase(vec.end() - 1);
			cnt--;
		}
	}

}

int main() {
	cin >> N >> M;
	func(0);
}
