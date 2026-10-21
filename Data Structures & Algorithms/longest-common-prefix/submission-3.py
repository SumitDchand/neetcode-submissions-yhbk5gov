class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        ans = ""
        n = len(strs[0])
        for i in range(n):
            for s in strs:
                if len(s) == i or s[i]!=strs[0][i]:
                    return ans
            ans += strs[0][i]
        return ans
        