// Create a function that takes one, two or more numbers as arguments and adds them together to get a new number. 
//The function then repeatedly multiplies the digits of the new number by each other, 
//yielding a new number, until the product is only 1 digit long. Return the final product.

function additionFunc(digit1,digit2) {
    let sum = digit1+digit2;
    let arr = sum.toString().split("").map((data) => {return parseInt(data);});
    console.log("sum of the numbers:"+sum);
    console.log(arr);

    function multiplicationFunc(arr){
        let mul=1;
        for(let i=0;i<arr.length;i++){
            mul = mul*arr[i];
        }
        if(mul > 9 ){
            multiplicationFunc(mul.toString().split("").map(data=>{return parseInt(data)}))
        }
        else{
            console.log("result : "+mul);
        }
    }

    multiplicationFunc(arr);
}  

additionFunc(121,128)