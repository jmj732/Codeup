#include <iostream>
#include <algorithm>

// N x N 배열에서 k번째 원소를 찾는 함수
int findKthElement(int N, long long k) {
    long long left = 1, right = (long long)N * N; // 가능한 값의 범위
    int result = -1;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long count = 0;

        // mid 이하의 원소 개수 계산
        for (int i = 1; i <= N; i++) {
            count += std::min(mid / i, (long long)N); // 각 행에서 mid 이하 원소 개수
        }

        if (count >= k) {
            result = mid;
            right = mid - 1; // 더 작은 값 탐색
        } else {
            left = mid + 1; // 더 큰 값 탐색
        }
    }

    return result;
}

int main() {
    int N;
    long long k;
    std::cin >> N >> k;

    std::cout << findKthElement(N, k) << std::endl;

    return 0;
}
