a=int(input("enter num1: "))
o=input("enter the operation that you want to do: ")
b=int(input("enter num2: "))

if o=="+":
    sum=a+b
    print("sum = {}".format(sum))
elif o=="-":
    sum=a-b
    print("sum = {}".format(sum))
elif o=="/":
    sum=a/b
    print("sum = {}".format(sum))
elif o=="*":
    sum=a*b
    print("sum = {}".format(sum))
else:
    print("error")
