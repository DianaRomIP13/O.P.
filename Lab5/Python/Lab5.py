for Num in range(1000,10000):
    Num2 = Num
    RevsNum = 0
    while Num2 > 0:
        RevsNum = RevsNum*10 + Num2%10
        Num2 //= 10
    if Num == RevsNum:
        print(Num)
