class customQueue{
    private int arr[];
    private int capacity;
    private int front;
    private int back;

    customQueue(int n){
        arr = new int[n];
        capacity = n;
        front = -1;
        back = -1;
    }
    customQueue(){
        arr = new int[1];
        capacity = 1;
        front = -1;
        back = -1;
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
        if(back+1 == capacity){
            changeSize(2*capacity);
        }
        if(front == -1) front++;
        arr[++back] =  n;
    }

    public int pop(){
        if(front > back || front == -1){
            System.out.println("Queue Empty");
            front = -1;
            back = -1;
            return -1;
        }

        return arr[front++];
    }

    public int peek(){
        if(front > back || front == -1){
            System.out.println("Queue Empty");
            front = -1;
            back = -1;
            return -1;
        }

        return arr[front];
    }


    public boolean isEmpty(){
        return front > back || front == -1;
    }


}


class customQueueImplementation {
    public static void main(String[] args){
        customQueue kyu = new customQueue();
        // Test it yourself    
    }
}
