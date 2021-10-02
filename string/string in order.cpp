string hackerrankInString(string s) {
   /* queue<char> st;
    for(int i=0;i<s.length();i++){
        if(st.empty()==0){
            st.push(s[i]);
        }else{
            if(s[i]==st.front() )
            {
                continue;
            }else{
                st.push(s[i]);
            }
        }
    }
    string s1="";
     while (!st.empty()) {
        s1=s1+st.front();
        st.pop();
     }*/
     string str="hackerrank";
     int j=0,l=1;
     string str2="";
     for(int i=0;i<s.length();i++){
         if(s[i]!=str[j]){
             continue;
         }else{
             str2=str2+s[i];
             j++;
         }
     }
     if(str==str2){
         return "YES";
     }
     return "NO";
    
}

