def Union(l1,l2):
    finallist=list(set(l1)|set(l2))
    return finallist
lst1=eval(input("enter the 1st list "))
lst2=eval(input("enter the 2nd list "))
print("union of two lists ",Union(lst1,lst2))

