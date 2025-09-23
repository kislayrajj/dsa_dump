function transformString(str) {
    let result = "";

    for (let ch of str) {
        let code = ch.charCodeAt(0);

        if (/[A-Z]/.test(ch)) {
            // uppercase
            let newCode = ((code - 65 + 1) % 26) + 65;
            result += String.fromCharCode(newCode)
        } else if (/[a-z]/.test(ch)) {
            // lowercase
            let newCode = ((code - 97-1+26)%26)+97;
            result+=String.fromCharCode(newCode)
        }else{
            // non-alphabetic stays same
            result += ch;
        }
    }

    return result
}

console.log(transformString("AbcXyZ"));

