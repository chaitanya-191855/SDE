#include<bits/stdc++.h> 
using namespace std;
int main()
{
    // Initializing a vector
    vector<int> v1 = {20, 30, 40, 25, 15};
      
    // Converting vector into a heap
    // using make_heap()
    make_heap(v1.begin(), v1.end());
      
    // Displaying the maximum element of heap
    // using front()
    cout << "The maximum element of heap is : ";
    cout << v1.front() << endl;
      
    // using push_back() to enter element
    // in vector
    v1.push_back(50);
      
    // using push_heap() to reorder elements
    push_heap(v1.begin(), v1.end());
      
    // Displaying the maximum element of heap
    // using front()
    cout << "The maximum element of heap after push is : ";
    cout << v1.front() << endl;
      
     // using pop_heap() to delete maximum element
    pop_heap(v1.begin(), v1.end());
    v1.pop_back();
      
    // Displaying the maximum element of heap
    // using front()
    cout << "The maximum element of heap after pop is : ";
    cout << v1.front() << endl;
    /*
    OUTPUT::
    The maximum element of heap is : 40
    The maximum element of heap after push is : 50
    The maximum element of heap after pop is : 40
    */
      -------------------------------------------------
      // Initializing a vector
    vector<int> v1 = {20, 30, 40, 25, 15};
      
    // Converting vector into a heap
    // using make_heap()
    make_heap(v1.begin(), v1.end());
      
    // Displaying heap elements 
    cout << "The heap elements are : ";
    for (int &x : v1) 
       cout << x << " ";
    cout << endl;
      
    // sorting heap using sort_heap()
    sort_heap(v1.begin(), v1.end());
      
     // Displaying heap elements 
    cout << "The heap elements after sorting are : ";
    for (int &x : v1) 
       cout << x << " ";
      /*
    OUTPUT:
    The heap elements are : 40 30 20 25 15 
    The heap elements after sorting are : 15 20 25 30 40 
    */
    -------------------------------------------------
    // Initializing a vector
    vector<int> v1 = {40, 30, 25, 35, 15};
      
    // Declaring heap iterator
    vector<int>::iterator it1;
      
    // Checking if container is heap
    // using is_heap()
    is_heap(v1.begin(), v1.end())?
    cout << "The container is heap ":
    cout << "The container is not heap";
    cout << endl;
      
    // using is_heap_until() to check position 
    // till which container is heap
    auto it = is_heap_until(v1.begin(), v1.end());
    
    // Displaying heap range elements
    cout << "The heap elements in container are : ";
    for (it1=v1.begin(); it1!=it; it1++)
       cout << *it1 << " ";
     
     /*
     OUTPUT::
The container is not heap
The heap elements in container are : 40 30 25 
    */
    return 0;
}
