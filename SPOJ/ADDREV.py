t=int(input())
for i1 in range(t):
    a,b=map(int,input().split())
    ori_a1=[]
    an_a=a
    while an_a>0:
        ori_a1.append(an_a%10)
        an_a=an_a//10
    ori_b=[]
    an_b=b
    while an_b>0:
        ori_b.append(an_b%10)
        an_b=an_b//10
    original_a=0
    for i in range(len(ori_a1)):
        original_a+=(ori_a1[i]*(10**(len(ori_a1)-1-i)))

    original_b=0
    for i in range(len(ori_b)):
        original_b+=(ori_b[i]*(10**(len(ori_b)-1-i)))
    ori_ans=original_a+original_b
    an=[]
    ori_fr=ori_ans
    while ori_fr>0:
        an.append(ori_fr%10)
        ori_fr=ori_fr//10
    answer=0
    for i in range(len(an)):
        answer+=(an[i]*(10**(len(an)-1-i)))
    print(answer)
