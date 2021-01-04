def multiplyList(myList) :
    result = 1
    for x in myList:
         result = result * x 
    return result
string_list=map(int,input().split())
list1=string_list
print(multiplyList(list1))