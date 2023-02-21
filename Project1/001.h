#pragma once
#include <string>
#include <ctime>
#include <fstream>	
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>

void test01() {
	int n;
	cout << "Please Enter Number N:  ";
	cin >> n;
	vector<int> aTime;
	aTime.push_back(n);
	while (n != 1) {
		cout << n << " ";
		if (n % 2 == 1) n = 3 * n + 1;
		else n /= 2;
		aTime.push_back(n);
	}
	cout << n << endl;
	for (auto x : aTime) cout << x << " ";
	cout << "\n¦r¦êÁ`ªø¬° " << aTime.size() << endl;
}
