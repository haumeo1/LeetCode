class Solution:
    def minWindow(self, s: str, t: str) -> str:
        count = dict()
        for i in t:
            if i in count:
                continue
            else:
                count[i] = t.count(i)
        char = list(count.keys())
        # for i in char:
        #     if count[i] > s.count(i):
        #         return ""
        