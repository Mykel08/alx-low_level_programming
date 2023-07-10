C - Search Algorithms

In computer science, a search algorithm is an algorithm designed to solve a search problem. Search algorithms work to retrieve information stored within particular data structure, or calculated in the search space of a problem domain, with either discrete or continuous values.

Although search engines use search algorithms, they belong to the study of information retrieval, not algorithmics.

The appropriate search algorithm to use often depends on the data structure being searched, and may also include prior knowledge about the data. Search algorithms can be made faster or more efficient by specially constructed database structures, such as search trees, hash maps, and database indexes.[1][full citation needed][2]

Search algorithms can be classified based on their mechanism of searching into three types of algorithms: linear, binary, and hashing. Linear search algorithms check every record for the one associated with a target key in a linear fashion.[3] Binary, or half-interval, searches repeatedly target the center of the search structure and divide the search space in half. Comparison search algorithms improve on linear searching by successively eliminating records based on comparisons of the keys until the target record is found, and can be applied on data structures with a defined order.[4] Digital search algorithms work based on the properties of digits in data structures by using numerical keys.[5] Finally, hashing directly maps keys to records based on a hash function.[6]

Algorithms are often evaluated by their computational complexity, or maximum theoretical run time. Binary search functions, for example, have a maximum complexity of O(log n), or logarithmic time. In simple terms, the maximum number of operations needed to find the search target is a logarithmic function of the size of the search space.

Space Complexity: 

The term Space Complexity is misused for Auxiliary Space at many places. Following are the correct definitions of Auxiliary Space and Space Complexity. 

Auxiliary Space is the extra space or temporary space used by an algorithm.

The space Complexity of an algorithm is the total space taken by the algorithm with respect to the input size. Space complexity includes both Auxiliary space and space used by input. 
For example, if we want to compare standard sorting algorithms on the basis of space, then Auxiliary Space would be a better criterion than Space Complexity. Merge Sort uses O(n) auxiliary space, Insertion sort, and Heap Sort use O(1) auxiliary space. The space complexity of all these sorting algorithms is O(n) though. 

Space complexity is a parallel concept to time complexity. If we need to create an array of size n, this will require O(n) space. If we create a two-dimensional array of size n*n, this will require O(n2) space.

In recursive calls stack space also counts. 

Example : 

int add (int n){
    if (n <= 0){
        return 0;
    }
    return n + add (n-1);
}

Here each call add a level to the stack :

1.  add(4)
2.    -> add(3)
3.      -> add(2)
4.        -> add(1)
5.          -> add(0)

Each of these calls is added to call stack and takes up actual memory.
So it takes O(n) space.
However, just because you have n calls total doesn’t mean it takes O(n) space.

Look at the below function :

int addSequence (int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += pairSum(i, i+1);
    }
    return sum;
}

int pairSum(int x, int y){
    return x + y;
}

There will be roughly O(n) calls to pairSum. However, those 
calls do not exist simultaneously on the call stack,
so you only need O(1) space.
Note: It’s necessary to mention that space complexity depends on a variety of things such as the programming language, the compiler, or even the machine running the algorithm.
