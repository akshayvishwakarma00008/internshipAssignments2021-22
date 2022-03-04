//Create a function which counts how many lone 1s appear in a given number. 
//Lone means the number doesn't appear twice or more in a row.
//example: countLoneOnes(101) ➞ 2, countLoneOnes(1191) ➞ 1

function countOnes(str) {
    let newArr = str.split("");
    let count = 0;
    for (let i = 0; i < newArr.length; i++) {
        if (i===0){
            if ((newArr[i] === '1') && (!(newArr[i+1] === '1'))) {
                count++; 
            }
              
        }
        else if(i===newArr.length-1){
            if ((newArr[i] === '1') && (!(newArr[i-1] === '1'))) {
                count++; 
            }
        }
        else{
            if ((newArr[i] === '1') && (!(newArr[i+1] === '1')) && (!(newArr[i-1] === '1'))) {
                count++; 
            }
        }
        
    }
    return count;
    
}


console.log(countOnes("10101191101011"));