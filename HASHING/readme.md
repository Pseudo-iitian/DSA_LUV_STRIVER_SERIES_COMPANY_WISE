1- inside main , array size at max is 10^6, for integers
2- outside main, globally size is max of 10^7, for integers.
3- inside main, for boolean is 10^7 
4- outside main, for boolean is 10^8.
5- but for numbers for finding count of number, containing 10^9 numbers then how will do hashing here.
6- in number hasing there might be a problem of size 10^9 but for character hashing, there is at max of size 256 chars so no problem of array size.
7- if the array size need to of 10^9 then how we will declare that, so we use stl map or collection in java.
8- when you use map, it stores all the distinct value in the sorted order.
9- ordered map time complexity : for storing and fetching is : O(logn) in all best, average and worst case.
10- unordered map -> it does not stored in sorted order.
- Average Case or Best Case:  tc for storing & fetching in unordered map - O(1)
- Worst Case: storing and fetching tc : O(n) where n is number of elements in unordered map. ( linear in nature )
- we have to use unordered map in most of the cases, but if it fails O(n^2) then try to use ordered map in case of TLE.
11- Why does worst case happens in unordered map ? 
- because of internal collisions.
12- How does hashing works ?
- for 10^18 array data strucutre size is limited to max of 10^7 so how map create those.
- Division Method
- Folding Method
- Mid square method
- how is internal map design ? and how you stores for size of 10^18.
- suppose you have been given , { 2, 5, 16, 27, 139 } and you can't use size greater than 10 for array. so arr[140] how will you create can't create.
11- what is collision ? 
- whatever hash they using internally, it ends up the all you keys end up at the same hash index like 8, this is the worst case that happens which leads to the collisions. i.e. if every one went to the same hash place, then finding all that hash key become tough whcih leads to collsions. i.e. time coplexity becomes O(n).
12- division methods uses % 10 operator link every elementing ending with single digit and map it to from 0 to 9 using linked list. see the chaining division method.png.

13- unordered map, key can be only single single element like int, float, string and it doest not allows pair<int,int> but ordered map or map allows it.