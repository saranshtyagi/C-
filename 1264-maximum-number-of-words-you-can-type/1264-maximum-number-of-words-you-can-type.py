class Solution(object):
    def canBeTypedWords(self, text, brokenLetters):
        """
        :type text: str
        :type brokenLetters: str
        :rtype: int
        """
        words = text.split()
        wordCount = 0

        broken_set = set(brokenLetters)

        for word in words:
            if not any(letter in broken_set for letter in word):
                wordCount += 1

        return wordCount