#include <stdio.h>

int main()
{
    // ��ʼ��
    int price = 0;
    int bill = 0;

    // ��ȡ����Ʊ��
    printf("�������");
    scanf("%d", &price);
    printf("������Ʊ�棺");
    scanf("%d", &bill);
    
    // ��������
    if (bill > price) {
        printf("Ӧ��������%d\n", bill - price);
    }

    return 0;
}