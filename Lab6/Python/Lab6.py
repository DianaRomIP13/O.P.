def factorial(N):
  if N < 0:
    return 0
  elif N == 0:
    return 1
  else:
    return N * factorial(N - 1)
def func(x):
    Sum = 0
    k = 0
    while k <= 20:
        Sum += (pow(x, (2 * k + 1)) / factorial(2 * k + 1)) / (pow(x, (2 * k)) / factorial(2 * k))
        k += 1
    return Sum

a = float(input("a: "))
Y = (2 * func(0.5) - 3 * func(a - 0.1) / 5 * func(4 * a - 1))
print( "Y = ", (round(Y, 2)))