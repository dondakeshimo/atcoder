
# coding: utf-8

# In[1]:

n = int(input())
a = list(map(int, input().split()))
m = max(a)
s = sum(a) - m


# In[3]:

if m < s:
    print("Yes")
else:
    print("No")


# In[4]:

sorted(a)


# In[9]:

n, m = map(int, input().split())
x = list(map(int, input().split()))

if n >= len(x):
    print(0)
else:
    x = sorted(x)
    diff = [x[i + 1] - x[i] for i in range(len(x) - 1)]
    diff = sorted(diff)
    diff = diff[0:len(diff) - n + 1]
    print(sum(diff))


# In[10]:

import numpy as np

n, k = map(int, input().split())
a = list(map(int, input().split()))

print(np.log2(k))


# In[12]:

bin(0b1001 | 0b00000)


# In[22]:

count = []
for i in range(int(np.log2(k)) + 1):
    count.append(0)
    for j in a:
        if (j & 2 ** i) == 0:
            count[i] += 1


# In[21]:

print(3 & 2 ** 0)
a

