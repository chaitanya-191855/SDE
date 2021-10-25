stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int> sa;
   vector<int> a;
   a.push_back(arr[0]);
   for(int i=0;i<n;i++){
       if(a[a.size()-1]>arr[i]){
           a.push_back(arr[i]);
       }
       //cout<<a[a.size()-1];
   }
   for(int i=n-1;i>=0;i--){
       sa.push(a[a.size()-1]);
       if(a[a.size()-1]==arr[i]){
           a.pop_back();
       }
   }
   return sa;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    vector<int> ve;
    while(!s.empty()){
        ve.push_back(s.top());
        s.pop();
    }
    for(int i=ve.size()-1;i>=0;i--){
        cout<<ve[i]<<" ";
    }
}

example::
Input:
N = 5
A = {1 2 3 4 5}
Output: 
1 1 1 1 1
Explanation: 
After pushing elements to the stack, 
the stack will be "top -> 5, 4, 3, 2, 1". 
Now, start popping elements from the stack
popping 5: min in the stack is 1.popped 5
popping 4: min in the stack is 1. popped 4
popping 3: min in the stack is 1. popped 3
popping 2: min in the stack is 1. popped 2
popping 1: min in the stack is 1. popped 1
