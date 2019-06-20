const testAddon = require('./build/Release/test-addon.node');
console.log('addon', testAddon);
console.log(testAddon.hello());
module.exports = testAddon;
