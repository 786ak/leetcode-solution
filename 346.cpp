class MovingAverage {
public:
    
    double sum=0;
     queue<int>q;    
     int size;
    MovingAverage(int size)
    {
        this->size=size;
    }
    
    double next(int val) 
    {
        q.push(val);
        
        sum+=val;
        
        if(q.size()>size)
        {
            sum-=q.front();
            q.pop();
        }
int n=q.size();        
        return 1.0*sum/n;
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
