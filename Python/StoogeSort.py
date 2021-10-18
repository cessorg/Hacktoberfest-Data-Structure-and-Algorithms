def stoogesort(arr, l, h):
    if l >= h:
        return

    if arr[l]>arr[h]:
        t = arr[l]
        arr[l] = arr[h]
        arr[h] = t
  
    if h-l + 1 > 2:
        t = (int)((h-l + 1)/3)
        stoogesort(arr, l, (h-t))
        stoogesort(arr, l + t, (h))
        stoogesort(arr, l, (h-t))

arr = [2, 4, 5, 3, 1]
n = len(arr)
stoogesort(arr, 0, n-1)
for i in range(0, n):
    print(arr[i], end = ' ')
