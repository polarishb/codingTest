#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_suffix) {
    int answer = 0;
    
    char* ptr = &my_string[strlen(my_string) - strlen(is_suffix)];
    
    answer = strstr(ptr, is_suffix) ? 1 : 0;
    
    return answer;
}