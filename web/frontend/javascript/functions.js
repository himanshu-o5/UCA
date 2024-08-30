//There are many ways to declare a function in js.


// Traditional Approach
function foo1(){
    console.log("Foo1 Function");
}

// We can store the function in a variable -> function expression.
var foo2 = function(){
    console.log("Foo2 Function");
}

// Arrow Functions(They can only be used as function expression)
var foo3 = () => {
    console.log("Foo3 Function");
}

// Self Invoking Functions
(() => {
    console.log("Self Invoking Function");        
})();



// Function Declaration and Function Expression
// Declaration -> We can call declared function anywhere.
// syntax -> function foo(param){
//              console.log(); 
//           };
//
//
// Expression -> Expressed functions cannot be used before initialization.
// syntax -> let foo = function(param){
//                console.log();
//            }

