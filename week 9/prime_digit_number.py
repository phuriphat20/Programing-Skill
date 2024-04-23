check = ['2', '3', '5', '7']

round = int(input())

lst = []

for x in range(round):
    n = int(input())
    str_n = str(n - 1)
    list_str = list(str_n)
    begin = list(str_n)
    index = 0
    running = True
    while(running):
        for i in range(len(list_str)):
            if list_str[i] in check and i == len(list_str) - 1:
                running = False
                break
            if list_str[i] in check:
                continue
            else:
                if list_str[i] == '0':
                    if(i == 0):
                        for j in range (i + 1, len(list_str)):
                            list_str[j] = '7'
                        running = False
                    else:
                        for j in range (i , len(list_str)):
                            list_str[j] = '7'
                        list_str[i - 1] = chr(int(ord(list_str[i - 1]) - ord('1')) + 48)
                    break
                else:
                    list_str[i] = chr(int(ord(list_str[i]) - ord('1')) + 48)
                    for j in range (i + 1, len(list_str)):
                        list_str[j] = '9'
                    break
        index = i
    temp = " "
    for i in list_str:
        if i != '0':
            temp += i
    lst.append(temp)
for ans in lst:
    print(ans)