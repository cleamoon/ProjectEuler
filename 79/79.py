ls = []

with open("keylog.txt") as f:
    ls.append(f.readline())

m = {}

ss = set()

for s in ls:
    a = s[0]
    b = s[1]
    c = s[2]
    if a in m:
        m[a].add(b)
    else:
        m[a] = set(b)
    if b in m:
        m[b].add(c)
    else:
        m[b] = set(c)
    ss.add(a)
    if b in ss:
        ss.remove(b)
    if c in ss:
        ss.remove(c)

for k in m:
    m[k].sort() 

ssl = sorted(list(ss))

ans = []

for s in ssl: 
