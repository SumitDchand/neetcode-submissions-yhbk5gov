class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp = {}
        n = len(nums)
        ans = []
        for num in nums:
            mp[num] = mp.get(num, 0) + 1

        temp = mp.copy()

        for num in range(k):
            # top = max(top, key=temp.get()) #no () wront
            # top = max(top, key=temp.get) # right
            top_key = max(temp, key=temp.get)
            #take key finding whichever have the highest value
            ans.append(top_key)
            del temp[top_key]


        # for key, value in mp.items():
        #     if value >= k:
        #         arr.append(key)

        # for key in mp.keys():
        #     if mp[key]>=k:
        #         arr.append(key)
        return ans
            
            