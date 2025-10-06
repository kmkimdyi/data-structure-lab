#include <iostream>

using namespace std;

/// 최댓값을 반환하는 함수 정의
int getMaxValue(const int arr[], int size)
{
    if (size <= 0) 
    {
        cerr << "배열 크기가 0 이하입니다." << endl;
        return 0;           // 예외 처리용
    }

    int maxValue = arr[0];  // 첫 번째 원소를 초기 최댓값으로 설정

    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > maxValue)
            maxValue = arr[i];
    }

    return maxValue;
}

/// 메인 함수
int main()
{
    // 테스트용 배열
    int data[] = { 12, 7, 23, 5, 19, 30, 15 };
    int size = sizeof(data) / sizeof(data[0]);

    // 함수 호출
    int maxValue = getMaxValue(data, size);

    // 결과 출력
    cout << "배열의 최댓값은: " << maxValue << endl;

    return 0;
}




