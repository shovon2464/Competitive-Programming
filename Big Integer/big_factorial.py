def big_factorial(n):
    result = 1
    for i in range(2,n+1):
        result = result * i
    
    print(result)


big_factorial(100)