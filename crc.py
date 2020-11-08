def xor(a,b):
	result = []

	#traverse through all bits and do XOR

	for i in range(1, len(b)):
		if a[i]==b[i]:
			result.append('0')
		else:
			result.append('1')
	return ''.join(result)

	#Now do division

def modDiv(divident , divisior):
	pick = len(divisior) #pick the no of bits to be XOR

	tmp = divident[0 : pick]
	while pick<len(divident):
		if tmp[0] == '1':
			tmp = xor(divisior , tmp) + divident[pick]

		else:
			tmp = xor('0'*pick, tmp) + divident[pick]
		pick+=1


		if tmp[0] == '1':
			tmp = xor(divisior, tmp)
		else:
			tmp = xor('0'*pick, tmp)

		checkword = tmp
		return checkword

def encodeData(data,key):
	l_key = len(key)
	appended_data= data + '0'*(l_key-1)
	remainder = modDiv(appended_data, key)

	checkword = data + remainder
	print("Remainder :",remainder)
	print("Encoded data :" ,checkword)

data= input("Enter your data:")
key= input("Enter your key:")
print("Data:",data)
print("Key:" , key)
encodeData(data,key)





