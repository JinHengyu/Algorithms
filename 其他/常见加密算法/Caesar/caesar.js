const readline = require('readline');
const fs = require('fs');

const CHARCODE_A = 'A'.charCodeAt();
const CHARCODE_Z = 'Z'.charCodeAt();
const CHARCODE_a = 'a'.charCodeAt();
const CHARCODE_z = 'z'.charCodeAt();

function isLetter(s) {
    const charCode = s.charCodeAt();
    if (charCode >= CHARCODE_A && charCode <= CHARCODE_Z || charCode >= CHARCODE_a && charCode <= CHARCODE_z)
        return true;

    return false;
}

function encrypt(str, k) {
    let arr = str.split('');
    arr = arr.map(s => {
        if (isLetter(s)) {
            let newCharCode = s.charCodeAt() + k;
            if (s.charCodeAt() <= CHARCODE_Z && newCharCode > CHARCODE_Z)
                newCharCode = (newCharCode - CHARCODE_A) % 26 + CHARCODE_A;
            else if (newCharCode > CHARCODE_z)
                newCharCode = (newCharCode - CHARCODE_a) % 26 + CHARCODE_a;

            return String.fromCharCode(newCharCode);
        }

        return s;
    });
    return arr.join('');
}

/* main */
{
    // 读取文件
    const data = fs.readFileSync('../明文/plaintext.txt');
    // 输入移位数
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question('输入加密移位数: ', (k) => {
        const ciphertext = encrypt(data.toString(), parseInt(k));
        fs.writeFile(
            'ciphertext_caesar.txt', // 目标文件
            ciphertext, // 写入内容
            (err) => { // 结束回调
                if (err) throw err;
                console.log('加密完成');
            });

        rl.close();
    });
}

