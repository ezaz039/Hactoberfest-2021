Linear Search:
-----------------

pos=-1
def lsearch(l1,ele):
    i=0
    while i<len(l1):
        if l1[i]==ele:
            globals()['pos']=i
            return True
        i=i+1
    return False

l1=[89,90,98,99,95]
ele=int(input("Enter element to be searched for: "))
if lsearch(l1,ele):
    print("Element is present at position: ",pos+1)
else:
    print("Element is not present ")
