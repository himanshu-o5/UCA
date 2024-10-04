class twoStackArray{
    private int arr[];
    private int top1;
    private int top2;
    private int capacity;

    twoStackArray(int n){
        arr = new int[n];
        capacity = n;
        top1 = -1;
        top2 = n;
    }
    twoStackArray(){
        arr = new int[1];
        capacity = 1;
        top1 = -1;
        top2 = 1;
    }


    private void changeSize(int newCapacity){
        int newArr[] = new int[newCapacity];

        for(int i=0; i<=top1; i++){
            newArr[i] = arr[i];
        }
        for(int i=top2; i<capacity; i++){
            newArr[i] = arr[i];
        }

        if(top2 == capacity) top2 = newCapacity;
        capacity = newCapacity;
        arr = newArr;
    }

    public void push1(int n){
        if(top1+1 == top2){
            changeSize(2*capacity);
        }
        arr[++top1] = n;
    }
    public void push2(int n){
        if(top1 == top2-1){
            changeSize(2*capacity);
        }
        arr[--top2] = n;
    }


    public int pop1(){
        if(top1 == -1){
            System.out.println("Stack 1 Empty");
            return -1;
        }
        return arr[top1--];
    }
    public int pop2(){
        if(top2 == capacity){
            System.out.println("Stack 2 Empty");
            return -1;
        }
        return arr[top2++];
    }

}

public class implementTwoStacksOneArray {
    public static void main(String[] args){
        twoStackArray st = new twoStackArray(1);
        // Test it yourself
    }
}
