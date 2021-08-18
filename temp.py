 

    if(pos == len(s)-1) {print(s); return;}
    
    for(i = pos; i < len(s); i+=1){
        swap(s[i],s[pos]);
        f(s,pos+1);
        swap(s[i],s[pos]);
    }