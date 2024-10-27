import java.util.*;

class customStack{
    Queue<Integer> q1 = new LinkedList<>();
    Queue<Integer> q2 = new LinkedList<>();

    private void shiftQueue(){
        while(!q1.isEmpty()){
            q2.add(q1.remove());
        }
    }


    public void push(int n){
        q2.add(n);
        shiftQueue();

        Queue<Integer> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    public Integer pop(){
        if(!q1.isEmpty()) return q1.remove();
        return -1;
    }

    public Integer peek(){
        if(!q1.isEmpty()) return q1.peek();
        return -1;
    }

}

public class implementStackUsingQueue {
    public static void main(String[] args){
        //customStack st = new customStack();
        //st.push(1);
        //st.push(2);
        //st.push(3);
        //System.out.println(st.pop());
        //System.out.println(st.pop());
        //System.out.println(st.pop());
        //System.out.println(st.pop());
        
    }
}
