#include <iostream>

using namespace std;

/// �ִ��� ��ȯ�ϴ� �Լ� ����
int getMaxValue(const int arr[], int size)
{
    if (size <= 0) 
    {
        cerr << "�迭 ũ�Ⱑ 0 �����Դϴ�." << endl;
        return 0;           // ���� ó����
    }

    int maxValue = arr[0];  // ù ��° ���Ҹ� �ʱ� �ִ����� ����

    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > maxValue)
            maxValue = arr[i];
    }

    return maxValue;
}

/// ���� �Լ�
int main()
{
    // �׽�Ʈ�� �迭
    int data[] = { 12, 7, 23, 5, 19, 30, 15 };
    int size = sizeof(data) / sizeof(data[0]);

    // �Լ� ȣ��
    int maxValue = getMaxValue(data, size);

    // ��� ���
    cout << "�迭�� �ִ���: " << maxValue << endl;

    return 0;
}




