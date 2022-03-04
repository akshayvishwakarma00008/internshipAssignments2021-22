/*
In JavaScript ES6 an arrow function expression is a syntactically compact alternative to a regular function expression. Create a function that takes a string representing a function and converts between an arrow function and a regular function

- If the input is a regular function, return an equivalent arrow function.

- If the input is an arrow function, return an equivalent regular function.

*/

const toggle = (arr) =>{

    let newArr = arr.split(" ")
    if(newArr[0] === 'function()'){
        newArr.splice(0,1,"()","=>");
        console.log(newArr.join(" "));
    }else{
        newArr.splice(0,2,"function()");
        console.log(newArr.join(" "));
    }
}


toggle("function() { return 'hello arrow function'}\n")
toggle("() => { return 'hello regular function'}")