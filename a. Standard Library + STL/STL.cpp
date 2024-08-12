/*

Standard Template Library   (STL)
    - a collection of header files that provide data structures, algorithms, and functions
    - simplifies your coding experience
    - saves time and increases efficiency 
    - 3 main categories:
        - containers
        - algorithms
        - iterators


    Containers
        - data structures used for data storage and manipulation 
        - 4 types:
            - sequence, associative, unordered associative, adaptors

            Sequence Containers:
                - linear data structures that store elements in a sequential manner
                    ex: std::vector - a dynamic array that grows and shrinks at runtime
                        std::list - a doubly linked list
                        std::deque - a double ended queue allowing insertion and deletion at both ends
            
            Associative Containers:
                - store data in a sorted manner with unique keys
                    ex: std::set - a collection of unique elements sorted by keys
                        std::map - a collection of key-value pairs sorted by keys

            Unordered Associative Containers:
                - store data in an unordered manner using hash tables
                    ex: std::unordered_set - a collection of unique elements w/no order
                        std::unordered_map - a collection of key-value pairs w/no order
            
            Container Adaptors:
                - containers based on other existing containers
                    ex: std::stack - a LIFO DS based on deque or list
                        std::queue - a FIFO DS based on deque or list
                        std::priority_queue - a sorted queue based on vector or deque


    Algorithms
        - used to perform various operations on data stored in containers
        - 5 categories:
            - non-modifying sequence algorithms
            - modifying sequence algorithms
            - sorting algorithms
            - sorted range algorithms
            - numeric algorithms

            ex: std::find, std::replace, std::sort, std::binary_search


    Iterators
        - a unified way to access elements in containers
        - an advanced form of pointers
        - common: begin() and end()

*/