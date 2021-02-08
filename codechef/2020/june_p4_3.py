def count_odd(n):
	count=1
	while n%2==0:
		count=count*2
		n=n/2
	return count
def tom_is_even(n):
	num=n-2
	count=count_odd(n)
	jerry_vectory=0
	while num>count:
		if num%count==0 and (num/count)%2==0:
			jerry_vectory=jerry_vectory+1
		num=num-2
	print(jerry_vectory)
def tom_is_odd(n):
	count=int(n/2)
	print(count)
t=int(input())
while t:
	n=int(input())
	if n%2==0:
		tom_is_even(n)
	else:
		tom_is_odd(n)
	t=t-1
