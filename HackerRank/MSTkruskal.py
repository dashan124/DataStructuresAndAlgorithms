#!/bin/python3

import sys

from collections import defaultdict
class Disjoint:
    def __init__(self):
        self.parent=None
        self.rank=0
        self.element=None
        self.e=[]
class Set:
    def __init__(self):
        #self.repre=Disjoint()
        self.repre=None
    def makset(self,x,data):
        self.repre=x
        x.parent=x
        x.rank=0
        x.element=data
    def findset1(self,x):
        if x.parent==x:
            return x
        return self.findset1(x.parent)
    def findset(self,x):
        if x.parent==x:
            return x
        x.parent=self.findset(x.parent)
        return x.parent
    def Union(self,x,y):
        rx=self.findset(x)
        ry=self.findset(y)
        if rx.rank>ry.rank:
            ry.parent=rx
            rx.e.append(ry.element)
        elif rx.rank<ry.rank:
            rx.parent=ry
            ry.e.append(rx.element)
        else:
            ry.e.append(rx.element)
            rx.parent=ry
            ry.rank+=1
class Graph:
    def __init__(self,vertices):
        #self.start=None
        #self.end=None
        self.weight=0
        self.Ver=vertices
        self.gr=[]
    def addEdge(self,x,y,w):
        self.gr.append([x,y,w])
    def kruskal(self,n,arr,s):
        self.gr = sorted(self.gr, key=lambda item: item[2])
        result=[]
        i=0
        e=0
        while e < self.Ver - 1:
            u, v, w = self.gr[i]
            i = i + 1
            x = s.findset(arr[u])
            y = s.findset(arr[v])
            if x != y:
                e = e + 1
                result.append([u, v, w])
                s.Union(x, y)
        #print(result)
        s=0
        for rt in range(len(result)):
            s+=result[rt][2]
        print(s)








if __name__ == "__main__":
    n, e = input().strip().split(' ')
    n, e = [int(n), int(e)]
    arr=[Disjoint() for i in range(n)]
    edges = []
    s=Set()
    g=Graph(n)
    for i in range(n):
        s.makset(arr[i],i)
    for edges_i in range(e):
        #edges_t = [int(edges_temp) for edges_temp in input().strip().split(' ')]
        x,y,w=map(int,input().split())
        g.addEdge(x-1,y-1,w)
        #edges.append(edges_t)
    #result = mst(n, edges)
    #print(result)
    g.kruskal(n,arr,s)
