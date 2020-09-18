a = int(input())
b = list(map(int, input().split(" ")))
x = 0
y = 0
c1 = 0
c2 = 0
c = 0
f1 = min(b)
f2 = max(b)
while 1:
	while(c2 == 0):
		c2 = b.count(f2)
		f2 -= 1
		c += c2
	else:
		x += f2+1
		c2 -= 1
	print(f"{x}, {y}, {c2}, {c1}, {c}, {len(b)}")
	if(c == len(b)):
		break
	while(c1 == 0 & c2 == 0 & c1 == 0):
		c1 = b.count(f1)
		f1 += 1
		c += c1
	else:
		y += f1-1
		c1 -= 1
	print(f"{x}, {y}, {c2}, {c1}, {c}, {len(b)}")
	if(c1 == 0 and c2 == 0 and c == len(b)):
		break
print((x**2 + y**2))
