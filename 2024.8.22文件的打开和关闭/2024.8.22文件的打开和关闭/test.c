#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE* pf = fopen("test.txt", "r"); // ����Ϊtext.txt���ļ�����ֻ���ķ�ʽ���ļ������ڻ����
    if (pf == NULL) { // ����ļ������ڣ��᷵��һ����ָ��
        perror("fopen");
        return 1;
    }//���ļ�

    fclose(pf); // �ر��ļ�
    pf = NULL; // ��pf����Ϊ��ָ��
    return 0; // �����˳�����
}