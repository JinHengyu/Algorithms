const fs=require('fs');

//加密
var cryptUtil = require("./myCrypto");
// var str = "u son of bitch ";
let str = fs.readFileSync('../明文/plaintext.txt');
str+='\ni dont know WTF u r talking about ??'
var encrypt_text = cryptUtil.des.encrypt(str, 0);
var decrypt_text = cryptUtil.des.decrypt(encrypt_text, 0);
console.log(encrypt_text);
console.log(decrypt_text);

fs.writeFileSync('./output.txt',encrypt_text);