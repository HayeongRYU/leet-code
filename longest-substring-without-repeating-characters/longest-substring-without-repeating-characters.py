
class Solution:
    def lengthOfLongestSubstring(self, s: str):
        str_list = []
        max_length=0
        for x in s:
            if x in str_list:#str_list안에 x가 있다면 
                str_list = str_list[str_list.index(x)+1:]
                #str_list 다음 수부터 슬라이싱해서 str_list 다시 갱신
        #계속 반복하다보면 str_list에 각 정보가 입력될거임
        
            str_list.append(x)#x에 추가해줌
            max_length=max(max_length, len(str_list))
        return max_length