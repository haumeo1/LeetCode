class Solution:
    def nearestPalindromic(self, n: str) -> str:
        l = len(n)
        candidates = set()
        candidates.add(10**l + 1)
        candidates.add(10**(l-1) - 1)
        prefix = int(n[:(l+1)//2])
        for i in range(-1, 2):
            p = str(prefix + i)
            candidates.add(int(p + p[:l//2][::-1]))
        candidates.discard(int(n))
        return str(min(candidates, key = lambda x: (abs(int(n) - x), x)))
    