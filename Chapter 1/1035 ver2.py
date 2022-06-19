def palindrome(a):
    number = str(a)
    for i in range(len(number)//2):
        if number[i] != number[-1 * (i + 1)]:
                return False
    return True
def prime_number(a):
    for i in range(2,int(a**(0.5))+1):
        if a % i == 0:
            return False
    return True
    
n = int(input())
while True:
    if palindrome(n) == True and prime_number(n) == True:
        print(n)
        break
    else:
        n += 1