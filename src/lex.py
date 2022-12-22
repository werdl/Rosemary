import sys
debugy=True
def debug(x):
    if debugy==True:
        print(x)
        print('\n')
def lstpr(lst):
    step1=str(lst)
    step2=step1.replace('[','')
    step2=step2.replace(']','')
    step2=step2.replace('\'','')
    toprint=step2.replace(',',' ')
    print(toprint)
variables ={}

def check(args):
    a0=args[0]
    if isinstance(args, list):
        pass
    else:
        sys.exit()
    argsd=list(args)
    #check for print cmd
    if args[0]=="print":
        try:
            print(args[1])
        except IndexError:
            print("INDEX ERROR")
    #check for var declare cmd
    elif args[0]=="int":
        try:
            a3=args[3]
            if a3[0]!="$":
                variables[args[1]]=args[3]
            else:
                a3=str(args[3])
                a3=a3.replace('$','')
                variables[args[1]]=variables[a3]
        except IndexError:
            print("INDEX ERROR")

    elif args[0]=="str":
        try:
            a3=args[3]
            if a3[0]!="$":
                variables[args[1]]=str(args[3])
            else:
                a3=str(args[3])
                a3=a3.replace('$','')
                variables[args[1]]=variables[a3]
        except IndexError:
            print("INDEX ERROR")       
    #check for exit cmd
    elif args[0]=="exit":
        ret(0)


    elif a0[0]=="$":
        try:
            print(variables[a0[1:]])
        except KeyError:
            print(a0[1:]+' is not defined!')

    args=[]
def ret(y):
    if y==0:
        sys.exit()