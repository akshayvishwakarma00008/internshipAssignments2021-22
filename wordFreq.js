//word frequency 
text = "twinkle twinkle little star how i wonder what you are"; 

let freq = {};
let word = text.split(" ");

word.forEach(word => {
    
    if(freq[word])
    {
        freq[word] = freq[word]+1;
    }
    else
    return freq[word] = 1;
});


console.log(freq);
