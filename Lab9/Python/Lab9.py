def func(size, array):
    words = ""
    for i in range(size):
        beginning = array[i].find("=")
        if checking(array, beginning, i):
            beginning += 1
            end = array[i].find(';', beginning)
            words += array[i][beginning:end] + "\n"
    print("Result:\n" + words)


def checking(array, beginning, i):
    rule = beginning + 1 < len(array[i]) and array[i][beginning - 1] != '>' and array[i][beginning - 1] != '<' and array[i][beginning + 1] != '='
    return rule


size = int(input("Enter the number of lines "))
array = []
print("Enter your code ")
for i in range(size):
    array.append(input())

func(size, array)