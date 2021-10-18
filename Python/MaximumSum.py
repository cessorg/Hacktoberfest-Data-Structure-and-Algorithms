def kmax(arr, k, n):
 
  
    for c in range(k):
     
        max_so_far = -float("inf")
        max_here = 0
      
        start = 0
        end = 0
        s = 0
        for i in range(n):
             
            max_here += arr[i]
            if (max_so_far < max_here):
                 
                max_so_far = max_here
                start = s
                end = i
            if (max_here < 0):
                 
                max_here = 0
                s = i + 1
 
      
        print("Maximum non-overlapping sub-array sum",
               c + 1, ": ", max_so_far, ", starting index: ",
               start, ", ending index: ", end, ".", sep = "")
 
      
        for l in range(start, end+1):
            arr[l] = -float("inf")
    print()

arr1 = [4, 1, 1, -1, -3, -5, 6, 2, -6, -2]
k1 = 3
n1 = len(arr1)

kmax(arr1, k1, n1)

arr2 = [5, 1, 2, -6, 2, -1, 3, 1]
k2 = 2
n2 = len(arr2)

kmax(arr2, k2, n2)
