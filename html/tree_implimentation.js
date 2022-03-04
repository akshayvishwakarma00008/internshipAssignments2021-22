const arr = [
    {
        id: 1,
        level: 0,
        parentId: null
    },
    {
        id: 2,
        level: 1,
        parentId: 1
    },
    {
        id: 3,
        level: 1,
        parentId: 2
    },
    {
        id: 4,
        level: 3,
        parentId: 3
    },
    {
        id: 5,
        level: 3,
        parentId: 10
    },
    {
        id: 6,
        level: 3,
        parentId:10
    },
    {
        id: 10,
        level: 3,
        parentId:6
    }
];
// let newarr={};
// let tree=[];
// let element;

// for (let i = 0; i < arr.length; i++) {
//     for (let j = 1; j < arr.length; j++) {
//         if (arr[i].id == arr[j].parentId) {

//             arr[i]['child'] = arr[j];
//         }
//     }
// }

// for (let i = 0; i < arr.length; i++) {
//     element = arr[i];
//     newarr[element.id] = element;
// }

// for(let id in newarr)
// {

//     if(newarr.hasOwnProperty(id))
//     {
//         element = newarr[id];
//         if(element.parentId)
//         {
//             newarr['parentId']['child'] = element;
//         }
        
//     }
// }

// console.log(newarr);



//console.log(arr);


let root ={};

const mapp = arr.reduce((acc,elem,i)=>{
    acc[elem.id] = i;
    return acc;
},{})


arr.forEach((ele) => {
    if(ele.parentId === null){
    root = ele;
    return;
    }

    const parent = arr[mapp[ele.parentId]];
    parent.child = [...(parent.child || []),ele];
})
console.log(root);