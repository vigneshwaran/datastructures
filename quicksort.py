def quicksort(arr,low,high):
	if low<high:
		pi=partition(arr,low,high)
		quicksort(arr,low,pi-1)
		quicksort(arr,pi+1,high)


def partition(arr,low,high):
    i = low-1
    pi=arr[high]
    for j in range(low,high):
        if arr[j]<=pi:
            i+=1
            arr[i],arr[j]=arr[j],arr[i]
    arr[i+1],arr[high]=arr[high],arr[i+1]
    return arr.index(pi)


a=[random.randint(10,90) for i in range(10)]
quicksort(a,0,9)