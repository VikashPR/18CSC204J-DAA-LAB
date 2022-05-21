a = [1,2,3,4,5,6,7,8,9,10,13,15,21,24,26,37,45,55,66,77,88,99,100]
end = len(a)
print(end)
start = 0
target = int(input("Enter the value you want search: "))



def binarySearch(target,start, end):
    mid = int(start + end)//2
    if(start>end):
        print("Not Found you nab")
    elif(target == a[mid]):
        print("Data found at index",mid)
    elif(target > a[mid]):
        binarySearch(target,mid+1,end)
    elif(target < a[mid]):
        binarySearch(target,start, mid)

binarySearch(target,start,end)