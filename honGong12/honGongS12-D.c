#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[80], str2[80], str3[80];
    char high[80], middle[80], low[80], temp[80];

    printf("�� �ܾ� �Է� : ");
    scanf("%s %s %s", str1, str2, str3);
    
    // st1�� str2���� ������ �ڿ� ������ �� ���ڿ��� �ٲ۴�
     if(strcmp(str1, str2) > 0) 
    {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }

    // st1�� str3���� ������ �ڿ� ������ �� ���ڿ��� �ٲ۴�
    if(strcmp(str1, str3) > 0) 
    {
        strcpy(temp, str1);
        strcpy(str1, str3);
        strcpy(str3, temp);
    }

    // st2�� str3���� ������ �ڿ� ������ �� ���ڿ��� �ٲ۴�
    if(strcmp(str2, str3) > 0) 
    {
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }

/*
    if (strcmp(str1, str2) > 0) {       // str1(high) vs str2(low)
        strcpy(high, str1);
        strcpy(low, str2);
    }
    else {                              // str1(low) vs str2(high)
        strcpy(high, str2);
        strcpy(low, str1);
    }

    if (strcmp(str3, high) > 0) {       // str3(high) vs high(middle)
        strcpy(middle, high);
        strcpy(high, str3);
    }
    else if (strcmp(str3, low) > 0) {   // str3(middle) vs low(low)
        strcpy(middle, str3);
    }
    else if (strcmp(low, str3) > 0) {   // low(middle) vs str3(low)
        strcpy(middle, low);
        strcpy(low, str3);
    }
 */
    printf("%s, %s, %s", str1, str2, str3);
    // printf("%s, %s, %s", low, middle, high);

    return 0;
    
}