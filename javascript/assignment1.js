//1. A boomerang is a V-shaped sequence that is either upright or upside down. Specifically, a boomerang can be defined as: sub-array of length 3, with the first and last digits being the same and the middle digit being different.

//o/p- [3, 7, 3], [1, -1, 1], [5, 6, 5]

let boomerang = [];
function boom(arr) {
    let cnt =0;
    for (let i = 0; i < arr.length; i++) {
        let newArr = arr.slice(i, i + 3);
        if ((newArr[0] === newArr[0 + 2]) && (newArr[0] !== newArr[0 + 1])) {
            //console.log(newArr);
            cnt++;
            boomerang.push(newArr)
        }
    }
    return cnt;
}

let arr = [3, 7, 3, 2, 1, 5, 1, 2, 2, -2, 2];
count = boom(arr);

console.log("total boomerang in the given arr : "+count);
console.log(boomerang);