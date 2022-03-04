let arr1 = [1, 2, 3, 4];
let arr2 = [1, [2, 3, 4]];
let arr3 = [1, [2, [3, 4]]]
let arr4 = [1, [2, [3, [4]]]]
let cnt =1;

function depth(arr){
    cnt =1;
    calcDepth(arr);
    function calcDepth(arr){
        for (let i = 0; i < arr.length; i++) {
            if(Array.isArray(arr[i])){
                cnt++;
                calcDepth(arr[i]);
            }       
        }
    }
    
return cnt;
}

console.log("depth -"+depth(arr1));
console.log("depth -"+depth(arr2));
console.log("depth -"+depth(arr3));
console.log("depth -"+depth(arr4));
