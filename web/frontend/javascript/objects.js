// Everything in JS is an Object.
// Objects are collection of key-value pairs to store our data or functions.


// Multiple ways to create an object.

// Using object literals
let obj1 = {
    name: "Himanshu"
};

// Using new Object.
let obj2 = new Object({
    name: "Himanshu"
})


// Object.assign(target, value)  -> It copy the source object to target object.
let obj3 = Object.assign({name: "Himanshu"}, obj);


// Object.create() -> It used the object as prototype.
let obj4 - Object.create(obj);

