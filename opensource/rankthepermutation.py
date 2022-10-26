#Rank the permutation in python lang:
#himanshukumarlenka

class Solution:
	def findRank(self, S):
        N = len(S)
        def getfact(n):
            if n == 0 or n == 1:
                return 1
            return n * getfact(n-1)


        ans = 0
        for i in range(N):
            val1 = ord(S[i])
            count = 0
            factval = 1
            for j in range(i+1,N):
                val2 = ord(S[j])
                if val2 < val1:
                    count += 1
            
            factval = getfact(N-1-i)
            ans += ( count * factval )
            
            
        return (ans + 1)