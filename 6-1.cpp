#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
  
// ����ѧ���ṹ��  
typedef struct {  
    char name[50];  
    char clas[10];  
    char studentID[10];  
    int score;  
} Student;  
  
int main() {  
    FILE *fp;  
    Student students[100]; // ����ṹ���������洢ѧ������  
    int count = 0; // ��¼��ȡ����ѧ������  
  
    // ���ļ�  
    fp = fopen("�����γɼ���.txt", "r");  
    if (fp == NULL) {  
        printf("�ļ���ʧ�ܣ�\n");  
        return 1;  
    }  
  
    // ���ļ��ж�ȡѧ�����ݲ��洢���ṹ��������  
    while (fscanf(fp, "%[^,],%[^,],%d", students[count].name, students[count].clas, &students[count].score) == 3) {  
        strcpy(students[count].studentID, "ABC123"); // �������ѧ�Ź̶�Ϊ"ABC123"������Ը���ʵ�������޸�  
        count++;  
    }  
  
    // �ر��ļ�  
    fclose(fp);  
  
    // ����洢��ѧ������  
    for (int i = 0; i < count; i++) {  
        printf("ѧ��������%s���༶��%s��ѧ�ţ�%s���ɼ���%d\n", students[i].name, students[i].clas0, students[i].studentID, students[i].score);  
    }  
  
    return 0;  
}
