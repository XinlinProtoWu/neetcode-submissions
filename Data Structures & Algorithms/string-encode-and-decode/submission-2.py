class Solution:

    def encode(self, strs: List[str]) -> str:
        res = ""
        for s in strs:
            res += str(len(s)) + "#" + s
        return res

    def decode(self, s: str) -> List[str]:
        res = []
        i = 0

        while i < len(s):
            j = i   
            while s[j] != '#':
                j += 1
            strlen = int(s[i:j])

            i = j + 1 #now on the index right after '#'
            res.append(str(s[i: i+strlen]))
            i = i + strlen
        return res
