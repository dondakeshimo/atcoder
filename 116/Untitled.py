
# coding: utf-8

# In[2]:

a, b, _ = map(int, input().split())
print(int(a * b / 2))


# In[8]:

def odd_func(n):
    return int(3 * n + 1)


# In[9]:

def even_func(n):
    return int(n / 2)


# In[17]:

s = int(input())
a = [s]

counter = 2
while True:
    if a[-1] % 2 == 0:
        temp = int(a[-1] / 2)
    else:
        temp = int(3 * a[-1] + 1)
        
    print(temp)
    
    if temp in a:
        break
        
    counter += 1
    a.append(temp)
    
print(counter)


# In[14]:

a.add(1)


# In[29]:

n = int(input())
h = list(map(int, input().split()))

pre = 0
high = []
low = []
for i in range(len(h) - 1):
    if h[i] <= h[i + 1]:
        continue
    else:
        h = h[i:-1]
        break
        
for i in range(len(h) - 1):
    if h[len(h) - i - 1] <= h[len(h) - i - 2]:
        continue
    else:
        h = h[0:n - i + 1]
        break
        
pre = -1
high.append(h[0])
high.append(h[-1])
for i in range(len(h) - 1):
    if h[i + 1] < h[i] and pre == 1:
        high.append(h[i])
        pre = -1
    elif h[i + 1] > h[i] and pre == -1:
        low.append(h[i])
        pre = 1
    

print(h)
print(high)
print(low)
print(sum(high) - sum(low))


# In[ ]:



