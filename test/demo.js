
// let add, print;
// function scope()
// {
//     let a = 5;
//     (function ()
//     {
//         add = function ()
//         {
//             a++;
//         };

//         print = function ()
//         {
//             console.log(a);
//         };
//     }
//     )()

// }

// scope()
// add()

// print()


// function scope()
// {
//     let a = "sadf";
//     a = "saf";
//     return function ()
//     {
//         console.log(a);
//     };
// }

// let obj = scope();
// let obj2 = scope();
// obj

// let a = 10;

// // function scope(){
// // 	return function(){
// // 		console.log(a);
// // 	};

// // }

// // let s = scope();

// delete	 a;
// console.log(a);
// JavaScript version
// function test(s){
//   console.time("substring(js)");
//   while (s.length > 1) {
//     s = s.substring(1);
//   }
//   console.timeEnd("substring(js)");
// }

// test("safagag")
// 
// function main(){
// 	let a = 10;
// 	return function(){
// 		return a;
// 	}
// }

// sum = main()

// let a = sum()
// delete sum
// console.log(a)
// 
let a ;


function main(){
	console.log(a);
}

a=10;

main();