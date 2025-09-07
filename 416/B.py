s = str(input())
t = str()

last_sharp = -1
last_o = -1
for i in range(len(s)):
    if s[i] == "#":
        t = t + "#"
        last_sharp = i
    elif last_o < last_sharp or last_o == -1:
        t = t + "o"
        last_o = i
    else:
        t =  t + "."

print(t)
