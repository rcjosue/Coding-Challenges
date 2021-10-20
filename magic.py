#Kattis: Magic Trick
"""
will only be able to guess correctly if there are no duplicates
can check with length of list vs list of set (no duplicates), very slow
check count of each element, also slow
"""
cards = input()
a = {}
ans = 1
for card in cards:
     try:
          a[card] += 1
          ans=0
          break
     except:
          a[card] = 1
print(ans)
