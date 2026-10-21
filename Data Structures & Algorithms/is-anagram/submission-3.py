class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # self is reference current instance of class
        mp1 = {}
        mp2 = {} #defined hasmap
        size1 = len(s)
        size2 = len(t)
        if size1 != size2 :
            return False
        for i in range(0, size1):
            mp1[s[i]]= mp1.get(s[i],0) + 1
            mp2[t[i]]= mp2.get(t[i],0) + 1
        # for i in s:
            # If a character exists in mp1 but not in mp2, Python raises a KeyError.
            # if(mp1[i]!=mp2[i]):
        return mp1 == mp2 
            # it will compare key and values       
            

        

