function transformString(str) {
  let result = "";

  for (let i = 0; i < str.length; i++) {
    let ch = str[i];
    let code = ch.charCodeAt(0);
    let pos = i + 1; // position (1-based)

    if (/[A-Z]/.test(ch)) {
      // Uppercase: move forward
      let newCode = ((code - 65 + pos) % 26) + 65;
      result += String.fromCharCode(newCode);
    } else if (/[a-z]/.test(ch)) {
      // Lowercase: move backward
      let newCode = ((code - 97 - pos) % 26 + 26) % 26 + 97;
      result += String.fromCharCode(newCode);
    } else {
      // Non-alphabetic stays same
      result += ch;
    }
  }

  return result;
}

// Example
console.log(transformString("AbcXyZ")); 
