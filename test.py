# cook your dish here
t = int(input())
while (t):
    x,y = map(int, input().split())
    s = 6 - (x+y)
    a = s/6.000000
    print('%.6f'%a)
    t-=1

