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

def check(argstr):
    args=argstr.split(' ')
    a0=args[0]

    try:
        a1=args[1]
        a2=args[2]
    except:
        pass
    if isinstance(args, list):
        pass
    else:
        sys.exit()
    argsd=list(args)
    #check for print cmd
    if args==['']:
        sys.exit()
    try:
        if args[0]=="print":
            try:
                if a1[0]!='$':
                    print(args[1])
                else:
                    try:
                        print(variables[a0[1:]])
                    except KeyError:
                        print(a1[1:]+' is not defined!')
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
        elif a0[0]=="#":
            pass
        elif args[1]=="+" or args[1]=="-" or args[1]=="*" or args[1]=="/":
            a0=args[0]
            a2=args[2]
            if a0[0]=='$':
                try:
                    a0=str(variables[a2[1:]])
                    
                except:
                    print("Variable does not exist or is wrong type")
            else:
                a0=float(args[0])

            if a2[0]=='$':
                try:
                    a2=str(variables[a2[1:]])
                except:
                    print("Variable does not exist or is wrong type")
            else:
                a2=float(args[2])
            a0=float(a0)
            a2=float(a2)
            if args[1]=="+":
                print(round(a0+a2),5)
            elif args[1]=="-":
                print(round(a0-a2),5)
            elif args[1]=="*":
                print(round(a0*a2),5)
            elif args[1]=="/":
                print(round(a0/a2),5)
        
        else:
            print("Your command wasn't recognised.")
        args=[]
    except IndexError:
        print('Your syntax is bad - make sure there are spaces between operators.')
def ret(y):
    if y==0:
        sys.exit()