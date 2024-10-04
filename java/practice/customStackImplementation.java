class customStack{
    private int arr[];
    private int capacity;
    private int top;


    customStack(int n){
        arr = new int[n];
        capacity = n;
        top = -1;
    }
    customStack(){
        arr = new int[1];
        capacity = 1;
        top = -1;
    }


    private void changeSize(int newCapacity){
        int newArr[] = new int[newCapacity];

        for(int i=0; i<capacity; i++){
            newArr[i] = arr[i];
        } 

        capacity = newCapacity;
        arr = newArr;
    }


    public void push(int n){
        if(top+1 == capacity){
            changeSize(2*capacity);
        }
        arr[++top] = n;
    }

    public int pop(){
        if(top == -1){
            System.out.println("Stack Empty");
            return -1;
        }
        return arr[top--];
    }

    public boolean isEmpty(){
        return top == -1;
    }

    public int peek(){
        if(top == -1){
            System.out.println("Stack Empty");
            return -1;
        }
        return arr[top];
    }

}

class customStackImplementation{
    public static void main(String[] args){
        customStack st = new customStack(); 
        // Test it yourself
    }
}
