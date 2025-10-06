#include <iostream>

using namespace std;


///  2차원 배열의 최댓값을 구하는 함수
int getMaxPixelValue(const int image[][5], int rows, int cols)
{
    int maxValue = image[0][0];     // 첫 번째 화소를 초기값으로 설정

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (image[i][j] > maxValue)
                maxValue = image[i][j];
        }
    }
    return maxValue;
}


/// 메인 함수
int main()
{
    // 예제: 5x5 이미지 (0~255 밝기 값)
    int image[5][5] = {
        { 12,  55,  33, 128, 200 },
        { 77,  88, 255,  90,  10 },
        { 23,  11,  67,  54,  99 },
        { 45, 100,  76,  12, 150 },
        { 30,  25, 180,  64,  89 }
    };

    int rows = 5;
    int cols = 5;

    // 함수 호출
    int maxPixel = getMaxPixelValue(image, rows, cols);

    // 결과 출력
    cout << "이미지의 최대 화소 밝기: " << maxPixel << endl;

    return 0;
}




