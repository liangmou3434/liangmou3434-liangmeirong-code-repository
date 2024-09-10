#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE* pf = fopen("test.txt", "r"); // 打开名为text.txt的文件，用只读的方式，文件不存在会出错
    if (pf == NULL) { // 如果文件不存在，会返回一个空指针
        perror("fopen");
        return 1;
    }//读文件

    fclose(pf); // 关闭文件
    pf = NULL; // 把pf再置为空指针
    return 0; // 正常退出程序
}