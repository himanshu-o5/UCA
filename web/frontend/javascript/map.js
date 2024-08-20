Array.prototype.customMap = function(callback) {
    const resultArray = [];
    for (let i = 0; i < this.length; i++){
        resultArray.push(callback(this[i]));
    }
    return resultArray;
};

var arr1=[1,2,3]

function square(item){
    return item*item
}

console.log(arr1.customMap(square))
