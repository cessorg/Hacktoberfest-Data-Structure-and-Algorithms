function reverseStringOne(str) {
    back = [];
    lenStr = str.length;
    for (i=lenStr-1;i>=0;i--){
        back.push(str[i]);
    }
    return back.join('');
}

function reverseStringTwo(str) {
    return str.split('').reverse().join('');
}

const reverseStringThree = str => str.split('').reverse().join('');

let input = "Hello";

console.log(reverseStringThree(input));
