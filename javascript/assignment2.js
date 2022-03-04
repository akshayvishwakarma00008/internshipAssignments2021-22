//Create a function that takes an array of strings and returns an array with only the strings that have numbers in them. If there are no strings containing numbers, return an empty array.

let arr = ["akshay","ram","shyam123","12tom","akshy123ay"];

let newArr = arr.filter(data =>{
    let str = /\d/;
    if(str.test(data))
    {
        return data;
    }
});

console.log(newArr);
