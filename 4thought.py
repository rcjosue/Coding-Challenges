#Kattis: 4thought

def  four_fours( n ):
      """ Iterate through all combinations of operators between four 4s and return one solution"""
      operators = ['+', '-', '*', '//' ]
      for x in operators:
           for y in operators:
                for z in operators:
                     eqn = '4 '+x+' 4 '+y+' 4 '+z+' 4'
                     if eval(eqn) == n:
                          return ( eqn.replace( '//' , '/' ) + " = " + str(n) ) 
      return("no solution")

m =  int(input())
for i in range(m):
     
     n = int(input())
     print ( four_fours( n ) )

