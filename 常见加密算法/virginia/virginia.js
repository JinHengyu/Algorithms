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

function getTargetKey(key, len) {
    const keyLen = key.length
    if (keyLen > len) return key.slice(0, len);
    else {
        let arr = [];
        for (let i = 0; i < len; i++) {
            arr[i] = key[i % keyLen];
        }
        return arr.join('');
    }
}

function encrypt(str, key) {
    let arr = str.split('');
    let targetKey = getTargetKey(key, str.length);
    for (let i = 0; i < arr.length; i++) {
        const s = arr[i];
        if (isLetter(s)) {
            let k = targetKey[i].charCodeAt() - CHARCODE_A;
            let newCharCode = s.charCodeAt() + k;
            if (s.charCodeAt() <= CHARCODE_Z && newCharCode > CHARCODE_Z)
                newCharCode = (newCharCode - CHARCODE_A) % 26 + CHARCODE_A;
            else if (newCharCode > CHARCODE_z)
                newCharCode = (newCharCode - CHARCODE_a) % 26 + CHARCODE_a;

            arr[i] = String.fromCharCode(newCharCode);
        }
    }

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

    rl.question('输入加密关键词: ', (key) => {
        const ciphertext = encrypt(data.toString(), key);
        console.log(data.toString());
        console.log(ciphertext);
        fs.writeFile(
            'ciphertext_virginia.txt', // 目标文件
            ciphertext, // 写入内容
            (err) => { // 结束回调
                if (err) throw err;
                console.log('加密完成');
            });

        rl.close();
    });
}

