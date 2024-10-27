import java.util.*;

class customQueue{
    Stack<Integer> stA = new Stack<>();
    Stack<Integer> stB = new Stack<>();

   private void shiftStack(){
        while(!stA.empty()){
            stB.push(stA.peek());
            stA.pop();
        }
    }


    public void push(int n){
        stA.push(n);
    }

    public void pop(){
        if(stB.isEmpty()){
            shiftStack();
        }
        if(!stB.isEmpty()) stB.pop();
    }

    public int front(){
        if(stB.isEmpty()){
            shiftStack();
        }
        if(!stB.isEmpty()) return stB.peek();
        return -1;
    }

    public Boolean empty(){
        if(stB.isEmpty()){
            shiftStack();
        }
        return stB.isEmpty();
    }
}

public class implementQueueUsingStacks {
    public static void main(String[] args){
        //customQueue q = new customQueue();
        //q.push(1);
        //q.push(2);
        //q.push(3);
        //q.pop();
        //System.out.println(q.front());
    }
}
