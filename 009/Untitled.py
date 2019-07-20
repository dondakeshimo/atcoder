
# coding: utf-8

# In[34]:

n, k = (int(i) for i in input().split())
s = input()


# In[35]:

sorted_s = sorted(s)
t = ""
for i in range(n):
    cost = calc_cost_left(t + sorted_s[i], s[:i + 1]) +            calc_cost_right(sorted_s[i + 1:], s[i + 1:])
    if cost <= k:
        t += sorted_s[i]
    else:
        break

if i is not n - 1:
    rest_sorted_s = sorted_s[i:]
    rest_s = s[i:]
    rest_t = "*" * len(rest_s)

    for j in range(len(rest_s)):
        for rss in rest_sorted_s:
            if rss is rest_s[j]:
                rest_t = rest_t[:j] + rss + rest_t[j + 1:]
                rest_sorted_s.remove(rss)
                break

    for rss in rest_sorted_s:
        rest_t = rest_t.replace("*", rss, 1)
        
    t += rest_t
    
print(t)


# In[2]:

def calc_cost_left(s1, s2):
    cost = 0
    for i in range(len(s1)):
        if s1[i] is not s2[i]:
            cost += 1
            
    return cost


# In[3]:

def calc_cost_right(s1, s2):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    cost = len(s1)
    for alp in alphabet:
        cost -= min(s1.count(alp), s2.count(alp))
    
    return cost


# In[ ]:



