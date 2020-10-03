class MyArray {

    constructor() {
        this.length = 0;
        this.data = {};
    }

    get(index) {
        return this.data[index];
    }

    push(item) {
        this.data[this.length] = item;
        this.length++;
    }

    pop() {
        const item = this.data[this.length-1];
        delete this.data[this.length-1];
        this.length--;
        return item;
    }

    delete(index) {
        const item = this.data[index];
        for (let i=index;i<this.length-1;i++) {
            this.data[i] = this.data[i+1];
        }
        delete this.data[this.length-1];
        this.length--;
        return item;
    }

    insert(item,index) {
        for (let i=this.length;i>index;i--) {
            this.data[i] = this.data[i-1];
        }
        this.data[index] = item;
        this.length++;
        return item;
    }

}

let arr = new MyArray();

arr.push(1);
arr.push(2);
arr.push(3);
arr.push(4);
arr.push(5);
arr.delete(2);
arr.insert("h",0)

console.log(arr);
