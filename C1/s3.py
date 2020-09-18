a = int(input())
for i in range(0, a):
	aux = int(input())
	c = list(map(int, input().split(" ")))
	#print(c)
	d = True
	for i in range(min(c), max(c)):
		d = i in c
		if d == False:
			break
	if d == True:
		print("Yes")
	else:
		print("No")
	
				
		
