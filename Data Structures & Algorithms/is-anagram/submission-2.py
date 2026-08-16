class Solution:
    def isAnagram(self, a: str, b: str) -> bool:

        a = ''.join(sorted(a))
        b = ''.join(sorted(b))

        if a!=b:return False

        return True