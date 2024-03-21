#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
  
// 定义学生结构体  
typedef struct {  
    char name[50];  
    char clas[10];  
    char studentID[10];  
    int score;  
} Student;  
  
int main() {  
    FILE *fp;  
    Student students[100]; // 定义结构体数组来存储学生数据  
    int count = 0; // 记录读取到的学生数量  
  
    // 打开文件  
    fp = fopen("第六课成绩单.txt", "r");  
    if (fp == NULL) {  
        printf("文件打开失败！\n");  
        return 1;  
    }  
  
    // 从文件中读取学生数据并存储到结构体数组中  
    while (fscanf(fp, "%[^,],%[^,],%d", students[count].name, students[count].clas, &students[count].score) == 3) {  
        strcpy(students[count].studentID, "ABC123"); // 这里假设学号固定为"ABC123"，你可以根据实际需求修改  
        count++;  
    }  
  
    // 关闭文件  
    fclose(fp);  
  
    // 输出存储的学生数据  
    for (int i = 0; i < count; i++) {  
        printf("学生姓名：%s，班级：%s，学号：%s，成绩：%d\n", students[i].name, students[i].clas0, students[i].studentID, students[i].score);  
    }  
  
    return 0;  
}
