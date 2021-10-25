queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    queue<int> qe;
    vector<int> ve;
    int e=0;
    while(!q.empty()){
        e=q.front();
        ve.push_back(e);
        q.pop();
    }
    for(int i=k-1;i>=0;i--){
        qe.push(ve[i]);
    }
   for(int i=k;i<ve.size();i++){
        qe.push(ve[i]);
   }
    return qe;
}
