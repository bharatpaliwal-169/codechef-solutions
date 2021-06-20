try:
  mod = 1000000007
  for i in range(int(input())):
    a,b = map(int,input().split())
    c = pow(2,a,mod)-1
    print(pow(c,b,mod))

except:
	pass