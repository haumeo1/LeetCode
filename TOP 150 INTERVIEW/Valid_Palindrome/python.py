class Solution:
    def isPalindrome(self, s: str) -> bool:
        a = s.lower()
        result = ""
        for i in a:
            if i.isalnum():
                result += i
        if(result[::-1] in result):
            return True
        return False