#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// spell_len은 배열 spell의 길이입니다.
// dic_len은 배열 dic의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* spell[], size_t spell_len, const char* dic[], size_t dic_len) {
    int answer = 2;
    int* check = (int*)malloc(sizeof(int) * spell_len);
    memset(check, 0, sizeof(int) * spell_len);
    
    for(int i = 0; i < dic_len; i++){
        if(strlen(dic[i]) != spell_len) continue;
        for(int j = 0; j < spell_len; j++){
            for(int k = 0; k < spell_len; k++){
                if(*spell[j] == dic[i][k]){
                    check[j] = 1;
                    break;
                }
            }
            if(check[j] == 0){
                memset(check, 0, sizeof(int) * spell_len);
                break;
            }
        }
        
        if(check[0] == 1){
            return 1;
        }
    }
    
    return answer;
}