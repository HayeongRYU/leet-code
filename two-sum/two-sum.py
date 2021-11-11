class Solution:
    def twoSum(self, nums, target):
        check=0
        length = len(nums)
        #이중순회 돌리기
        for i in range(1,length):
            for j in range(i):
                if nums[i]+nums[j] == target:#target 합이 나왔을 때
                    check=1
                    return j,i
                    break
            if check == 1:
                break
                           