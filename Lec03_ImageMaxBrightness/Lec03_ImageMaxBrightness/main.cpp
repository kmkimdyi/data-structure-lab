#include <iostream>

using namespace std;


///  2���� �迭�� �ִ��� ���ϴ� �Լ�
int getMaxPixelValue(const int image[][5], int rows, int cols)
{
    int maxValue = image[0][0];     // ù ��° ȭ�Ҹ� �ʱⰪ���� ����

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


/// ���� �Լ�
int main()
{
    // ����: 5x5 �̹��� (0~255 ��� ��)
    int image[5][5] = {
        { 12,  55,  33, 128, 200 },
        { 77,  88, 255,  90,  10 },
        { 23,  11,  67,  54,  99 },
        { 45, 100,  76,  12, 150 },
        { 30,  25, 180,  64,  89 }
    };

    int rows = 5;
    int cols = 5;

    // �Լ� ȣ��
    int maxPixel = getMaxPixelValue(image, rows, cols);

    // ��� ���
    cout << "�̹����� �ִ� ȭ�� ���: " << maxPixel << endl;

    return 0;
}




