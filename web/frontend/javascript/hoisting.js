// Using var keyword the declaration of variable moves to top of the function it is declared in before executing the code.
// It would be undefined until we set a value to it.
//


// Only variables declared with var keyword are hoisted to the function scope.
// let -> not hoisted.
// const -> not hoisted and cannot be reassigned(address cannot change).



function foo() {
    console.log(var0);
    console.log(var1);
    console.log(var2);
    if(true){
        console.log(var0);
        console.log(var1);
        console.log(var2);
        var var2 = "var2";
    }
    var var1 = "var1";     
    console.log(var0);
    console.log(var1);
    console.log(var2);
}

console.log(var0);
console.log(var1);
console.log(var2);

var var0 = "var0";




