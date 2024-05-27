// ECMAScript module system (ESM) syntax
import readline from "node:readline";

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question(`What is your name? `, (name) => {
  console.log(`Hi ${name}, nice to meet you!`);
  rl.close();
});
