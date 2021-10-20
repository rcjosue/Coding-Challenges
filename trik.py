inp = input()
cup = [1 , 0 , 0]
for letter in inp:
     if letter == 'A':
          cup[0] , cup[1] = cup[1] , cup[0]
     elif letter == 'B':
          cup[2] , cup[1] = cup[1] , cup[2]
     else:
          cup[0] , cup[2] = cup[2] , cup[0]
print( cup.index(1)+1 )
