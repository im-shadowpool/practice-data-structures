// Last updated: 11/7/2025, 11:59:32 AM
/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    
   return {
    toBe: function(otherVal) {
      if (val === otherVal){
         return true;
      }
      throw new Error("Not Equal");
    },
    notToBe: function(otherVal) {
      if (val !== otherVal){
         return true;
      }
      throw new Error("Equal");
    }
  };
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */