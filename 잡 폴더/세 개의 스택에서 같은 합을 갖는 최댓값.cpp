#include <iostream>
#include <vector>

void setSts(std::vector<int>& stsum, const std::vector<int>& st) {
	for (int i = 0; i < st.size(); i++) {
		int result = 0;
		for (int j = 0; j <= i; j++)
			result += st[j];
		stsum.push_back(result);
	}
}

int maxSum(int a, int b, int c) {
	return (a > b && a > c) ? a : (b > a && b > c) ? b : c;
}

int main() {
	std::vector<int> st1 = { 1, 1, 1, 2, 3},  st2 = { 2, 3, 4 }, st3 = { 1, 4, 5, 2 };
	std::vector<int> st1s, st2s, st3s;
	setSts(st1s, st1), setSts(st2s, st2), setSts(st3s, st3);
	
	if (st1.size() == 0 or st2.size() == 0 or st3.size() == 0) {
		std::cout << 0;
		return 0;
	}

	while (st1s.back() != st2s.back() || st2s.back() != st3s.back()) {
		int sb1 = st1s.back(), sb2 = st2s.back(), sb3 = st3s.back();
		int mxsum = maxSum(sb1, sb2, sb3);
		if (mxsum < sb1) {
			st1.pop_back();
			continue;
		}
		else if (mxsum < sb2) {
			st2.pop_back();
			continue;
		}
		else if (mxsum < sb3) {
			st3.pop_back();
			continue;
		}
		else {
			if (sb1 == mxsum)
				st1s.pop_back();
			else if (sb2 == mxsum)
				st2s.pop_back();
			else 
				st3s.pop_back();
		}
	}
	std::cout << st1s.back() << " " << st2s.back() << " " << st3s.back();
	return 0;
}