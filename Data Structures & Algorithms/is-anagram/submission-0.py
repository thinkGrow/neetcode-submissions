class Solution:
    def isAnagram(self, a: str, b: str) -> bool:

        a = ''.join(sorted(a))
        b = ''.join(sorted(b))

        dict_a = {}
        dict_b = {}

        for alph in a:
            dict_a[alph] = dict_a.get(alph,0) + 1

        for alph in b:
            dict_b[alph] = dict_b.get(alph,0) + 1

            # First, check if they have the same number of keys
        if len(dict_a) != len(dict_b):
            return False
        
        # Check each key and its value
        for key in dict_a:
            if key not in dict_b:
                return False
            if dict_a[key] != dict_b[key]:
                return False

        return True