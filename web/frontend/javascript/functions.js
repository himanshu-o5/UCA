// Traditional Approach
function foo1(){
    console.log("Foo1 Function");
}

// We can store the function in a variable.
var foo2 = function(){
    console.log("Foo2 Function");
}

// Arrow Functions.
var foo3 = () => {
    console.log("Foo3 Function");
}

// Self Invoking Functions
(() => {
    console.log("Self Invoking Function");        
})();
