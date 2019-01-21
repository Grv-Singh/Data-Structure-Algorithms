class FirstFollow:
    def __init__(self):
        self.gram={'E':['EA','A'],'A':['AT','a'], 'T':['a'],'E':['i']}
        self.term=['a','i']
        self.nonterm=['E','A','T']
            
    def first(self,ip):
        fir=[]
        ctr=0
        length=0
        if(ip in self.term):
            fir.extend(ip)
        else:
            for i in self.gram[ip]:
                if(i[0] in self.term):
                     fir.extend(i[0])
                else:
                     length=len(i)
                     while(ctr<length):
                          if('n' in self.gram[i[ctr]]):
                                fir.extend(self.first(i[ctr]))
                                ctr+=1
                          else:
                                fir.extend(self.first(i[ctr]))
                                break
        firstset[ip]=fir
        return fir

    def follow(self,ip):
        foll=[]
        if(ip=='E'):
            foll.extend('$')
        for key in self.gram.keys():
            vals=self.gram[key]
            for each in vals:
                ctr=0
                length=len(each)
                for j in each:
                    if(j==ip):
                        if(ctr<length-1):
                            if((ip != key)and('n'in self.first(each[ctr+1]))):
                                for x in self.first(each[ctr+1]):
                                    if((x not in foll)and(x!='n')):
                                        foll.extend(x)
                                for x in self.follow(key):
                                    if((x not in foll)and(x!='n')):
                                        foll.extend(x)
                            else:
                                for x in self.first(each[ctr+1]):
                                    if((x not in foll)and(x!='n')):
                                        foll.extend(x)
                        if((ip != key)and(ctr==length-1)):
                            for x in self.follow(key):
                                if((x not in foll)and(x!='n')):
                                    foll.extend(x)
                    ctr+=1
                ctr=0
        followset[ip]=foll
        return foll
      
    def parsingtable(self,ip):
        for i in self.gram[ip]:
            if ip not in parsingtable: 
                parsingtable[ip]={}
            if i[0] in self.term and i[0]!='n':
                if i[0] not in parsingtable[ip]:
                    parsingtable[ip][i[0]]=[]
                parsingtable[ip][i[0]].append(str(ip +" -> "+ i))
            elif i == 'n':
                print("2")
                for k in followset[ip]:
                    if k not in parsingtable[ip]: 
                        parsingtable[ip][k]=[]
                    parsingtable[ip][k].append(str(ip +" -> "+ i))
            else:
                print("3")
                for k in firstset[ip]:
                    if k not in parsingtable[ip]: 
                        parsingtable[ip][k]=[]
                    parsingtable[ip][k].append(str(ip + " -> "+i))
                
    def printparser(self):
        for i in parsingtable:
            for j in parsingtable[i]:
                for k in parsingtable[i][j]:
                    print(i,":",j,":",k)        

firstset={}
followset={}
parsingtable={}
a=FirstFollow()
nont=['E','A','T']
for i in nont:
    fi=a.first(i)
    fo=a.follow(i)
    firstset[i]=fi
    followset[i]=fo
    
print(firstset)
print(followset)
for i in nont:
    a.parsingtable(i)

a.printparser()
